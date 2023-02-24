#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()

    {
        array<int ,6>arr={2,3,1,4,5,7};
        cout<<get<3>(arr)<<" ";
        return 0;
    }
