#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
int main()
{   queue<int> q;
    int n,m;
    static int need[20050];
    bool used[20050]={0};
    scanf("%d %d",&n,&m);
    need[n]=0;
    used[n]=1;
    q.push(n);
    while(!q.empty())
    {   int x=q.front();
        q.pop();
        if(x>0 && !used[x-1])
        {   used[x-1]=1;
            need[x-1]=need[x]+1;
            q.push(x-1);
        }
        if(x<=m && !used[x+x])
        {   used[x+x]=1;
            need[x+x]=need[x]+1;
            q.push(x+x);
        }
    }
    printf("%d\n",need[m]);
    return 0;
}
