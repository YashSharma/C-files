#include<iostream>
#include<string.h>
using namespace std;
int main()
{   static char a[1000005]={0};
    char temp;
    long long t,j,len,mid,i;
    scanf("%lld",&t);
    while(t--)
    {   cin>>a;
        len=strlen(a);
        mid=len/2;
        if(!(len%2))
        {   if(a[mid]>a[mid-1])
            {   a[mid-1]+=1;
                a[mid]=a[mid-1];
                for(i=len-1;i>mid;i--)
                {   a[i]=a[len-1-i];
                }
            }else if(a[mid]==a[mid-1])
            {  i=1;
                while(a[mid-i-1]==a[mid+i])
                {   i++;
                }
                if(a[mid+i]>a[mid-i-1])
                {   for(j=mid-i;j<mid+i;j++)
                    {   a[j]+=1;    }
                }
                for(j=len-1;j>=mid+i;j--)
                {   a[j]=a[len-j-1];
                }
            }else
            {   for(i=len-1;i>=mid;i--)
                {   a[i]=a[len-1-i];    }
            }
        }else
        {   if(a[mid+1]>a[mid-1])
            {   a[mid]=a[mid]+1;
                for(i=len-1;i>mid;i--)
                {   a[i]=a[len-1-i];    }
            }else if(a[mid-1]==a[mid+1]) 
            {   i=1;
                while(a[mid-1-i]==a[mid+1+i])
                {   i++;    }
                if(a[mid+i+1]>a[mid-1-i])
                {   for(j=mid-i;j<mid+1+i;j++)
                    {   a[j]=a[j]+1;    }
                    a[mid]=a[mid]-1;
                }
                for(j=len-1;j>mid+i;j++)
                {   a[j]=a[len-1-j];
                }
            }else
            {   for(j=len-1;j>mid;j--)
                {   a[j]=a[len-1-j];    }
            }
            
        }
        cout<<a<<endl;
    }
    return 0;
}