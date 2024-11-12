#include<iostream>
using namespace std;
int main(){
    float n,m;
    int op;
    cout<<"Enter the two Numbers :"<<endl;
    cin>>n>>m;
    cout<<" 1 = Sum, 2 = Subtract, 3 = Multiply, 4 = division"<<endl;
    cout<<"Enter the operator : ";
    cin>>op;
    if (op==1)
    cout<<"sum of numbers = "<<n+m<<endl;
    else if(op==2)
    cout<<"subtract of numbers = "<<n-m<<endl;
    else if (op==3)
    cout<<"Multiply of numbers = "<<n*m<<endl;
    else if(op==4)
    cout<<"division of numbers = "<<n/m<<endl;
    else
    cout<<" wrong entry ";
}