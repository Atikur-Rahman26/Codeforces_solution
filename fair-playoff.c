#include<stdio.h>
int main()
{
    int n,p1,p2,p3,p4,max1,max2,min1,min2;
    scanf ("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&p1,&p2,&p3,&p4);

        if(p1>p2)
        {
            max1=p1;
            min1=p2;
        }
        else
        {
            max1=p2;
            min1=p1;
        }
        if(p3>p4)
        {
            max2=p3;
            min2=p4;
        }
        else
        {
            max2=p4;
            min2=p3;
        }
        if(max1>min2&&max2>min1)
        {
            printf ("YES\n");
        }
        else
        {
            printf ("NO\n");
        }
    }
}
