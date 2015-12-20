#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{   char a[101];
    int i;
    cin>>a;
    for(i=0;i<strlen(a);i++)
    {   if(a[i]<95)
            a[i]=a[i]+32;
        if(a[i]=='a' || a[i]=='e' || a[i]=='o' || a[i]=='i' || a[i]=='u' || a[i]=='y')
            continue;
        printf(".%c",a[i]);
         
    }
    printf("\n");
    return 0;
}   