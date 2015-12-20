#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;
static char a[100],b[100];
int main()
{   int n,num,j,i;
    scanf("%d",&n);
    cin>>a;
    j=0;    num=n;
    for(i=0;i<n;i++)
    {   if(a[i]=='1' || a[i]=='0')
        {   num--;
        }
        else if(a[i]=='4')
        {   b[j++]='2';
            b[j++]='2';
            b[j++]='3';
            num=num+2;
        }
        else if(a[i]=='6')
        {   b[j++]='5';
            b[j++]='3';
            num=num+1;    
        }else if(a[i]=='8')
        {   b[j++]='2';
            b[j++]='2';
            b[j++]='2';
            b[j++]='7';
            num=num+3;
        }
        else if(a[i]=='9')
        {   b[j++]='7';
            b[j++]='3';
            b[j++]='3';
            b[j++]='2';
            num=num+3;
        }else
        {   b[j++]=a[i];
        }
    }
    sort(b,b+num,greater<int>());
    cout<<b<<endl;
    return 0;
}