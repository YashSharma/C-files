#include<iostream>
int main()
{   int n,c1,c2;
    scanf("%d",&n);
    while(n--)
    {   scanf("%d %d",&c1,&c2);
        if(c1%2 && c2%2)
            printf("Ramesh\n");
        else
            printf("Suresh\n");
    }
    return 0;
}