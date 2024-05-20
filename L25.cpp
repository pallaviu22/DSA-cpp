#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    public:

    void setdata(void){
        cout<<"enter the id of employee "<<endl;
        cin>>id;

    }

    void getdata(void){
        cout<<"the id of the employee is"<<id<<endl;
    }

};


int main(){
    // Employee harry ,pallavi , anil , undre ;

    Employee FB[4];

    for (int i = 0; i < 4; i++)
    {
        FB[i].setdata();
        FB[i].getdata();
    }
    
    
    return 0;
}