#include<iostream>
#include<stdio.h>
static int arr[100][100];
int vis[100],n,m;
void dfs(int v)
{   vis[v]=1;
    int i,j,k;
    for(i=0;i<m;i++)
    {   if(arr[v][i])
        {   for(j=0;j<n;j++)
            {   if(j==v)
                    continue;
                if(arr[j][i]==arr[v][i] && !vis[j])
                    dfs(j);
            
            }
        }
    }
}
int main()
{   int i,j,num,count=0,lang,ans=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {   vis[i]=0;
        for(j=0;j<m;j++)
    {   arr[i][j]=0;
    }
    }
    for(i=0;i<n;i++)
    {   scanf("%d",&num);
        count+=num;
        for(j=0;j<num;j++)
        {   scanf("%d",&lang);
            arr[i][lang-1]=1;
        }
    }
    for(i=0;i<n;i++)
    {   if(!vis[i])
    {   
        ans++;
        dfs(i);
    }
    }
    if(!count)
    {   ans++;
    }
    printf("%d\n",ans-1);
    return 0;
}