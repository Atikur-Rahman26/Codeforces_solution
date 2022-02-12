#include<stdio.h>
int main()
{
    int test_case,size_of_array,special_sum_of_array,i,actual_sum_of_array=0;

    scanf ("%d",&test_case);

    for(i=0;i<test_case;i++)
    {
        scanf ("%d%d",&size_of_array,&special_sum_of_array);
        if (size_of_array==1)
        {
            printf ("0\n");
        }
        else if(size_of_array==2)
        {
            printf ("%d\n",special_sum_of_array);
        }
        else
        {
            printf ("%d\n",special_sum_of_array*2);
        }
    }
}
