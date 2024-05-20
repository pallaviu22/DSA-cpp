#include<iostream>
using namespace std;

int main(){
    //?pointers

   // &---->address of variable

   // *---->dereference operator

   int a=2;
   int* b = &a;   //&--->adress of a

   cout<<"Adress of a is "<<&a<<endl;
   cout<<"Adress of a is "<<b<<endl;

    //*---->dereference operator

    cout<<"The value of a is "<<*b;    //   *(pointer)---->gives value 

    //pointer to poinerr

    int** c = &b;

    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value of b is "<<*c<<endl;
    cout<<"the value of value of a"<<**c<<endl; // dereference dereferencee      *c=b--->*b--->a;


    
    return 0;
}