#include<iostream>
#include<stdio.h>
int main()
{   int n,m,i,a,b,check;
    scanf("%d %d",&n,&m);
    int visited[n+5];
    for(i=0;i<=n;i++)
    {   visited[i]=0;
    }
    for(i=0;i<m;i++)
    {   scanf("%d %d",&a,&b);
        visited[a]=1;
        visited[b]=1;
    }
    for(i=1;i<n+1;i++)
    {   if(visited[i]==0)
        {   check=i;    break;}
    }
    printf("%d\n",n-1);
    for(i=1;i<=n;i++)
    {   if(i!=check)
        {   printf("%d %d",i,check);
            printf("\n");
        }
    }
    return 0;
    
}