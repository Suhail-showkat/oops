#include<iostream>
using namespace std;
int main ()
{
    //USING SOME INBUILT LIBRARY FUNCTIONS
    //MIN(X,Y),MAX(X,Y),SQRT(X)
    int x,y;
    cin>>x>>y;
    cout<<"THE MINIMUM OF TWO NUMBERS IS "<<min(x,y)<<endl;
     cout<<"THE MAXIMUM OF TWO NUMBERS IS "<<max(x,y)<<endl;
    cout<<min(2,4);


}

//CREATING MINIMUM FUNCTION
int min(int a,int b)
{
   if(a>b)
   return b;
   else 
   return a;
   
}