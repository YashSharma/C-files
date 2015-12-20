#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
uint64_t min(uint64_t a,uint64_t b)
{   if(a<b)
        return a;
    else 
        return b;
}
int main()
{   uint64_t n,i=0,n4=0,n3=0,n2=0,n1=0,count=0,tmp;
    int t;
    scanf("%"PRIu64,&n);
    while(n--)
    {   scanf("%d",&t);
        if(t==4)
            n4++;
        else if(t==3)
            n3++;
        else if(t==2)
            n2++;
            else
            n1++;
        
    }
    count+=n4;
    tmp=min(n3,n1);
    count+=tmp;
    n3-=tmp;
    n1-=tmp;
    count+=(n2/2);
    n2=n2%2;
    if(n1)
    {   unsigned long long add=0;
        if(n2) add+=2;
        add+=n1;
        count+=(add/4);
        if(add%4)
            count++;
    }else if(n3)
    { count+=n3;
        if(n2)
        count++;
    }else if(n2)
    { count++; }
    printf("%"PRIu64"\n",count);
    return 0;
}