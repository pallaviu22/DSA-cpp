#include<iostream>
using namespace std;

class Y;

class X{
    int data1 ;

    public:

    void setdata(int Value){
        data1=Value;
    }

    friend void add(X,Y);
};


class Y{
    int data2;

    public:
    void setdata(int value){
        data2=value;
    }

    friend void add(X,Y);
};

void add(X o1 , Y o2){
    cout<<"sum of the two datas "<<o1.data1 +o2.data2<<endl;;
}

int main(){
    X a1;
    a1.setdata(2);

    Y b1;
    b1.setdata(3);

    add(a1,b1);
    return 0;
}