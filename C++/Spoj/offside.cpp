#include<iostream>
int main()
{   int a,d,i,c;
    scanf("%d %d",&a,&d);
    while(a!=0)
    {   c=0;
        unsigned long x[a],y[d],min;
        scanf("%lu",&x[0]);
        min=x[0];
        for(i=1;i<a;i++)
        {   scanf("%lu",&x[i]);
            if(min>x[i])
                min=x[i];
        }
        for(i=0;i<d;i++)
        {   scanf("%lu",&y[i]);
            if(y[i]<=min)
                c++;
        }
        if(c<2)
            printf("Y\n");
        else
            printf("N\n");
            
        scanf("%d %d",&a,&d);
    }
    return 0;
}
