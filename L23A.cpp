#include <iostream>
using namespace std;

class SHOP
{
    int ItemId[100];
    int Itemprice[100];
    int counter;

public:
    void initCounter(void) ;
    void Setdata(void);
    void displaydata(void);
};

void SHOP:: initCounter(void){
    counter=0;
}

void SHOP ::Setdata(void)
{
    cout << "Enter the ItemId of the object no. " << counter + 1 << endl;
    cin >> ItemId[counter];
    cout << "enter the price of object no . " << counter + 1 << endl;
    cin >> Itemprice[counter];
    counter++;
}

void SHOP ::displaydata(void)
{
   for (int i = 0; i < counter; i++)
   {
     cout << "price of the object id no ." << ItemId[i] << "is" << Itemprice[i] << endl;
}
   }
   

int main()
{

    SHOP shop1;
    shop1.initCounter();
    shop1.Setdata();
    shop1.displaydata();

    return 0;
}