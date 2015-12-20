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
{   int t,j=1;
    unsigned long x1,x2,y1,y2;
    unsigned long long a,b,i;
    scanf("%d",&t);
    while(j<=t)
    {   scanf("%lu %lu %lu %lu",&x1,&y1,&x2,&y2); 
        a=x1*(x2+1)+y1*(y2+1);
        b=(x1+y1)*(x2+y2+1);
        if(a==0)
            {   printf("Case %d: %llu\n",j++,a);
                continue;
            }
        i=gcd(a,b);
        a=a/i;
        b=b/i;
        printf("Case %d: %llu/%llu\n",j++,a,b);
    }
    return 0;
}