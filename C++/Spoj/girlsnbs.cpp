#include<iostream>
int main()
{   unsigned long a,b,min;
    scanf("%lu %lu",&a,&b);
    while(a!=-1)
    {   if(a>=b)
        { if(a%(b+1)==0)
            printf("%lu\n",a/(b+1));
            else
            printf("%lu\n",a/(b+1)+1);
        }else
        {   if(b%(a+1)==0)
            printf("%lu\n",b/(a+1));
            else
            printf("%lu\n",b/(a+1)+1);
        }
        scanf("%lu %lu",&a,&b);
    }
}