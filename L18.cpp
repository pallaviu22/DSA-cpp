#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=0){
        return 1;
    }
    return n*factorial(n-1);
}

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
    //recursive and recurssion functions
    int n;   
    cout<<"enter an integer"<<endl;
    cin>>n;
    cout<<"the factorial of "<<n<<" is "<<factorial(n)<<endl;
    cout<<"the fib of "<<n<<" is "<<fib(n)<<endl;


    return 0;
}