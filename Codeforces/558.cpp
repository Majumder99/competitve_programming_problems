#include<bits/stdc++.h>
using namespace std;
struct Edge
{
    int u;
    int v;
    int w;
};
struct Graph
{
    int V;
    int E;
    struct Edge *edge;
};
struct Graph* createGraph(int V,int E)
{
    struct Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    return graph;
};
void bellmanford(struct Graph* graph,int u,int l,int m)
{
    int V = l;
    int E = m;
    int dist[V];

    for(int i=0; i<V; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[u] = 0;
    for(int k = 1; k<V-1; k++)
    {
        for(int j=0; j<E; j++)
        {
            int u = graph->edge[j].u;
            int v = graph->edge[j].v;
            int w = graph->edge[j].w;
            if (dist[u] != INT_MAX && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }
    int flag = 0;
    for(int j=0; j<E; j++)
    {
        int u = graph->edge[j].u;
        int v = graph->edge[j].v;
        int w = graph->edge[j].w;
        if (dist[u] != INT_MAX && dist[u] + w < dist[v])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout << "possible" << endl;
    else
        cout << "not possible" << endl;
    return;
}
int main()
{
    int V,E,t;
    cin >> t;
    while(t--)
    {
        cin>>V>>E;
        struct Graph* graph = createGraph(V,E);
        int first_node,last_node,weight;
        for(int i=0; i<E; i++)
        {
            cin>>first_node>>last_node>>weight;
            graph->edge[i].u = first_node;
            graph->edge[i].v = last_node;
            graph->edge[i].w = weight;
        }

        bellmanford(graph,0,V,E);
    }
    return 0;
}
