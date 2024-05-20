#include<iostream>
using namespace std;


// Function overloading is a process to make more than one 
// function with the same name but different parameters, numbers, or sequence

int sum(int a,int b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}

int main(){
    int a,b,c;
    cout<<"the sum of a and  b is "<<sum(2,4)<<endl;
    //ye 1st sum se calculate krega
    cout<<"the sum of a , b and c is "<<sum(2,4,8)<<endl;
    //ye 2nd sum se
    //---->ye parameters k upr depend krega ''

    //------hm ek naam k bohot se function bana skte haiii 
    //koi error nhi dega ,vo arguments parameter p depend kregaa

    return 0;
}