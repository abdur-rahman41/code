#include<stdio.h>

int main()
{
    int i=0,j,n;

    int ara[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    j=n-1;
    while(i<j)
    {
        if(ara[i]+ara[j]==10)
        {
            printf("%d %d",ara[i],ara[j]);
            break;
        }
        else if(ara[i]+ara[j]<10)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}
