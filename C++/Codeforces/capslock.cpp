#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
char s[105];
void change()
{   int i;
    if(s[0]>96)
    {   s[0]=s[0]-32;
        for(i=1;i<strlen(s);i++)
        {   s[i]=s[i]+32;
        }
    }
    else
    {   for(i=0;i<strlen(s);i++)
        {   s[i]=s[i]+32;
        }
    }
        
}

int main()
{   int i,y=1;
    cin>>s;
    if(s[0]>96)
    {   for(i=1;i<strlen(s);i++)
        { if(s[i]>96)
            {  y=0; break; }
        }
    }else if(s[0]<96)
    {   for(i=1;i<strlen(s);i++)
        { if(s[i]>96)
            { y=0; break; }
        }
    }
    if(y)
        change();
    
    printf("%s\n",s);
    return 0;
}