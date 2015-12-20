#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{   int n,x(0);
    string a;
    scanf("%d",&n);
    
    while(n--)
    {   
        cin>>a;
       
        if(a[1]=='+')
          { 
            ++x;
           
          }
        else
        {  
            --x;
            
        }
    }
    printf("%d\n",x);
    return 0;
}