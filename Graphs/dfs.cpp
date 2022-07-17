#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return a list containing the DFS traversal of the graph.

    void dfs(int node, vector<int> adj[], vector<int> &ans, vector<int> &visited)
    {
        ans.push_back(node);
        visited[node] = 1;

        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                dfs(i, adj, ans, visited);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {

        vector<int> ans;
        vector<int> visited(V, 0);

        dfs(0, adj, ans, visited);

        return ans;
    }
};

int main()
{
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution obj;
    vector<int> ans = obj.dfsOfGraph(V, adj);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}