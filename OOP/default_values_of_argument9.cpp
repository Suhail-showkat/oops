//DEFAULT VALUES OF ARGUMENTS
#include<iostream>
using namespace std;
//GONNA TAKE SOME CASES ;CASE 1:
void fun(int x=4,float y=5.5)
{
    cout<<x<<" "<<y;
}
int main ()
{
   fun(6.1);//INT PART WILL GO TO IST ARGUMENT
}