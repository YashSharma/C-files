#include<iostream>
long arr[1000],count=0,add,i;
long happy(long a)
{   while(a>0)
    {   add=a%10;
        arr[count]+=add*add;
        a=a/10;
    }
    if(arr[count]==1)
    {   return count+1;
    }
    for(i=0;i<count;i++)
    {   if(arr[i]==arr[count])
            return -1;
    }
    return happy(arr[count++]);
}
int main()
{   long n;
    scanf("%ld",&n);
    printf("%ld\n",happy(n));
    return 0;
}