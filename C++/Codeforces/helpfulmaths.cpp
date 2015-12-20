#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{   int a[105],z,i=0,j;
    while(cin>>z)
    {   a[i++]=z;
    }
    sort(a,a+i);
    for(j=0;j<i-1;j++)
    {   printf("%d+",a[j]);
    }
    printf("%d",a[j]);
    return 0;
}