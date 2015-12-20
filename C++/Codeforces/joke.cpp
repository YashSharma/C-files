#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{   char a[101],b[101],c[101];
    cin>>a;
    cin>>b;
    cin>>c;
    int len1, len2,len3;
    len1=strlen(a);
    len2=strlen(b);
    len3=strlen(c);
    char* newarr=new char[len1+len2+1];
    strcpy(newarr,a);
    strcat(newarr,b);
    int len4=strlen(newarr);
    sort(newarr,newarr+len4);
    sort(c,c+len3);
    if(strcmp(newarr,c)==0)
        printf("YES\n");
    else
        printf("NO\n");
    delete[] newarr;
    return 0;
}