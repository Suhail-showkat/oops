#include<iostream>
using namespace std;
int main ()
{
    //USE OF FUNCTIONS
    //WE DONT NEED TO REPEAT OUR CODE 
    //E.G IF WE HAVE TO PRINT A STAR PATTERN
    int n,i,j;
    cout<<"ENTER THE n ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //TO PRINT THE ABOVE PATTERN ANY NUMBER OF TIMES WE NEED TO REPEAT THE CODE THAT NUMBER OF TIME
    //E.G
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}