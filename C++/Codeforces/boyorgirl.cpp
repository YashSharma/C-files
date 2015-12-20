#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    char a[101];
    scanf("%s", a);
    int count[26]={0};
    for(int i=0;i<strlen(a);i++)
    {
        count[a[i]-'a']++;
    }
    int num=0;
    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
            num++;
    }
    //printf("%d\n",num);
     if(num%2)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;
}
