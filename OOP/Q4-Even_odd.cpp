#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    if(n%2==0 and n>=0){
        cout<<"Even Number";
    }
    else if(n%2!=0 and n>0)
    cout<<"Odd number ";
    else
    cout<<"Negative number";
    return 0;
}