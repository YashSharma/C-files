#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
static int a[302][302];
bool visited[302]={0};
static int test[302];
static int position[302];
static int p[302];
int pos=0;
void tovisit(int n,int size)
{   int flag=0,i=n,j;
        visited[i]=1;
        for(j=0;j<size;j++)
        {   if(visited[j]==0)
        {   if(a[i][j]==1)
        {   test[pos]=p[j];
            position[pos++]=j;
            tovisit(j,size);
        }
        }
        }
}
 int bfs(int size)
 {  int i,j,flag=0;
    sort(position,position+pos);
    sort(test,test+pos);
    for(i=0;i<pos;i++)
    {   p[position[i]]=test[i];   
    }
    for(i=0;i<size;i++)
    {   if(!visited[i])
        {  for(j=0;j<size;j++)
        {   if(!visited[j])
        {
            if(a[i][j]==1)
        {   pos=0;
            test[pos]=p[i];
            position[pos++]=i;
            flag=1;
            tovisit(i,size);
            break;
        }
        }
        }
            if(flag)
                return 1;
        }
    }
    return 0;
 }

int main()
{   int n,ret=1,i,j,flag=0;
    char st[302];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   visited[i]=0;
    }
    for(i=0;i<n;i++)
    {   scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {   cin>>st;
        for(j=0;j<n;j++)
        {  if(st[j]=='0')
                a[i][j]=0;
            else
                a[i][j]=1;
        }
    }
    for(i=0;i<n;i++)
    {   for(j=0;j<n;j++)
        {   if(a[i][j]==1)
        {   test[pos]=p[i];
            position[pos++]=i;
            tovisit(i,n);
            flag=1;
            break;
        }
        }
        if(flag)
            break;
        visited[i]=1;
    }
    while(ret)
    {   
        ret=bfs(n);
    }
   for(i=0;i<n;i++)
    {   printf("%d ",p[i]);
    }
    printf("\n");
    return 0;
}