#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
    void getdata(int v1 , int v2 )
    {
        a=v1;
        b=v2;
    }

    void sumcomplex(complex o1,complex o2){
        a=o1.a +o2.a;
        b=o1.b +o2.b;
    }

    void printnumber(void){
        cout<<"your complex number is"<<a<<"+"<<b<<"i"<<endl;

    }

};

int main(){
    complex c1,c2,c3;
    c1.getdata(1,2);
    c1.printnumber();

    c2.getdata(3,4);
    c2.printnumber();

    c3.sumcomplex(c1,c2);
    c3.printnumber();

    

    
    return 0;
}