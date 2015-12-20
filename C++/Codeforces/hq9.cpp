#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{   char p[100];
    cin>>p;
    for(int i=0;i<strlen(p);i++)
    {   if(p[i]=='H' || p[i]=='9' || p[i]=='Q')
        {   printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}