#include<iostream>
class Complex
{
    private:
    int a,b;
    punlic:
    Complex()
    {cout<<"Destructor";}
};
int fun()
{
    ~Complex obj;
}
int main()
{    
    fun();
    return 0;
}