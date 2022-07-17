#include <bits/stdc++.h>
using namespace std;
template <typename T>// so that graph of any data type can be made

class graph{

    public:
    unordered_map<T, list<T>> adj;

    //Adjacency List is being used here to represent graph
    //Another way of representation is Adjacency Matrix

    void addEdge(T u, T v, bool direction)
    {
        // direction = 0 -> undirected
        //direction = 1 -> directed

        //create an edge from u to v
        adj[u].push_back(v);
        if (direction == 0)
        {
            //create an edge from v to u also since graph is undirected
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj) //accessing the first element of the Adj. List
        {
            cout<<i.first<<" -> ";// index node of the list
            for (auto j : i.second)// accessing the nodes connected to the index node
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

};

int main()
{
    int n;
    cin>>n;
    // number of nodes

    int m;
    cin>>m;
    //number of edges

    graph<int> g;

    for (int i=0;i<m;i++)
    {
        char u,v;
        cin>>u>>v;// nodes between whom edges will be formed
        g.addEdge(u,v,0);// undirected graph
    }

    g.printAdjList();

    return 0;
}