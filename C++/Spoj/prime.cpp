#include<iostream>
#include<math.h>
int main()
{   unsigned long a,b,c;
    scanf("%lu",&a);
    while(a>0)
    {   scanf("%lu %lu",&b, &c);
        while(b!=(c+1))
        {   if(b==1) 
            {    printf("%d\n",2);  b=3; continue;}
            
         int d=2,x=0;
            
            while(d<=sqrt(b))
            {   if(b%d==0)
                { x=1; break; }
                d+=1;
            }
            if(x==0)    { printf("%lu\n",b); }
            b+=2;
        }   printf("\n"); a--;
    }
    return 0;
}