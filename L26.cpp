#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    friend Complex sumComplex(Complex o1, Complex o2);

    void printit()
    {
        cout << "the given complex is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{

    Complex c1, c2, sum;

    c1.setdata(1, 3);
    c2.setdata(3, 6);
    c1.printit();
    c2.printit();

    sum = sumComplex(c1, c2);
    sum.printit();

    return 0;
}