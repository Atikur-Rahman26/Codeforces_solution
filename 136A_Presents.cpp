#include<bits/stdc++.h>
using namespace std;

int main()
{
    int frienD,a,i;
    cin>>frienD;

    int array1[105];
    for(i=1;i<=frienD;i++)
    {
        cin>>a;
        array1[a]=i;
    }
    for(i=1;i<=frienD;i++)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;
}
