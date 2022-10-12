#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_studio(0);cin.tie(0);

class Graph
{
public:
    int n; 
    vector<int> *adj;
    bool is_undirected;

    bool *visited = NULL; 

    Graph(int n, bool is_undirected = true)
    {
        this->n = n;
        this->adj = new vector<int>[n];
        this->is_undirected = is_undirected;
    }

    void add_edge(int u, int v)
    {
        this->adj[u].push_back(v);
        if (this->is_undirected)
        {                        
            this->adj[v].push_back(u); 
        }
    }

    int count_components()
    {
        delete this->visited; 
        this->visited = new bool[this->n];
        memset(this-> visited, 0, sizeof(bool)*this->n);

        int qtd_components = 0; 

        for (int i = 0; i < n; i++)
        {
            if (!this->visited[i])
            {
                this->dfs(i); 
                qtd_components++;
            }
        }

        return qtd_components;
    }

    void dfs(int current)
    {
        this->visited[current] = true;

        for (int i = 0; i < this->adj[current].size(); i++)
        {
            int neighbour = this->adj[current][i];

            if (!this->visited[neighbour])
                this->dfs(neighbour);
        }
    }
};

int main(){

    int n, m;
    cin >> n >> m;

    Graph graph(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph.add_edge(u-1, v-1);
    }

    cout << graph.count_components() << endl;
    
    return 0;
}