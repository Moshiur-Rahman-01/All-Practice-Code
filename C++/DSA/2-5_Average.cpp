#include<iostream>
using namespace std;
float Average(int a,int b, int c){
    return (a+b+c)/3;
}
int main(){
    int a,b,c;

    cout<<"Enter the 3 values: ";
    cin>>a>>b>>c;

    cout<<"The average of "<<a<<", "<<b<<" and "<<c<<" is: "<<Average(a,b,c);
}