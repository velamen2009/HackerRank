#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

class Graph {
    public:
        Graph(int n) {
            nodes = vector<int>(n);
            edges = vector<vector<int>>(n, vector<int>());
        }
    
        void add_edge(int u, int v) {
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
    
        vector<int> shortest_reach(int start) {
            vector<int> ans(nodes.size(), -1);
            nodes[start] = 1;
            queue<int> q;
			q.push(start);
            int cnt = 6;
            while(!q.empty()){
                int size = q.size();
                while(size--){
					int u = q.front();
					q.pop();
                    for(int j = 0; j < edges[u].size(); ++j){
                        if(0 == nodes[edges[u][j]]){
                            int v = edges[u][j];
							nodes[v] = 1;
							ans[v] = cnt;
							q.push(v);
                        }
                    }
                }
                cnt += 6;
            }
            return ans;
        }
    private:
        vector<int> nodes;
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