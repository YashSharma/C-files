#include<iostream>
#include<queue>
using namespace std;
static long long a[2000][2000];
static int check[2000];
int isSuspicious(long long num,long long src)
{   long long color[2000];
    long long i,j;
    for(i=0;i<num;i++)
    {   color[i]=-1;
    }
    color[src]=1;
    check[src]=1;
    queue <int>q;
    q.push(src);
    while(!q.empty())
    {   long long  v,u=q.front();
        q.pop();
        
        for(v=0;v<num;++v)
        {   if(a[u][v] && color[v]==-1)
            {   color[v]=1-color[u];
                check[v]=1;
                q.push(v);
            }else if(a[u][v] && color[v]==color[u])
                return true;    
        }
    }
    return false;
}
int main()
{   long long i,j,t,num,inter,row,col,k;
    scanf("%lld",&t);
    for(j=0;j<t;j++)
    {   scanf("%lld %lld",&num,&inter);
        for(i=0;i<num;i++)
        {   check[i]=0;
            for(k=0;k<num;k++)
        {       a[i][k]=0;
        }
        }
        for(i=0;i<inter;i++)
        {   scanf("%lld %lld",&row,&col);
            a[row-1][col-1]=1;
            a[col-1][row-1]=1;
        }
        bool test=false;
        for(i=0;i<num;i++)
        {   if(check[i]==0)
            {   test=isSuspicious(num,i);
            }
             if(test)
                break;
        }
        if(test)
        {   printf("Scenario #%llu:\n",j+1);
            printf("Suspicious bugs found!\n");
        }
        else
        {   printf("Scenario #%llu:\n",j+1);
            printf("No suspicious bugs found!\n");
        }
    }
    return 0;
}