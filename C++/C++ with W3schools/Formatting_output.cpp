/*
1. showpoint -> normally 6 digit dekhabe . Ex- 7.00000
2. noshowpoint
3. setprecision -> total digit koto hobe declare kore dei
4. fixed
5. setw() -> shajanor jonne use kora hoi..space onujayee
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two values: ";
    cin>>a>>b;

    float sum=a+b;
    cout<<setw(25)<<"Summation is = "<<sum<<endl;

    cout<<showpoint;
    cout<<setprecision(10);
    float sub=a-b;
    cout<<setw(25)<<"Subtraction is = "<<sub<<endl;

    cout<<noshowpoint;
    float rem=a%b;
    cout<<setw(25)<<"Reminder is = "<<rem<<endl;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(8);
    float mul=a*b;
    cout<<setw(25)<<"Multiplication is = "<<mul<<endl;

    float div=(float) a/b;
    cout<<setw(25)<<"Division is = "<<div<<endl;

}