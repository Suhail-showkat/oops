#include<iostream>
using namespace std;
int sum(int x,int y)
{   int result;//EARLIER I USED SUM,SHOWED ERROR DUE TO ITS CONFLICT WITH FXN NAMED SUM
    result=x+y;
    return result;
}
int main ()
{
   int result= sum(30,40);
    cout<<result;
    return 0;
    /*(30,40);
    cout<<result;
    return 0;*/

}