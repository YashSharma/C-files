#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<map>
#include<string.h>
#include<sstream>
using namespace std;
int main()
{   map <string, int > m;
    string b;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   cin>>b;
        if(m[b])
        {   cout<<b<<m[b]<<endl;
            m[b]++;
        }else
        {   printf("OK\n");
            m[b]=1;
        }
    }
    
    
    return 0;
}   