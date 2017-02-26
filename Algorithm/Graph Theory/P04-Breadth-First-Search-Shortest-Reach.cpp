#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;


class Graph {
    public:
        Graph(int n) {
            nodes = n;
            edges = vector<vector<int>>(n, vector<int>());
        }
    
        void add_edge(int u, int v) {
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
    
        vector<int> shortest_reach(int start) {
            vector<int> ans(nodes, -1);
            vector<bool> vis(nodes, false);
            vis[start] = 1;
            queue<int> q;
            q.push(start);
            int cnt = 6;
            while(!q.empty()){
                int size = q.size();
                while(size--){
                    int u = q.front();
                    q.pop();
                    for(int j = 0; j < edges[u].size(); ++j){
                        if(false == vis[edges[u][j]]){
                            q.push(edges[u][j]);
                            vis[edges[u][j]] = true;
                            ans[edges[u][j]] = cnt;
                        }
                    }
                }
                cnt += 6;
            }
            return ans;
        }
    private:
        int nodes;
        vector<vector<int>> edges;
};

int main() {
    int queries;
    cin >> queries;
        
    for (int t = 0; t < queries; t++) {
        int n, m;
        cin >> n;
        // Create a graph of size n where each edge weight is 6: 
        Graph graph(n);
        cin >> m;
        // read and set edges
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            // add each edge to the graph
            graph.add_edge(u, v);
        }
        int startId;
        cin >> startId;
        startId--;
        // Find shortest reach from node s
        vector<int> distances = graph.shortest_reach(startId);

        for (int i = 0; i < distances.size(); i++) {
            if (i != startId) {
                cout << distances[i] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}