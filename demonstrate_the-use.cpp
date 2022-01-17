//3.Write a program to demonstrate the use of static data members. 
#include <iostream>
using namespace std;
class Demo
{
	public:	
		static int ABC;
};

//defining
int Demo :: ABC =10;


int main()
{
    
	cout<<"\nValue of ABC: "<<Demo::ABC;
	return 0;
}
