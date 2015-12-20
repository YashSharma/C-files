#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{   char a[1005];
    char check;
    int len,k,i;
    while(1)
    {   k=1;
        gets(a);
        if(a[0]=='*')
            break;
        len=strlen(a);
        for(i=0;i<len;i++)
        {   if(a[i]!=' ')
            {   check=a[i];
                break;
            }   
        }
        for(i=0;i<len;i++)
        { if(a[i]==' ')
            {   
                if(tolower(a[i+1])!=tolower(check))
                {    k=0; break; }
            }
        }
        
        if(k)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
