#include<iostream>
unsigned long long gcd(unsigned long long a, unsigned long long b){
	if (b == 0){
		return a;
	}
	return gcd(b,a%b);
}

int main()
{   unsigned long long t,n,a,b,i,m,emt;
    scanf("%llu",&t);
    while(t--)
    {   scanf("%llu",&n);
        b=6*n*n*n;
        if(n%2)
            a=((3*n)/2)*n+(n+1)/2;
        else 
            a=(3*n*n)/2;
        m=gcd(b,a);
        printf("%llu/%llu\n",a/m,b/m);
    }
    return 0;
}