#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
static char arr[500][500];
static int vis[500][500];
int n,m,k,num=0;
void dfs(int i,int j)
{   if(num==k)
    {   return;
    }
    num++;
    vis[i][j]=1;
        if(arr[i+1][j]=='.' && i+1<n && !vis[i+1][j])
        {   dfs(i+1,j);  }
        if(arr[i-1][j]=='.' && i-1>-1 && !vis[i-1][j])
        {    dfs(i-1,j);    }
        if(arr[i][j+1]=='.' && j+1<m && !vis[i][j+1])
        {    dfs(i,j+1);    }
        if(arr[i][j-1]=='.' && j-1>-1 && !vis[i][j-1])
        {   dfs(i,j-1);     }
    
}
int main()
{   int i,j,count=0;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++)
    {   for(j=0;j<m;j++)
        {   cin>>arr[i][j];
            vis[i][j]=0;
        }
    }
    for(i=0;i<n;i++)
    {   for(j=0;j<m;j++)
        {   if(arr[i][j]=='.')
                count++;
        }
    }
    bool finish=false;
    k=count-k;
    for(i=0;i<n && !finish;i++)
    {   for(j=0;j<m;j++)
        {   if(arr[i][j]=='.')
            {   dfs(i,j);
                finish=true;
            }
        }
    }
    for(i=0;i<n;i++)
    {   for(j=0;j<m;j++)
    {   if(arr[i][j]=='.' && !vis[i][j])
            cout<<"X";
        else
            cout<<arr[i][j];
    }   printf("\n");
    }
    return 0;
}