#include<iostream>
#include<array>
using namespace std;
int main()
{
    int c=0;
    array<int,10>a={3,6,7,8,9,1,2,3,11,10};

    for(auto i=a.begin();i<a.end();i++)
    {
        c++;
    }
    cout<<"Length of array is = "<<c<<endl;
    return 0;
}


