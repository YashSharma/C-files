#include<iostream>
#include<map>
using namespace std;
map<int, long long> p;
long long dp(int n)
{   if(n<12)
        return n;
    
    if(p[n-1]!=0)
    return p[n-1];
    
    p[n-1]=dp(n/2)+dp(n/3)+dp(n/4);
    return p[n-1];
    
}
int main()
{ int n;
    
    while(scanf("%d",&n)!=EOF)
    {   printf("%lld\n",dp(n));
    }
 return 0;
}