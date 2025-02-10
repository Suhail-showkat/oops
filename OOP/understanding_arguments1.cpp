//ARE ARGUMENTS PASSED THE SAMW
//THERE ARE TWO TYPES OF ARGUMENTS,THE ACTUAL AND THE FORMAL
#include<iostream>
using namespace std;
void fun(int x,int y)
{
   cout<<&x<<endl<<&y;
}
int main ()
{
    int x=5,y=4;
    cout<<&x<<endl<<&y<<endl;//ADDRESS OF MAIN WALA X AND Y ID DIFF FROM FUNCTION WALA
    fun(x,y);

}