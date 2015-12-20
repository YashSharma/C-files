#include<iostream>
#include<string.h>
int main()
{   long long t,n,i,len,k,j,p,q;
    scanf("%lld",&t);
    char st[6101];
    while(t--)
    {   n=0; k=1;
        scanf("%s",&st);
        len=strlen(st);
        while(k)
        {  i=n; p=0;
            j=len-1; q=len-1-n;
            while(i<=j)
            {   k=2;
                if(st[i]!=st[j])
                {   k=1;    
                    break;
                }
             i++;
             j--;
            }
            
         if(k==2)
            {   printf("%lld\n",n);   k=0;  continue;  }

            while(p<=q)
            { k=2;
                if(st[p]!=st[q])
                {   k=1; 
                    break;
                }
             p++;
             q--;
            }
             
         if(k==2)
            {   printf("%lld\n",n);   k=0;  }
         else
             n++;
        }
     }
    return 0;
}