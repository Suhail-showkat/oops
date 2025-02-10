#include<iostream>
using namespace std;
int main ()
{
    int n,i,j,k,a;
    cout<<"ENTER THE n ";
    cin>>n;
    
    for(k=0;k<3;k++)
    {
        cin>>a;
        for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    }
}
        