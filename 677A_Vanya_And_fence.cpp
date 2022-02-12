#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number_of_friends,height_of_fence,i,widht_of_road=0,height;

    cin>>number_of_friends>>height_of_fence;

    for(i=0;i<number_of_friends;i++)
    {
        cin>>height;
        double temp=height*1.00/height_of_fence;
        widht_of_road+=ceil(temp);
    }
    cout<<widht_of_road<<endl;
}
