#include<stdio.h>
int main()
{
    int n,i=3,j;
    scanf ("%d",&n);
    int array[n];
    int a,b,c,d;
    int year=n;

    printf ("%d %d %d %d\n",a,b,c,d);

    while(1)
    {
        year++;
        n=year;
        d=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        a=n%10;
        if(a!=b&&b!=c&&c!=d&&a!=c&&a!=d&&b!=d&&c!=d)
        {
            break;
        }
    }

    printf("%d%d%d%d\n",a,b,c,d);

}
