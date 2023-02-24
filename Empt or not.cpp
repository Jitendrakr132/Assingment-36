#include<iostream>
#include<array>
#include<tuple>
using namespace std;

int main()
{
    array<int ,5>arr1={1,2,3,4,5};
    array<int ,0>arr2{};
    for(auto i=arr1.begin();i<arr1.end();i++)
    {
        cout<<*i<<" "<<endl;
    }
    if(arr2.empty())
        cout<<"Array is empty "<<endl;
    else
        cout<<"Array is not empty"<<endl;
    return 0;

}
