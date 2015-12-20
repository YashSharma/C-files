#include<iostream>
int main()
{   int t;
    double n,sum;
    scanf("%d",&t);
    while(t--)
    {   scanf("%lf",&n);
        if(n==1)
            sum=2.00/3.00;
        else if(n==2)
            sum=17.00/24.00;
        else 
            sum=3.00/4.00-1/((2.00)*(n+1)*(n+2));
        printf("%.11f\n",sum);
    }
    return 0;
}