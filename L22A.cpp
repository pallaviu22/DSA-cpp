#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void checkbin(void);
    void onescomp(void);
    void display(void);
};

void binary :: read (void){
    cout<<"ENTER THE BINARY NUMBER"<<endl;
    cin>>s;
}

void binary :: checkbin(void){
    for(int i = 0 ; i < s.length() ; i++ )
    {
        if( s.at(i) != '1' && s.at(i) != '0'){
            cout<<"INCORRECT BINARY FORMAT"<<endl;
            exit(0);
        }
        
    }
    
}

void binary :: onescomp(void){
    for(int i = 0 ; i < s.length() ;i++){
        if( s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    cout<<"DISPLAYING BINARY NUMBER"<<endl;
    for(int i = 0; s.length() ;i++)
    {
        cout<<s.at(i);  
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    b.checkbin();
    b.onescomp();
    b.display();

    return 0;
}