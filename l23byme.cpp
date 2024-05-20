#include<iostream>
using namespace std;

class shop{
    int itemno[10];
    int itemprice[10];
    int counter;

    public:
    void inicounter(){
        counter=0;
    } 
    void setdata(void);
    void displaydata(void);
};

void shop::setdata(void){
    cout<<"enter i no"<<endl;
    cin>>itemno[counter];
    cout<<"enter price"<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop::displaydata(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<itemno<<"its price"<<itemprice<<endl;
    }
    
}
int main(){
    
    shop shopsee;
    shopsee.setdata();
    shopsee.setdata();
    shopsee.setdata();
    shopsee.displaydata();
    return 0;
}