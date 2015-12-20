#include<iostream> 
#define s(v)scanf("%d",&v) 
int main(){int a[100][100],i,j,t,n;s(t);while(t--){s(n);for(i=0;i<n;i++){for(j=0;j<=i;j++){s(a[i][j]);}}for(i=n-2;i>=0;i--){for(j=0;j<=i;j++){a[i][j]+=std::max(a[i+1][j],a[i+1][j+1]);}}printf("%d\n",**a);}}