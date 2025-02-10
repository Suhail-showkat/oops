#include<iostream>
using namespace std;
int fact(int x)
{
    int f=1,i;
    for(i=2;i<=x;i++)
    {
        f*=i;
    }
    return f;
}
int main ()
{
    int n,r;
    cout<<"ENTER n : ";
    cin>>n;
    cout<<"ENTER r : ";
    cin>>r;
    int nfact= fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int formula=nfact/(rfact*nrfact);         //formula for combination n!/(r!(n-r)!)
    cout<<formula;
}
