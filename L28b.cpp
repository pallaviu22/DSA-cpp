#include <iostream>
using namespace std;


class Y;

class X
{
    int data;

    friend void exchange(X &, Y &);

public:
    void indata(int a)
    {
        data = a;
    }

    void display()
    {
        cout << data << endl;
    }
};

class Y
{
    int num;
    friend void exchange(X &, Y &);

public:
    void indata(int a)
    {
        num = a;
    }

    void display()
    {
        cout << num << endl;
    }
};

void exchange(X &x, Y &y)
{
    int temp = x.data;
    x.data = y.num;
    y.num = temp;
}

int main()
{
    X o1;
    Y o2;
    
    o1.indata(3);
    o2.indata(4);

    o1.display();
    o2.display();

    exchange(o1,o2);
    
    o1.display();
    o2.display();

    return 0;
}