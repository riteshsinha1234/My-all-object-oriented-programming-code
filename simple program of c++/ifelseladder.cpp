#include<iostream>
using namespace std;
int main()
{
    int week;
    cout<<"Enter day in a week:";
    cin>>week;

    if(week==1)
    cout<<"monday";
    else if(week==2)
    cout<<"Tuesday";
    else if(week==3)
    cout<<"Wednesday";
    else if(week==4)
    cout<<"Thursday";
    else if(week==5)
    cout<<"Friday";
    else if(week==6)
    cout<<"saturday";
    else if(week==7)
    cout<<"sunday";
    else
    cout<<"Invalid";
    return 0;
}