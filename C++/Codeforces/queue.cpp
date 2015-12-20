#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{   int n,t,i;
    scanf("%d %d",&n,&t);
    static char a[50],temp;
    for(i=0;i<n;i++)
    {   cin>>a[i];
    }
    while(t--)
    {   for(i=n-2;i>=0;)
        {   if(a[i]=='B')
            {   if(a[i+1]=='G')
                {   temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    i--;
                }
            }
         i--;
        }
    }
    for(i=0;i<n;i++)
    {   printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}