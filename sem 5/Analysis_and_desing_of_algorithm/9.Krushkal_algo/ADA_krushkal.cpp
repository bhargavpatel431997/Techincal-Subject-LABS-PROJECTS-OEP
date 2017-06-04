#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct disjointsets
{
    int *parent_v, *rank_v;
    int n;
    disjointsets(int n)
    {
        this->n = n;
        parent_v = new int[n+1];
        rank_v = new int[n+1];
        for (int i = 0; i <= n; i++)
        {
            rank_v[i] = 0;
            parent_v[i] = i;
        }
    }
    int find(int u)
    {
        if (u != parent_v[u])
            parent_v[u] = find(parent_v[u]);
        return parent_v[u];
    }
    void merge(int x, int y)
    {
        x = find(x), y = find(y);
        if (rank_v[x] > rank_v[y])
            parent_v[y] = x;
        else
            parent_v[x] = y;

        if (rank_v[x] == rank_v[y])
            rank_v[y]++;
    }
};
struct graph
{
    int v, e;
    vector< pair<int, pair<int, int> > > edges;
    graph(int v, int e)
    {
        this->v = v;
        this->e = e;
    }
    void addedge(int u, int v, int w)
    {
        edges.push_back(make_pair(w,make_pair(u, v)));
    }
    int kruskal()
    {
        int total_w = 0;
        sort(edges.begin(), edges.end());
        disjointsets ds(v);
        vector< pair<int, pair<int, int> > >::iterator it;
        cout<<"vertex1    vertex2  edge_weight   total_weight"<<endl;
        for (it=edges.begin(); it!=edges.end(); it++)
        {
            int u = it->second.first;
            int v = it->second.second;
            int set_u = ds.find(u);
            int set_v = ds.find(v);
            if (set_u != set_v)
            {
                total_w += it->first;
                cout << u << "\t->\t" << v <<"\t"<<it->first<<"\t\t"<<total_w<<endl;
                ds.merge(set_u, set_v);
            }
        }
        return total_w;
    }
};
int main()
{
    int v,e;
    cout<<"enter number of vertices\n";
    cin>>v;
    cout<<"enter number of edges\n";
    cin>>e;
    graph g(v, e);
    cout<<"enter values in format of vertex1 vertex2 edge_weight"<<endl;
    for(int i=0;i<e;i++)
    {
        int v1,v2,w;
        cout<<i+1<<". enter v1 v2 w"<<endl;
        cin>>v1>>v2>>w;
        g.addedge(v1,v2,w);
    }
    int total_w = g.kruskal();
    cout << "\nminimum spanning tree weight is " << total_w;
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
