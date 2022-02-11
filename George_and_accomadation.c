#include<stdio.h>
int main()
{
    int n,living,total,count=0;

    scanf ("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&living,&total);
        if(living+2<=total)
        {
            count++;
        }
    }
    printf ("%d\n",count);
}
