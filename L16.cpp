#include<iostream>
using namespace std;

//call by value ----call by reference

    void swap(int a, int b){
        int temp=a;
        a=b;
        b=temp;
    }      //THIS WILL NOT SWAP THE VARIABLE.


//call by referencee --pointers
    void swappointer(int* x,int* y){
        int temp=*x;
        *x=*y;
        *y =  temp;
    } //THIS WILL SWAAP THE VARIABLE,,,ADDRESS EXCHNGE HOGA UPR WALE CODE SE NAHI HOGA
         //THIS WILL WORK.

        void swappointerreference(int &x,int &y){
        int temp=x;
        x=y;
        y =  temp;
        }

int main(){

    int a=8;int b=9;
    cout<<"the value is a is "<<a<<" and the value of b is "<<b<<endl;     /*yepp this works*/
    swap(a,b);
    cout<<"the value is a is "<<a<<" and the value of b is "<<b<<endl;     /* to hame addres se swap krna pdega*/
    swappointer(&a,&b);
    cout<<"the value is a is "<<a<<" and the value of b is "<<b<<endl;  /* not direct*/
    swappointerreference(a,b);
    cout<<"the value is a is "<<a<<" and the value of b is "<<b<<endl; 
    

    return 0;
}