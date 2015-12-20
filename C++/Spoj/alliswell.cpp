#include<iostream>
#include<stdio.h>
using namespace std;
char b[10]={'A','L','L','I','Z','Z','W','E','L','L'};
static char a[105][105];
static int visited[105][105];
bool dfs(int xpos,int ypos,int r,int c,int len)
{   if(len==10)
        return true;
    bool flag;
    int i,j,m,n,upx,upy;
    if((xpos-1)>-1)
        m=xpos-1;
    else
        m=xpos;
    if((xpos+1)<r)
        upx=xpos+1;
    else
        upx=xpos;
    if(ypos-1>-1)
        n=ypos-1;
    else
        n=ypos;
    if((ypos+1)<c)
        upy=ypos+1;
    else
        upy=ypos;
    for(i=m;i<=upx;i++)
    {   for(j=n;j<=upy;j++)
        {   
            if(a[i][j]==b[len] && visited[i][j]==-1)
            {   visited[i][j]=0;
                flag=dfs(i,j,r,c,len+1);
                if(flag)
                    return true;
                visited[i][j]=-1;
            }
        }
    }
    return false;
}
int main()
{   int t,r,c,i,j;
    bool flag;
    scanf("%d",&t);
    while(t--)
    {   flag=0;   
        scanf("%d %d",&r,&c);
        for(i=0;i<r;i++)
        {   cin>>a[i];
            for(j=0;j<c;j++)
            {   visited[i][j]=-1;
            }
        }
        for(i=0;i<r;i++)
        {   for(j=0;j<c;j++)
            {   if(a[i][j]=='A')
                {   visited[i][j]=0;
                    flag=dfs(i,j,r,c,1);
                    if(flag)
                        break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}