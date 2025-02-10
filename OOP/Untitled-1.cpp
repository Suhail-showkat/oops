#include<iostream>
using namespace std;
int main ()
{
    int n,i,j,k;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=n;j>=i+1;j--)
        {
          cout<<" ";}
          {
          for(k=-1;k<=i;k++)
          {
            cout<<"9";
            cout<<" ";
          }
        }
        cout<<endl;
    }
}