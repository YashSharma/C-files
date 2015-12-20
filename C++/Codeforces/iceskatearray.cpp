#include<iostream>
#include<stdio.h>
bool mark[110];
static int x[110],y[110];
int size;
void dfs(int pos)
{   if(mark[pos]) return;
    mark[pos]=1;
    int i;
    for(i=0;i<size;i++)
    {   if(x[i]==x[pos] || y[i]==y[pos])
            dfs(i);
    }
}
int main()
{   int ans=0,i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {   scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<size;i++)
    {   if(!mark[i])
        { dfs(i); ans++;   }
    }
    printf("%d\n",ans-1);
    return 0;
}