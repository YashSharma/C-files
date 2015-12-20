#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{   int len,j;
    scanf("%d",&len);
    char a[len],i;
    cin>>a;
    if(len<26)
    { printf("NO\n");
        return 0;
    }
    for(i='a';i<='z';i++)
    {   int k=1;
        for(j=0;j<len;j++)
        {   if(tolower(a[j])==i)
            { k=0; break; }
        }
        if(k)
        {printf("NO\n");
        return 0; }
    }
    printf("YES\n");
    return 0;
}