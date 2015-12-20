#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{   char a[100],b[100];
    int i;
    cin>>a;
    cin>>b;
    for(i=0;i<strlen(a);i++)
    {   if(tolower(a[i])!=tolower(b[i]))
           {    if(tolower(a[i])>tolower(b[i]))
                    printf("1\n");
                else
                    printf("-1\n");
            return 0;
           }    
    }
    printf("0\n");
    return 0;
}