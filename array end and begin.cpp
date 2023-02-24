#include<iostream>
#include<array>
#include<iterator>
using namespace std;

int main()
{
    array<int,5>v={3,6,8,9,5};
    for(auto x=v.rbegin();x!=v.rend();++x)
    {
        cout<<*x<<" ";
    }
    return 0;
}
