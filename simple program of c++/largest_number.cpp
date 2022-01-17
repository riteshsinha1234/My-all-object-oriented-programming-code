#include<iostream>
using namespace std;
int main()
{
 float n1,n2,n3;
 cout<<"Enter three number:";
 cin>>n1>>n2>>n3;
 if(n1>=n2&&n1>n3)
 cout<<"largest number is "<<n1<<endl;
 if(n2>=n1&&n2>=n3)
 cout<<"largest number is "<<n2<<endl;
 if(n3>=n2&&n3>=n1)
 cout<<"largest number is "<<n3<<endl;
 return 0;

}