#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{

    array<int ,6>ar={3,2,1,4,5,6};
    for(int i=0;i<ar.size();i++)
        cout<<ar[i]<<" ";
    for(int i=0;i<ar.size();i++)
        cout<<ar.sort()<<" ";
    return 0;
}
