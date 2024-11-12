#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number "<<endl;
    cin>>num;
    if(num>0)
    cout<<"Positive Number";
    else if (num==0)
    cout<<"0";
    else if (num<0)
    cout<<"Negative Number";
    else 
    cout<<"wrong entry";
    return 0;
}