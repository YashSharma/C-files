#include<iostream>
int main()
{   unsigned int t;
 scanf("%d",&t);
 unsigned long a,b,c;
  while(t>0)
 {  c=0;
    scanf("%lu",&a);
    b=a/5;
    do
    {   c+=b;   
        b=b/5;
    }while(!(b<1));
    printf("%lu\n",c);
    t--;
 }
 
 return 0;
}