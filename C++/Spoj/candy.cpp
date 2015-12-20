#include<iostream>
int main()
{   unsigned long n,i,j,temp,avg,move;
    scanf("%lu",&n);
    while(n!=-1)
    {   
    unsigned long a[n];
    scanf("%lu",&a[0]);
        avg=a[0];   move=0;
    for(i=1;i<n;i++)
    {   j=i;
        scanf("%lu",&a[i]);
        avg+=a[i];
        while(j>0)
        { if(a[j]>a[j-1]) 
            break;
            else
            {   temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            j--;
        }
    }
        if(avg%n!=0)
        {   printf("-1"); printf("\n"); }
        else
        { avg=avg/n; 
            i=0;
            j=n-1;
            while(i!=j)
            { if(a[j]-a[i]>avg-a[i])
                {   move+=avg-a[i];
                    a[j]=a[j]-(avg-a[i]);   
                    a[i++]=avg;
                }
             else
                {   move+=a[j]-avg;
                    a[i]=a[i]+(a[j]-avg);
                    a[j--]=avg;
                    
                }
            }
            printf("%lu\n",move);
        }
    scanf("%lu",&n);
    }
    return 0;
}