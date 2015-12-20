#include<iostream>
unsigned long long n,c,i,j,t,temp,a[1000001];

unsigned long long fun(unsigned long long mid,unsigned long long a[n])
{   unsigned long long lastpos=a[0],cowplaced=1;
    for(i=1;i<n;i++)
    {   if(a[i]-lastpos>=mid)
        {   lastpos=a[i];
            cowplaced++;
            if(cowplaced==c)
                return 1;
        }
    }
    return 0;
}

unsigned long long bs(unsigned long long a[n])
{   unsigned long long start,last,mid;
    start=0; last=a[n-1];
    while(start<last)
    {   mid=(start+last)/2;
        if(fun(mid,a))
            start=mid+1;
        else
            last=mid;
    }
    return start-1;
}

int main()
{   scanf("%llu",&t);
    while(t--)
    {   scanf("%llu %llu",&n,&c);
       
        for(i=0;i<n;i++)
        {   scanf("%llu",&a[i]);
            j=i;
            while(j>0)
            {    if(a[j]>a[j-1]) 
                    break;
                else
                {   temp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=temp;
                }
                j--;
            }
        }
        
        printf("%llu\n",bs(a));
    }
return 0;
}