// OOPS--->classes and objects

// // c++--->initically called ----->C with classes by stroustroup

// classs---> extension of structure
// limitation of structure ---> memebers are public
//                         ---> no methods

// classes---> structures+moreeeee

// classes ---->can have methods and properties

// ++++++++++by default classk members are private.


///----------nesting of members----------


#include<iostream>
#include<string>
using namespace std;

class binary{
    private:
    string s;//----->by default classk members are private. PRIVATE NHI LIKHTE TO BHI CHLTA


    public:
    void read();
    void chkbinary();
    void ones_compliment();
    void display();
};

void binary :: read(){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}

void binary :: chkbinary(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"not a binary ,please fuck off "<<endl; 
        }
    }
    
}

void binary :: ones_compliment(){

    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else{
            s.at(i)='1';
        }
    }
    
}

void binary::display(){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}

int main(){

    binary b;
    b.read();
    b.chkbinary();
    b.ones_compliment();
    b.display();
    
    return 0;
}