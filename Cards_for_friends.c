#include<stdio.h>
int main()
{
    int n,i,j,w,h,pcs,count_pcs=0;

    scanf("%d",&n);

    for(int a=0;a<n;a++)
    {
        scanf("%d%d%d",&w,&h,&pcs);
        if(w%2!=0&&h%2!=0)
        {
            count_pcs=1;
        }
        else
        {
            while(1)
            {
                if(w%2!=0&&h%2!=0)
                {
                    break;
                }
                else
                {
                    count_pcs=1;
                    if(w%2==0)
                    {
                        count_pcs*=2;
                        w=w/2;
                    }
                    else if(h%2==0)
                    {
                        count_pcs*=2;
                        h=h/2;
                    }
                }
            }
        }
        if(count_pcs>=pcs)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
