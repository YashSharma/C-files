#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{   int n,i,j,max=0;
    static char a[101][101];
    int count[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   cin>>a[i];    
    }
    for(i=0;i<n;i++)
    {   count[i]=0;
    for(j=0;j<n;j++)
    {if(strcmp(a[i],a[j])==0)
    {   count[i]++;   
    }
     if(count[i]>max)
         max=count[i];
    }
    }
    cout<<max<<endl;

return 0;
}