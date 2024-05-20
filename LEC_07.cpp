#include<iostream>
using namespace std;
int c = 90;

int main(){
    float a = 0.05f;
    long double b =2.155l;
    int c=a+b;
    cout<<"the global c is "<<::c<<endl;



/***********typecasting*********/
cout<<"the value if int a is"<<int(a)<<endl;


float x=455;
float &y=x;   //reference variable here x and y will have same value..
cout<<x<<endl;
cout<<y<<endl;
    

    return 0;
}