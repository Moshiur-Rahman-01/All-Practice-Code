#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter year : ";
    cin>>year;

    if(year%400==0 || (year%100!=0 && year%4==0))
        cout<<year<<" is Leap Year !!!";
    else
        cout<<year<<" is Not Leap Year";

return 0;
}