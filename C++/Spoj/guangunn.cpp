#include<iostream>
using namespace std;
int main()
{ unsigned long long n,sum;
    while(cin>>n)
    {   sum=(n/9)*(81)+(n%9)*(n%9);  
        printf("%lld\n",sum);
    }
    return 0;
}