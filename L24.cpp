#include<iostream>
using namespace std;


class employee{

    int Id;
    static int count;//yaha p ham count=1000  >>aise value set nahi kr skte ,  private hai n
    // Count is the static data member of class Employee

    public:
    void setdata(){
        cout<<"enter id no"<<endl;
        cin>>Id;
    }
    void getdata(){
        cout<<endl<<"the Id no is "<<Id<<" and the employee no is"<<count+1<<endl;
        count++;
    }
//---static variable function me sirf static wale hi use kr skte hai

static void getcount(void){
    cout<<"The number of count is "<<count<<endl;
}
};

int employee::count; //default count calue is 0
//int employee::count=1000;--->aise krke value set kar sakate hai.

int main(){
    
employee harry,ram,sham;

harry.setdata();
harry.getdata();
employee::getcount();

ram.setdata();
ram.getdata();
employee::getcount();

sham.setdata();
sham.getdata();
employee::getcount();

    return 0;
}