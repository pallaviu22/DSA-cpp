#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter the age"<<endl;
    cin>>age;
    if(age<1){
        cout<<"you are not yet born baby";
    }
    else if(age<18 && age>0){
        cout<<"not allowed";
    }
    else if(age==18){
        cout<<"kid pass";
    }
    else{
        cout<<"you are invited";
    }

    return 0;
}