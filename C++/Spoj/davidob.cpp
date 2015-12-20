#include<iostream>
int gcd(int a,int b)
{   if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{   int n=495,count=0,x,i,j,a[7];
    for(i=1000;i<100000;i++)
    {   if((i%495)==0)
    {     x=i;
        for(j=0;j<5;j++)
        {   a[j]=x%10;
            x=x/10;
        }
        if(a[0]==a[1] || a[0]==a[2] || a[0]==a[3] || a[0]==a[4] || a[1]==a[2] || a[1]==a[3] || a[1]==a[4] || a[2]==a[3] || a[2]==a[4] || a[3]==a[4])
        {   continue;
        }
        count++;
    }
    }
    int num=10*9*8*7*6;
    int p=gcd(num,count);
    num/=p;
    count/=p;
    printf("%d/%d\n",count,num);
    return 0;
}