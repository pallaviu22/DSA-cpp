#include <iostream>
using namespace std;

class Complex;

class calculator
{
public:
    int sum(int a, int b)
    {
        a + b;
        return 0;
    }

    int SumRealComplex(Complex, Complex);
    int SumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

// friend int calculator::SumRealComplex(Complex, Complex);
// friend int calculator::SumCompComplex(Complex, Complex);

friend class calculator;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void display(){
        cout<<"your complex is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int calculator:: SumRealComplex(Complex o1 ,Complex o2){
    return (o1.a + o2.a);
}

int calculator::  SumCompComplex(Complex o1, Complex o2){
    return (o1.b + o2.b);
}


int main()
{
    Complex c1,c2;

    c1.setdata(1,2);
    c2.setdata(3,5);

    c1.display();
    c2.display();

    calculator calc;
    int res =calc.SumRealComplex(c1 , c2);
    cout<<res<<endl;

    int resc =calc.SumCompComplex(c1 , c2);
    cout<<resc;
    

    return 0;
}