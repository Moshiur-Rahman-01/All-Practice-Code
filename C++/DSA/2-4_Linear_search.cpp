#include<iostream>
using namespace std;
int main(){
    int data[10]={22,65,1,99,32,17,74,49,33,2};
    int i=0,position=-1,item;

    cout<<"Enter a item: ";
    cin>>item;

    while (i<10)
    {
        if(item==data[i]){
            position=i+1;
        }
        i++;
    }
    if(position==-1){
        cout<<"Item is not in the array data.";
    }
    else{
        cout<<position<<" is the location of Item.";
    }
}