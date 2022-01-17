#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"before swap a="<<a<<endl<<"b="<<b<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"after swap a="<<a<<endl<<"b="<<b<<endl;
    return 0;

}

