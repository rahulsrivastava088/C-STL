// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    // Using BFS
    bool cyclePresentBFS(int node, vector<bool> &visited, vector<int> adj[])
    {
        queue<pair<int,int>> q;
        q.push({node, -1});
        visited[node] = true;
        
        while(!q.empty())
        {
            int nd = q.front().first;
            int pr = q.front().second;
            q.pop();
            for (auto it : adj[nd])
            {
                if (!visited[it])
                {
                    q.push({it, node});
                    visited[it] = true;
                }
                else if (pr != it)
                    return true;
            }
        }
        
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<bool> visited(V,false);
        for (int i=0;i<V;i++)
        {
            if (!visited[i])
            {
                if (cyclePresentBFS(i, visited, adj))
                return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends
