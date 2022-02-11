#include<stdio.h>
int main()
{
    int n,i,j,count_crime=0,store_police=0,count_temp=0,police=0;
    scanf ("%d",&n);

    int array[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        if(j>=0)
        {
            store_police+=j;
        }
        else
        {
            if(store_police==0)
            {
                count_crime++;
            }
            else
            {
                store_police--;
            }
        }
    }

    printf ("%d\n",count_crime);
}
