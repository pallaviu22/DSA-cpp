#include<iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;                 // toh ham inline tabhi use kr skte hai jb func chotusa ho
}                         //Inline functions are used to reduce the function call
                       //reduce time and increase program efficiency

 float moneyreceived(int a , float rate=1.04){
        return a*rate;
 }

int main(){
    int a=3;int b=3;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;   /*jb func bohot baar cll ho to execution metime lgta hai*/
    cout<<product(a,b)<<endl;   //islye inline use krte haiii
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;

    //default argument--->


    int money=100000;
    cout<<"if you have $"<<money<<" in your account , you will get total $"<<moneyreceived(money)<<"in your account"<<endl;

    // int strlen(const char *p){
    //     //Constant arguments are used when you don’t want your values to be changed or modified by the function.
    // }

    /*static int c=0;
    c=c+1;
    static int me hota hai kii ,jb firse is code me ayega to c ki modified value ki ayega
    first 0 rhega ,
    fir q ho jayegi ,next time ayegi to 1 rhega!!*/



    return 0;
}