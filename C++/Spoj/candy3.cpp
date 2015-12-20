#include<iostream>
int main()
{ unsigned long long t,n;
 scanf("%llu",&t);
 printf("\n");
 while(t--)
 { scanf("%llu",&n);
    unsigned long long a[n],sum=0,i;
    for(i=0;i<n;i++)
    {   scanf("%llu",&a[i]);
        sum+=(a[i]%n);
    }
    if(sum%n)
        printf("NO\n");
    else
        printf("YES\n");
    printf("\n");
}
    return 0;
}