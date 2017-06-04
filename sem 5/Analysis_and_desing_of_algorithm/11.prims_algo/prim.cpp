#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<cstdio>
# define INF 100000000
using namespace std;

typedef pair<int, int> iPair;
struct Graph
{
    int V;
    list< pair<int, int> > *adj;
    Graph(int V)
    {
        this->V = V;
        adj = new list<iPair> [V];
    }
    void addEdge(int u, int v, int w)
    {
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    void primMST()
    {
        priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
        int src = 0;
        vector<int> key(V, INF);
        vector<int> parent(V, -1);
        vector<bool> inMST(V, false);
        pq.push(make_pair(0, src));
        key[src] = 0;
        while (!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();
            inMST[u] = true;
            list< pair<int, int> >::iterator i;
            for (i = adj[u].begin(); i != adj[u].end(); ++i)
            {
                int v = (*i).first;
                int weight = (*i).second;
                if (inMST[v] == false && key[v] > weight)
                {
                    key[v] = weight;
                    pq.push(make_pair(key[v], v));
                    parent[v] = u;
                }
            }
        }
        cout<<"vertex1    vertex2"<<endl;
        for (int i = 1; i < V; ++i)
            printf("%d  \t->   %d\n", parent[i], i);
    }
};
int main()
{
    int v,e;
    cout<<"enter number of vertices\n";
    cin>>v;
    cout<<"enter number of edges\n";
    cin>>e;
    Graph g(v);
    for(int i=0;i<e;i++)
    {
        int v1,v2,w;
        cout<<i+1<<". enter vertex1 vertex2 weight values"<<endl;
        cin>>v1>>v2>>w;
        g.addEdge(v1,v2,w);
    }
    g.primMST();
    return 0;
}
/*
readings
9
14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
*/
