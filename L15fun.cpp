#include<iostream>
using namespace std;

int sum(int ,int );
/**----function prototype is nothing but ki pehle hi bata dena ki ye func rhega 
 for  example---> sum func main k bad likha hai to agr me pehle jaise upr hai vaise nhi batatyi to error
 too func proo yahi hai func pehle bata dena ki ye age ayega ise pehle hi dhundoo
*/


int main(){
    //Function and function prototypee

    // int sum(int ,int );//---->aisa format chlega
    // int sum(int a , int b)----> this is also valid
    int num1 ;int num2;
    cout<< "enter a num1"<<endl;
    cin>>num1;
    cout<< "enter a num2"<<endl;
    cin>>num2;
    cout<<"the sum of 2 integers is "<<sum(num1 ,num2);

    return 0;
}

int sum(int a , int b){
    int c = a+b ;
}