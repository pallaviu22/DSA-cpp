#include<iostream>
using namespace std;

class Employee{

    private:
     int a; int b;int c;
    public:
    int d,e;

    void getdata(int a,int b,int c);//DECLARATION--use hoga nhi hoga bnega no garuntee
    void setdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;

    };

};

void Employee:: getdata(int a1 ,int b1 , int c1){
        a=a1;
        b=b1;
        c=c1;
    }

int main(){
    Employee HARRY;
// HARRY.a=81;--->will throw error cause a is private

    HARRY.d=9;
    HARRY.e=8;

    HARRY.getdata(1,2,3);
    HARRY.setdata();
    return 0;
}