#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{   int n,count=0,i,j,total;
    double m1,m2;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {   scanf("%d %d",&a[i],&b[i]);
    }
    if(n<3)
    {   printf("0\n");
        return 0;
    }
    for(i=0;i<n-1;i++)
    {   if((a[i+1]-a[i])==0)
            m1=0;
        else
            m1=(b[i+1]-b[i])/(a[i+1]-a[i]);
        for(j=i+2;j<n;j++)
        {   if(m1==0 || a[j]==a[i])
            {   if(b[j]==b[i] || a[j]==a[i])
                    count++;
            }else
            {
            m2=(b[j]-b[i])/(a[j]-a[i]);
            if(m1==m2)
                count++;
            }
        }
    }
    cout<<count<<endl;
    total=tgamma(n+1)/(tgamma(n-2)*tgamma(4));
    printf("%d\n",total-count);
    return 0;
    
}