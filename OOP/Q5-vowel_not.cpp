#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"Enter the Alphabet: ";
    cin>>n;
    if(n =='a'||n=='e'||n=='i'||n=='o'||n=='u'){
        cout<<"Vowel";
    }
    else if(n =='A'||n=='E'||n=='I'||n=='O'||n=='U'){
     cout<<"Vowel";
    }
    else 
    cout<<"not vowel";
    return 0;
}