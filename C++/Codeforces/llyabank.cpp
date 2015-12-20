#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<math.h>
int main()
{   int64_t n,m,max=0;
    scanf("%"PRId64,&n);
    if(n>0)
    {   printf("%"PRId64"\n",n);
        return 0;
    }
    if((n/10)<((n/100)*10+n%10))
        printf("%"PRId64"\n",((n/100)*10+n%10));
    else 
        printf("%"PRId64"\n",(n/10));
    return 0;
}
