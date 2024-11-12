#include<iostream>
using namespace std;
int main(){
    float n,m;
    cout<<"Enter the two Numbers for calc :"<<endl;
    cin>>n>>m;
    int sw;
    cout<<"Select any one option "<<endl;
    cout<<" 1 = Sum, 2 = Subtract, 3 = Multiply, 4 = division"<<endl;
    cout<<"Enter the operator : ";
    cin>>sw;
    switch (sw)
    {
    case 1:
        cout<<"sum of numbers = "<<n+m<<endl;
        break;
    case 2:
        cout<<"subtract of numbers = "<<n-m<<endl;
        break;
    case 3:
        cout<<"Multiply of numbers = "<<n*m<<endl;
        break;
    case 4:
        cout<<"division of numbers = "<<n/m<<endl;
        break;
    default:
        cout<<"Wrong entry";
        break;
    }
}