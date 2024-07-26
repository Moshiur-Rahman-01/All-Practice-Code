#include<iostream>
using namespace std;
#include<cmath>
int main(){
    int A,B,C,D;
    float X,X1,X2;
    cout<<"Enter the values of A,B,C: ";
    cin>>A>>B>>C;
    D = B*B-4*A*C;

    if(D>0){
        X1 = (-B+sqrt(D))/2*A;
        X2 = (-B-sqrt(D))/2*A;
        cout<<"X1 = "<<X1<<", X2 = "<<X2;
    }
    else if(D==0){
        X = -B/2*A;
        cout<<"UNIQUE SOLUTION X = "<<X;
    }
    else{
        cout<<"NO REAL SOLUTIONS";
    }
}