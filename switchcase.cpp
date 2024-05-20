#include<iostream>
using namespace std;

int main(){
    // SWITCH CASE
    int age;
    cout<<"enter age";
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"you are 18";
        break;
    
    default:
    cout<<"No special case";
        break;
    }
    return 0;
}