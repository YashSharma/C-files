#include<iostream>
#include<stdio.h>
using namespace std;
bool visited[22][22]={0};
int direw[22],dirns[22];
int n,m;
void dfs(int i,int j)
{   if(i<0 || i==m || j<0 ||j==n)
    {   return;    }
    else
    if(visited[i][j]==1)
    {   return;   }
    else
    {
    visited[i][j]=1;
    int i1,j1;
    i1=i+direw[j];
    j1=j+dirns[i];  
    dfs(i1,j);
    dfs(i,j1);
    }
}
int main()
{   int i,j,x,y;
    char sign[24];
    scanf("%d %d",&n,&m);
    cin>>sign;
    for(i=0;i<n;i++)
    {   if(sign[i]=='>')
            direw[n-1-i]=1;
        else 
            direw[n-1-i]=-1;
    }
    cin>>sign;
    for(i=0;i<m;i++)
    {   if(sign[i]=='v')
            dirns[i]=-1;
        else
            dirns[i]=1;
    }
    for(i=0;i<m;i++)
    {   for(j=1;j<n;j++)
        {   for(x=0;x<m;x++)
            {   for(y=0;y<n;y++)
                {   visited[x][y]=0;
                }
            }
            dfs(i,j);
            for(x=0;x<m;x++)
            {   for(y=0;y<n;y++)
                {   if(visited[x][y]==0)
                    {   printf("NO\n");
                        return 0;
                    }
                }
            }
        }
    }
    printf("YES\n");
    return 0;
}