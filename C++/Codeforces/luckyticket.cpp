#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{   int n,sum1=0,i,sum2=0;
    scanf("%d",&n);
    char a[51];
    cin>>a;
    for(i=0;i<n;i++)
    {   if(a[i]!='4' && a[i]!='7')
        {   cout<<"NO\n";
            return 0;
        }
    }
    for(i=0;i<(n/2);i++)
    {   sum1+=(int)a[i];
    }
    for(i=(n/2);i<n;i++)
    {   sum2+=(int)a[i];
    }
    if(sum1!=sum2)
    {    cout<<"NO\n";
            return 0;
    }
    cout<<"YES\n";
    return 0;
}