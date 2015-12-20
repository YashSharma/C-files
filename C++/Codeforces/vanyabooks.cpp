#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
int main()
{   uint64_t n,x=0,m,count=0,factor;
    scanf("%"PRIu64,&n);
    m=n;
    while(m)
    {   m=m/10;
        x++;
    }
    if(x==1)
        count=n;
    else if(x==2)
        {   count=(n-10+1)*2+9; }
    else if(x==3)
        {   count=(n-100+1)*3+2*90+9;   }
    else if(x==4)
           count=(n-1000+1)*4+(900)*3+2*90+9;
    else if(x==5)
            count=(n-10000+1)*5+9000*4+(900)*3+2*90+9;
    else if(x==6)
            count=(n-100000+1)*6+90000*5+9000*4+(900)*3+2*90+9;
    else if(x==7)
            count=(n-1000000+1)*7+900000*6+90000*5+9000*4+(900)*3+2*90+9;
    else if(x==8)
            count=(n-10000000+1)*8+9000000*7+900000*6+90000*5+9000*4+(900)*3+2*90+9;
    else if(x==9)
            count=(n-100000000+1)*9+90000000*8+9000000*7+900000*6+90000*5+9000*4+(900)*3+2*90+9;
    else if(x==10)
    {   printf("8888888899\n");
        return 0;
    }
     
    printf("%"PRIu64"\n",count);
    return 0;
}