#include<iostream>
#include<math.h>
int main()
{   double area,a,b,c,d,s;
    int t;
    scanf("%d",&t);
    while(t--)
    {   scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        s=(a+b+c+d)/2;
        area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
        printf("%.2f\n",area);
    }
    return 0;
}