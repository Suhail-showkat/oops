#include<iostream>
using namespace std;
//PRINTING PASCALS TRIANGLE
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1 
*/
int fact(int x)
{
     int f=1,i;
    for(i=2;i<=x;i++)
    {
        f*=i;
    }
    return f;
}
int combination(int i,int j)
{
  cout<<int result=fact(n)/(fact(r)*fact(n-r));
  return result;
}
int main ()
{
    int n;
    cout<<"ENTER n : ";
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        cout<<combination(i,j)
    }

}