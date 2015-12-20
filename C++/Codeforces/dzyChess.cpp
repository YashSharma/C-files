#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{   int n,m,i,j;
    static char a[105];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {   cin>>a;
        for(j=0;j<m;j++)
        {   if(a[j]=='-')
                printf("-");
            else if(!((i+j)%2))
                printf("B");
            else
                printf("W");
            
        }
        printf("\n");
    }
    return 0;
}
