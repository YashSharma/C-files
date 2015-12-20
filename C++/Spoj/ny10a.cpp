#include<iostream>
#include<string.h>
using namespace std;
int main()
{   int p,n,i,j,x[8];
    char m[41];
    scanf("%d",&p);
    while(p--)
    {   for(i = 0; i < 8; i++) x[i] = 0;
        scanf("%d",&n);
        cin>>m;
        for(i=0; i<38; i++) 
        { if(m[i]=='H' && m[i+1]=='H' && m[i+2]=='H') 
                { x[7]++; } 
         else if(m[i]=='T' && m[i+1]=='T' && m[i+2]=='T') 
                { x[0]++; } 
         else if(m[i]=='T' && m[i+1]=='T' && m[i+2]=='H') 
                { x[1]++; } 
         else if(m[i]=='T' && m[i+1]=='H' && m[i+2]=='T') 
                { x[2]++; } 
         else if(m[i]=='T' && m[i+1]=='H' && m[i+2]=='H') 
                { x[3]++; } 
         else if(m[i]=='H' && m[i+1]=='T' && m[i+2]=='T') 
                { x[4]++; } 
         else if(m[i]=='H' && m[i+1]=='T' && m[i+2]=='H') 
                { x[5]++; } 
         else if(m[i]=='H' && m[i+1]=='H' && m[i+2]=='T') 
                { x[6]++; } 
        }
        cout<<n<<" "<<x[0]<<" "<<x[1]<<" "<<x[2]<<" "<<x[3]<<" "<<x[4]<<" "<<x[5]<<" "<<x[6]<<" "<<x[7]<<"\n";
    }
 return 0;
}