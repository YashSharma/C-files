#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{   char a[101];
    int i,num0=0,num1=0;
    cin>>a;
    for(i=0;i<strlen(a);i++)
    {  if(a[i]=='0')
        {   num0++;
            num1=0;
        }else
        {   num1++;
            num0=0;
        }
        if(num0>6 || num1>6)
        { printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}