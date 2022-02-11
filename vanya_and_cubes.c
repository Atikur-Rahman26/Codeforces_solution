#include<stdio.h>
int main()
{
    int n,cubes_height=0,i,j,a,b;
    scanf ("%d",&n);

    if(n<3&&n>0)
    {
        cubes_height++;
    }
    else if(n<5)
    {
        cubes_height=cubes_height+2;
    }
    else
    {
        int sum=0;

        a=1;
        b=3;
        sum=a+b;
        cubes_height=2;
        while(1)
        {
            int temp=a+b;
            sum+=temp;
            if(n<sum)
            {
                break;
            }
            else
            {
                a=b;
                b=temp;
                cubes_height++;
            }
        }
    }
    printf ("%d\n",cubes_height);
}
