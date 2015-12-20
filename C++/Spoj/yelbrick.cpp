#include<iostream>

unsigned long long gcd(unsigned long long a, unsigned long long b){
	if (a<b){
		return gcd(b,a);
	}
	if (b == 0){
		return a;
	}
	return gcd(b,a%b);
}

int main()
{   unsigned long i,n;
    scanf("%lu",&n);
    while(n!=0)
    {   i=0;
        unsigned long long a[n][3],min,count=0; 
            while(i<n)
            {   scanf("%llu %llu %llu",&a[i][0],&a[i][1],&a[i][2]);
                    i++;
            }
            min=a[0][0];
            for(i=0;i<n;i++)
                {       min=gcd(min,a[i][0]);
                        min=gcd(min,a[i][1]);
                        min=gcd(min,a[i][2]);
                }
            i=0;
            while(i<n)
            { count+=(a[i][0]*a[i][1]*a[i][2])/(min*min*min);  
                i++;
            }
            printf("%llu\n",count);
            scanf("%lu",&n);
    }
    return 0;
}