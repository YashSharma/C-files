#include<iostream>
#include<map>
long long int a[500001];
int p[10000000]={0};

int main()
{   
    long long int i,t;
    a[0]=0;
    p[0]=1;
    for(i=1;i<500001;i++)
    {   a[i]=a[i-1]-i;
        if(a[i]<=0 || p[a[i]]==1)
        {   a[i]=a[i-1]+i;
            p[a[i]]=1;
        }
        p[a[i]]=1;    
    }   
    scanf("%lld",&t);
    while(t!=-1)
    {     printf("%lld\n",a[t]);
            scanf("%lld",&t);
    }
    
    return 0;
}