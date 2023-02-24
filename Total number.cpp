#include<iostream>
#include<array>
#include<tuple>

using namespace std;

int main()
{
    array<int ,5>ar={1,2,3,4,5};
    for(int i=0;i<ar.size();i++)
        cout<<ar[i]<<" ";
    return 0;
}
