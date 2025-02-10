//DEFAULT VALUES OF ARGUMENTS
#include<iostream>
using namespace std;
//GONNA TAKE SOME CASES ;CASE 1:
void fun(int x=7,int y=8)//IN PREVIOUS CODE 7 AND 8 WERE PRINTED BUT HERE 4 AND 6 ARE PRINTED
{
    cout<<x<<" "<<y;
}
int main ()
{
   fun(4,6);
}