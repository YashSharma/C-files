#include<stdio.h>
int main()
{
    unsigned long t;
    scanf("%lu",&t);
    while(t!=-1)
    {
        unsigned long ans=0,temp,sum=0,arr[t],i;
        for(i=0;i<t;i++)
        {
            scanf("%lu",&arr[i]);
            sum+=arr[i];
        }

        temp=sum/t;
        if(temp*t==sum)
        {
            for(i=0;i<t;i++)
             {
                 if(temp>arr[i])
                    ans+=temp-arr[i];
            }
            printf("%lu\n",ans);
        }
        else
            printf("-1\n");
        scanf("%lu",&t);
    }
    return 0;
}