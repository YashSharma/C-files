#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct Edge
{   unsigned long long src,dest,weight;
};
struct Graph
{   unsigned long long V,E;
    struct Edge* edge;
};
struct Graph* createGraph(unsigned long long V,unsigned long long E)
{   struct Graph* graph=(struct Graph*)malloc(sizeof(struct Graph));
    graph->V=V;
    graph->E=E;
    graph->edge=(struct Edge*)malloc(graph->E*sizeof(struct Edge));
    return graph;
}
struct subset
{   unsigned long long parent,rank;  
};
unsigned long long find(struct subset subsets[],unsigned long long i)
{   if(subsets[i].parent!=i)
        subsets[i].parent=find(subsets,subsets[i].parent);
    return subsets[i].parent;
}
void Union(struct subset subsets[],int x,int y)
{   unsigned long long xroot=find(subsets,x);
    unsigned long long yroot=find(subsets,y);
    if(subsets[xroot].rank<subsets[yroot].rank)
        subsets[xroot].parent=yroot;
    else if(subsets[yroot].rank<subsets[xroot].rank)
        subsets[yroot].parent=xroot;
    else
    {   subsets[yroot].parent=xroot;
        subsets[xroot].rank++;
    }
}
int myComp(const void* a,const void* b)
{   struct Edge* a1=(struct Edge*)a;
    struct Edge* b1=(struct Edge*)b;
    return a1->weight > b1->weight;
}
unsigned long long KruskalMST(struct Graph* graph)
{   unsigned long long sum=0;
    unsigned long long V=graph->V;
    struct Edge result[V];
    unsigned long long e=0;
    unsigned long long i=0;
    qsort(graph->edge,graph->E,sizeof(graph->edge[0]),myComp);
    struct subset* subsets=(struct subset*)malloc(V*sizeof(struct subset));
    for(int v=0;v<V;v++)
    {   subsets[v].parent=v;
        subsets[v].rank=0;
    }
    while(e<V-1)
    {   struct Edge next_edge=graph->edge[i++];
        unsigned long long x=find(subsets,next_edge.src);
        unsigned long long y=find(subsets,next_edge.dest);
        if(x!=y)
        {   result[e++]=next_edge;
            Union(subsets,x,y);
        }
    }
    for(i=0;i<e;i++)
    {   sum+=result[i].weight;
    }
    return sum;
}
int main()
{   unsigned long long numvertices,numedges,numsrc,numdest,numweight;
    scanf("%llu %llu",&numvertices,&numedges);
    struct Graph* graph=createGraph(numvertices,numedges);
    for(unsigned long long i=0;i<numedges;i++)
    {   scanf("%llu %llu %llu",&numsrc,&numdest,&numweight);
        graph->edge[i].src=numsrc;
        graph->edge[i].weight=numweight;
        graph->edge[i].dest=numdest;
    }
    printf("%llu\n",KruskalMST(graph));
    return 0;
}