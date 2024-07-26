#include<iostream>
using namespace std;

int main(){
    int data[10]={22,65,1,99,32,17,74,49,33,2};
    int N=10,LOC,MAX=data[0],K=0;
    
    while(K<N){
        if(MAX<data[K]){
            MAX=data[K];
            LOC=K;
        }
        K++;
    }
    cout<<"LOC = "<<LOC<<", MAX = "<<MAX;
}