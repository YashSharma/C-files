#include<iostream>
using namespace std;
int main()
{   unsigned long long n1=0,n2=0,n3=0,count=0,tmp,add=0,n,i;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {   int a,b;
        char d;
        scanf("%d%c%d",&a,&d,&b);
        if(b==2)
            n2++;
        else if(a==1)
                n1++;
        else n3++;

    }
    if(n3<n1)
            tmp=n3;
        else
            tmp=n1;
    count+=tmp;
    n1-=tmp;
    n3-=tmp;
    count+=(n2/2);
    n2=n2%2;
    if(n1)
    { if(n2)
        add+=2;
        add+=n1;
        count+=(add/4);
    if(add%4)
        count++;
    }else if(n3)
    {   count+=n3;
        if(n2)
        count++;
    }else if(n2)
    {   count++; }
    printf("%llu\n",count+1);
    return 0;
}