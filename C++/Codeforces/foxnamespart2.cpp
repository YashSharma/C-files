#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;
char st[102][102];
int vis[50];
vector<int> edge[50];
int topo[50],cnt=0;
bool addEdge(char *s1,char *s2)
{   int len,len1,len2,i;
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1<len2)
        len=len1;
    else 
        len=len2;
    for(i=0;i<len;i++)
    {   if(s1[i]!=s2[i])
        {   edge[s2[i]-'a'].push_back(s1[i]-'a');
            return true;
        }
    }
    return len1<len2;
}
bool dfs(int u)
{   vis[u]=-1;
    for(int i=0;i<edge[u].size();i++)
    {   int v=edge[u][i];
        if(vis[v]==-1) return true;
        if(!vis[v] && dfs(v))return true;
    }
    topo[cnt++]=u;
    vis[u]=1;
    return false;
}
int main()
{   int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   cin>>st[i];
    }
    for(i=1;i<n;i++)
    {   if(!addEdge(st[i-1],st[i])) 
        {   printf("Impossible\n");
            return 0;
        }
    }
    for(i=0;i<26;i++)
    {   vis[i]=0;
    }
    for(i=0;i<26;i++)
    {   if(!vis[i])
        {   if(dfs(i))
            {   printf("Impossible\n");
                return 0;
            }
        }
    }
    for(i=0;i<cnt;i++)
    {   printf("%c",topo[i]+'a');
    }
    printf("\n");
    return 0;
}
