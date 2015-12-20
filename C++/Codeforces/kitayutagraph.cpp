#include<iostream>
#include<stdio.h>
#include<vector>
static int edge[102][102][102];
static int visited[102];
static int colortest[102];
using namespace std;
int n,ans,m;
void dfs(int u,int v,int color)
{   int i,j;
    for(i=1;i<=n;i++)
    {   for(j=1;j<=m;j++)
        {
        if(edge[u][i][j] && !visited[i] && !colortest[j])
        {   if(i==v && (color==-1 || color==j))
            {   ans++;
                colortest[j]=1;
            }
            else if(color==j || color==-1) 
            {   visited[u]=1;
                dfs(i,v,j);
            }
            visited[u]=0;
        }
        }
    }
}
int main()
{   int q,u,v,x,y,color,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n;i++)
    {   for(j=0;j<=n;j++)
        {    for(k=0;k<=m;k++)
        {   edge[i][j][k]=0;
        }
        }
    }
    for(i=0;i<m;i++)
    {   scanf("%d %d %d",&x,&y,&color);
        edge[x][y][color]=1;
        edge[y][x][color]=1;
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {   for(j=0;j<=n;j++)
        {   visited[j]=0;
        }
        for(j=0;j<m;j++)
        {   colortest[j]=0;
        }
        scanf("%d %d",&u,&v);
        ans=0;
        dfs(u,v,-1);
        printf("%d\n",ans);
    }
  return 0;
}