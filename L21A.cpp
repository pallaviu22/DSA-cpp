#include<iostream>

using namespace std ;

class ANIMAL{

    private:
    int cost;
    public :
    int name ; int age ;

    void getdata(int cost);

    void display(){
        cout<<"THE NAME OF THE ANIMAL IS "<<name<<endl;
        cout<<"THE AGE OF THE ANIMAL IS "<<age<<endl;
        cout<<"THE COST OF THE ANIMAL IS "<<cost<<endl;
    }

};

void ANIMAL :: getdata (int cost1){
    cost=cost1;
}

int main(){

    ANIMAL RAT;

    RAT.name=1;
    RAT.age =22;

    RAT.getdata (10);
    RAT.display();

    return 0;
}

/*class Employee {
    private:
    int a,b,c;

    public:
    int d ,e ;

    void setdata(int a, int b, int c);
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    };
};

void Employee :: setdata (int m , int n, int o){
    a=m;
    b=n;
    c=o;

};

int main (){
    Employee Harry;
    Harry.d = 1;
    Harry.e =2;

    Harry.setdata(3,4,5);
    Harry.getdata();

};*/