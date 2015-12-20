#include<iostream>
#include<stdio.h>
#include<list>
using namespace std;
int run=0;
class Graph{
    int size;
    list<pair<int,int> > adj;
    public:
    Graph(int size);
    void addEdge(int a,int b);
    void count();
};
Graph::Graph(int size)
{   this->size=size;
}
void Graph::addEdge(int a,int b)
{   pair<int,int> p;
    p.first=a;
    p.second=b;
    adj.push_back(p);
}
void Graph::count()
{   int i;
    list<pair<int,int> >queue;
    list<pair<int,int> >::iterator p=adj.begin();
    queue.push_front(*p);
    adj.erase(p);
    while(!queue.empty())
    {   pair<int,int> test=queue.front();
        int x=test.first;
        int y=test.second;
        queue.pop_front();
    for(p=adj.begin();p!=adj.end();p++)
    {   if(p->first==x || p->second==y)
        {   queue.push_front(*p);
            adj.erase(p); 
        }
    }
     if(adj.empty())
         break;
    }
    run++;
    if(!adj.empty())
        count();
}
int main()
{   int n,x,y;
    scanf("%d",&n);
    Graph g(n);
    for(int i=0;i<n;i++)
    {   scanf("%d %d",&x,&y);
        g.addEdge(x,y);
    }
    g.count();
    printf("%d\n",run-1);
    return 0;
}