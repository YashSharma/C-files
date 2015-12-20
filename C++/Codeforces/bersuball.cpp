#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
static int a[101],b[101],btw[101];
void removeEle(int pos,int size)
{   int i,j=0;
    int newSize=size-pos;
    for(i=pos;i<size;i++)
    {   btw[j++]=b[i];
    }
    for(i=0;i<newSize;i++)
    {   b[i]=btw[i];
    }
}
int main()
{   int n,m,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {   scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+m);
    for(i=0;i<n;i++)
    {   for(j=0;j<m;j++)
    {   if(a[i]==b[j] || b[j]-a[i]==1 || a[i]-b[j]==1)
        {   count++;
            removeEle(j+1,m);
            m=m-j-1;
            break;
        }
        if(m==0)
            break;
    }
    }
    printf("%d\n",count);
    return 0;
}