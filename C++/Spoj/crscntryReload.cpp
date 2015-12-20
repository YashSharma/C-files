#include<iostream>
static int a[2010],b[2010];
int max(int a,int b)
{   if(a>=b)
        return a;
    else
        return b;
}
int lcs(int a[],int b[],int siza,int sizb)
{   
    static int common[2010][2010],i,j;
    for(i=0;i<=siza;i++)
    {   common[i][0]=0;
    }
    for(j=0;j<=sizb;j++)
    {   common[0][j]=0;
    }
    for(i=1;i<=siza;i++)
    {   for(j=1;j<=sizb;j++)
        {   if(a[i-1]==b[j-1])
            {   common[i][j]=1+common[i-1][j-1];
            }
             else
                common[i][j]=max(common[i-1][j],common[i][j-1]);
        }
    }
    return common[siza][sizb];
}
int main()
{   int t;
    int i,j,maxm=0;
    scanf("%d",&t);
    while(t--)
    {   i=0;
        scanf("%d",&a[i]);
        i=1;
        while(a[i-1]!=0)
        { scanf("%d",&a[i]);
            i=i+1;
        }
        
        scanf("%d",&b[0]);
        while(b[0]!=0)
        {
            j=1; 
            while(b[j-1]!=0)
            { 
                scanf("%d",&b[j]);
                j=j+1;
            }
            maxm=max(maxm,lcs(a,b,i-1,j-1));
            scanf("%d",&b[0]);
        }
        printf("%d\n",maxm);
        maxm=0;
    }
    
    return 0;
}
