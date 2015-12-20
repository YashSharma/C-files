#include<iostream>
#include<list>
using namespace std;
class Graph{
    int v;
    list <int> *adj;
    void dfsutil(int src,bool visited[]);
    public:
    void dfs(int src);
    void addEdge(int v,int w);
    Graph(int v);
};

Graph::Graph(int v)
{   this->v=v;
    adj=new list<int>[v];
}

void Graph::addEdge(int v,int w)
{   adj[v].push_back(w);
}

void Graph::dfs(int src)
{   bool* visited=new bool[v];
    int i;
    for(i=0;i<v;i++)
    {   visited[i]=false;
    }
    dfsutil(src,visited);
}

void Graph::dfsutil(int src, bool visited[])
{   int m=src;
    visited[src]=true;
    cout<<src;
    list<int>::iterator i;
    for(i=adj[src].begin();i!=adj[src].end();i++)
    {   if(!visited[*i])
            dfsutil(*i,visited);
    }
}
int main()
{   Graph g(4);
    
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    
    cout<<"Dfs"<<endl;
    g.dfs(2);
    
    return 0;
}