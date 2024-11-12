#include <iostream>
using namespace std;
int main(){
    float n,m,p,q,r,x;
    float pr;
    cout<<"Enter the marks of 5 subjects: "<< endl;
    cin>>n>>m>>p>>q>>r;
    cout<<"Enter the max. marks of a subject: ";
    cin>>x;
    pr = ((n+m+p+q+r)/(x*5))*100;
    if(pr<=100){
    cout<<"Percentage = "<<pr<<" %";
    }
    else
    cout<<"incorrect MARKS";
    return 0;
}