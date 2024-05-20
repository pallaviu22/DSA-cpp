/*about gobal variable ,local variable ,printing a function.
declaring a function */

#include<iostream>
using namespace std;
int glammer=23;
void sum(){
    cout<<glammer;
}
int main(){
    int a=1;int b=2;
    int glammer =24;
    cout<<"The value of a is "<<a<<"\nThe value of b is "<<b;
    cout<<"\nthe value of glammer is "<<glammer;
    sum();
    return 0;
}