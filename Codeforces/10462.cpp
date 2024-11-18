#include<bits/stdc++.h>
using namespace std;
#define edge pair<int,int>
class Graph
{
private:
    int *parent;
    vector< pair<int, edge> >g;///graph
    vector< pair<int, edge> >t;///mst
    int V;
public:
    Graph(int V);
    void AddWeightedEdge(int , int , int );
    int find_set(int);
    void union_set(int , int );
    void kruskal(int,int,int);
    void reset(int);
};
Graph::Graph(int V)
{
    parent = new int[V];
//    for(int i=0; i<V; i++)
//    {
//        parent[i] = i;
//    }
    g.clear();
    t.clear();
}
void Graph::reset(int n)
{
    for(int i=1; i<=n; i++)
    {
        parent[i]=i;
    }
}
void Graph::AddWeightedEdge(int u, int v, int w)
{
    g.push_back(make_pair(w,edge(u,v)));
}
int Graph::find_set(int i)
{
    if(i==parent[i])
        return i;
    else
        return find_set(parent[i]);
}
void Graph::union_set(int u, int v)
{
    parent[u] = v;
}
void Graph::kruskal(int n,int m,int t)
{
    int i,uRep,vRep,total=0;
    reset(n);
    sort(g.begin(),g.end());
    vector<int>taken;
    for(i=0; i<m; i++)
    {
        uRep = find_set(g[i].second.first);
        vRep = find_set(g[i].second.second);
        if(uRep==vRep)
            continue;
        union_set(uRep,vRep);
        total+=g[i].first;
        taken.push_back(i);
    }
    cout << "Case #" << t << " : ";
    if(taken.size() != n-1)
    {
        cout << "No way" << endl;
    }
    else
    {
        long long inf = INT_MAX;
        long long mn = inf;
        for(int i : taken)
        {
            reset(n);
            long long cost = 0;
            int edge_cnt = 0;
            for(int j=0; j<m; j++)
            {
                if(j==i)
                    continue;
                int uRep = find_set(g[j].second.first);
                int vRep = find_set(g[j].second.second);
                if(uRep==vRep) continue;
                union_set(uRep,vRep);
                cost += g[j].first;
                edge_cnt++;
            }
            if(edge_cnt == n-1)
            {
                mn = min(mn, cost);
            }
        }
        if(mn == inf)
        {
            printf("No second way\n");
        }
        else
        {
            printf("%lld\n", mn);
        }
    }
}
int main()
{
    int t,v,e,w,n,m,l,j;
    cin >> t;
    l = t;
    while(t--)
    {
        cin >> n >> m;
        Graph g(n);
        for(int i=0; i<m; i++)
        {
            cin >> w >> v >> e;
            g.AddWeightedEdge(w,v,e);
        }
        j = l - t;
        g.kruskal(n,m,j);
    }
    return 0;
}
