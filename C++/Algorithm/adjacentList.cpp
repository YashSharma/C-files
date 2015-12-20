#include<stdio.h>
#include<iostream>

struct AdjlistNode
{   int dest;
    struct AdjlistNode *next;
};
struct Adjlist
{   struct AdjlistNode *head;
};
struct Graph
{   int V;
    struct Adjlist *array;
};
struct AdjlistNode* newAdjlistNode(int dest)
{   struct AdjlistNode* newNode= new AdjlistNode;
    newNode->dest=dest;
    newNode->next=NULL;
    return newNode;
}
struct Graph* createGraph(int V)
{   struct Graph* graph=new Graph;
    graph->V=V;
    graph->array=new Adjlist[V];
    int i;
    for(i=0;i<V;i++)
    {   graph->array[i].head=NULL;
    }
    return graph;
}
void addEdge(struct Graph* graph,int src,int dest)
{   struct AdjlistNode* newNode=newAdjlistNode(dest);
    newNode->next=graph->array[src].head;
    graph->array[src].head=newNode;
    
    newNode=newAdjlistNode(src);
    newNode->next=graph->array[dest].head;
    graph->array[dest].head=newNode;
}
void printGraph(struct Graph* graph)
{   int v;
    for(v=0;v<graph->V;v++)
    {   struct AdjlistNode* pcrawl=graph->array[v].head;
        printf("Head");
        while(pcrawl)
        {   printf("-> %d",pcrawl->dest);
            pcrawl=pcrawl->next;
        }
        printf("\n");
    }
}
int main()
{   int v=5;
    struct Graph* graph=createGraph(v);
    addEdge(graph,0,1);
     addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    
    printGraph(graph);
    return 0;
}