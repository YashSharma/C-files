#include<iostream>
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<list>
using namespace std;
static int level[2005];
class Graph
{   int V;
    list<int> *adj;
    public:
    Graph(int v);
    void addEdge(int n,int m);
    int bfs(int src);
};
    Graph::Graph(int v)
    {   this->V=v;
        adj=new list<int>[V];
    }
    void Graph::addEdge(int n,int m)
    {   adj[n].push_back(m);   }
    int Graph::bfs(int src)
    {   queue<int> q;
        q.push(src);
        level[1]=1;
        int j=1;
        while(!q.empty())
        {   int x=q.front();
            q.pop();
            list<int>::iterator i;
            for(i=adj[x].begin();i!=adj[x].end();i++)
            {   level[j+1]++;
                q.push(*i);
            }
            level[j]--;
            if(level[j]==0)
            {   j++;
            }
         }   
        return (j-1);
    }

int main()
{   int t,m,i,level,max=0;
    static int head[2005],j=0;
    scanf("%d",&t);
    Graph g(t+10);
    for(i=1;i<=t;i++)
    {   scanf("%d",&m);
        if(m==-1)
            head[j++]=i;
        else
            g.addEdge(m,i);
    }
    for(i=0;i<j;i++)
    {   level=g.bfs(head[i]);
        if(level>max)
            max=level;
    }
    printf("%d\n",max);
}