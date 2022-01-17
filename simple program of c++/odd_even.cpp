#include<iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"Enter a number\n";
    cin>>a;
    
    if(a==0)
    cout<<"No is zero";
    else if (a%2==0)
    cout<<"No. is even";
    else
    cout<<"No. is odd ";
    
    return 0;
    
}