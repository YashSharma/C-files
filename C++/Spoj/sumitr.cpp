#include<iostream> 
#define s(v) scanf("%d",&v) 
int maxm=0;void max(int a){if(a>maxm) maxm=a;}int main(){int t,i,j,k,n,a[99],sum[99][198];s(t);while(t--){s(n);maxm=0;if(n==0)printf("0\n"); else{for(i=1;i<=n;i++){for(j=0;j<i;j++){s(a[j]);}j=0;if(i==1){sum[i-1][0]=a[j];max(sum[i-1][0]);}else if(i==2){sum[i-1][0]=sum[i-2][0]+a[0];max(sum[i-1][0]);sum[i-1][1]=sum[i-2][0]+a[1];max(sum[i-1][1]);}else{for(k=0;k<2*(i-2);k++){sum[i-1][j]=sum[i-2][k]+a[k];max(sum[i-1][j++]);sum[i-1][j]=sum[i-2][k]+a[k+1];max(sum[i-1][j++]);}}}printf("%d\n",maxm);}}return 0;}