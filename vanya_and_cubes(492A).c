#include<stdio.h>
int main()
{
    int n,cubes_height=0,i,sum=0,old_a=0,new_b=1,temp;
    scanf ("%d",&n);

    while(1)
    {
        sum+=new_b;
        if(sum>n)
        {
            break;
        }
        else
        {

            temp=(new_b-old_a)+1;
            old_a=new_b;
            new_b=new_b+temp;
            cubes_height++;
        }
    }
    printf ("%d\n",cubes_height);
}
