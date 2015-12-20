#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{   int n,i,num=0;
    scanf("%d",&n);
    char a[n];
    cin>>a;
    for(i=0;i<n-1;i++)
    { if(a[i]==a[i+1])
         num++;
    }
    printf("%d\n",num);
    return 0;
}