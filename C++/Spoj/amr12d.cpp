#include<iostream>
#include<string.h>
using namespace std;
unsigned long long max(unsigned long long a,unsigned long long b)
{   if(a>=b)
        return a;
    else
        return b;
}
unsigned long long lcs(char s[])
{   
    unsigned long long len,i,j;
    len=strlen(s);
    static unsigned long long common[20][20];
    for(i=0;i<=len;i++)
    {   
        common[0][i]=common[i][0]=0;
    }
    for(i=0;i<len;i++)
    { for(j=0;j<len;j++)
        {   if(s[i]==s[len-j-1])
                common[i+1][j+1]=1+common[i][j];
            else
                common[i+1][j+1]=max(common[i][j+1],common[i+1][j]);
        }
    }
    return common[len][len];
}
int main()
{
    unsigned long long t,len;
    char s[20];
    scanf("%llu",&t);
    while(t--)
    {   
        cin>>s;;
        len=strlen(s);
        if(len-lcs(s)==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}