//write a program to implement constatn data member 
#include<iostream>
using namespace std;

#include <iostream>
using namespace std;
 
class Test {
    int value;
 
public:
    Test(int v = 0) { value = v; }
 
    int getValue() const { return value; }
};
 
int main()
{
    Test t(20);
    cout << t.getValue();
    return 0;
}