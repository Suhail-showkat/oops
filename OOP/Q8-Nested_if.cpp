#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the age ";
    cin>>n;
    if(n>0 and n<=120){
        if(n<=12)
        cout<<"child";
        else if (n>12 and n<=18)
        cout<<"teenager";
        else if (n>18 and n<=60)
        cout<<"Adult";
        else
        cout<<"senior person near to death";
    }
    else
    cout<<"incorrect age";
    return 0;
}