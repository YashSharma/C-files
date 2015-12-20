#include<iostream>
int main()
{   int t;
    static long int a[2002], b[2002];
    long int i,j,n,count,m,max=0;
    scanf("%d",&t);
    while(t--)
    {   i=0;
        scanf("%ld",&a[i++]);
        while(a[i-1]!=0)
        { scanf("%ld",&a[i++]);
        }
        
        
        scanf("%ld",&b[0]);
        while(b[0]!=0)
        {
        j=1; n=0; count=0;
        while(b[j-1]!=0)
        { 
          for(m=n;m<i;m++)
            {   if(b[j-1]==a[m])
                {   count=count+1;
                    n=m+1;
                    break;
                }
            }
            scanf("%ld",&b[j++]);
        }
            scanf("%ld",&b[0]);
            
            if(count>max)
            { max=count; }
        }
        printf("%ld\n",max);
        max=0;
    }
    
    return 0;
}