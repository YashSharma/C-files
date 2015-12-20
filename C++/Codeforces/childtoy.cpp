#include<iostream>
#include<stdio.h>
int main()
{   int i,n,m,a,b,total=0;
    scanf("%d %d",&n,&m);
    int v[n];
    for(i=0;i<n;i++)
    {   scanf("%d",&v[i]);
    }
    for(i=0;i<m;i++)
    {   scanf("%d %d",&a,&b);
        if(v[a-1]<v[b-1])
            total+=v[a-1];
        else 
            total+=v[b-1];
    }
    printf("%d\n",total);
}
