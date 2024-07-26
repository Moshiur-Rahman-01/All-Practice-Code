#include<iostream>
using namespace std;

int main(){
    //string str="Moshiur";
    string str;
    cout<<"Enter your full name: ";
    //cin>>str;
    getline(cin,str);
    cout<<str<<endl;
    cout<<str.length()<<endl;
}