#include<iostream>
using namespace std;
int main()
{
    int week;
    cout<<"Enter week name:" ;
    cin>>week;

    switch (week)
    {
    case 1:cout<<"monday";
        break;
    case 2:cout<<"Tuesday";
    break;
    case 3:cout<<"Wednesday";
    break;
    case 4:cout<<"Thursday";
    break;
    case 5:cout<<"Friday";
    break;
    case 6:cout<<"Saturday";
    break;
    case 7:cout<<"Sunday";
    break;
    
    default:cout<<"invalid Input!";
    }

}