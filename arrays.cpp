#include<iostream>
using namespace std;

int main(){
    // ARRAY EXAMPLES
    //arrays are changable..

    int marks[]={12,13,14,15,11};
    // cout<<marks[0]<<endl;
    marks[3]=22;

    for (int i = 0; i < 5; i++)
    {
        cout<<"The Marks of "<<i<<" is "<<marks[i]<<endl;
    }
    
    //*marks --->usme value dega kyunki khud marks hi address store krta haiii

    //pointers and arrays

    int* p = marks;

    p++;
    cout<<"the vaalue of *p is "<<*p<<endl;


    return 0;
}