#include<iostream>
#include<stdio.h>
#include<queue>
#include<list>
using namespace std;
int n,k1,k2;
list<int> queuefirst;
list<int> queuesecond;
int dfs()
{   int count=0;
    while(!queuefirst.empty() && !queuesecond.empty())
    {   if(count>106)
        {   return -1;
        }
        int first,second;
        first=queuefirst.front();
        second=queuesecond.front();
        queuefirst.pop_front();
        queuesecond.pop_front();
        if(first>second)
        {   queuefirst.push_back(second);
            queuefirst.push_back(first);
        }else
        {   queuesecond.push_back(first);
            queuesecond.push_back(second);
        }
        count++;
    }
    return count;
}   
int main()
{   int i,toinsert;
    scanf("%d",&n);
    scanf("%d",&k1);
    for(i=0;i<k1;i++)
    {   scanf("%d",&toinsert);
        queuefirst.push_back(toinsert);
    }   
    scanf("%d",&k2);
    for(i=0;i<k2;i++)
    {   scanf("%d",&toinsert);
        queuesecond.push_back(toinsert);
    }
    int ans=dfs();
    if(ans==-1)
    {   printf("-1\n");
    }else   if(!queuefirst.empty()){
        printf("%d 1\n",ans);
    }else{
        printf("%d 2\n",ans);
    }
    return 0;
}