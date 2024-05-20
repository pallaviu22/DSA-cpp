#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
        if(i==2){
            break;      //2 atehi break ho jayega .....2 print hoga kyun ki 
            }           //uske bad break ho rh hai and  already cout ho jayega!!
    }


    for (int i = 0; i < 5; i++)
    {
        // cout<<i<<endl;
        if(i==2){
            continue;
        }                 //2 skp ho jayega  and continue print hota jayega       
        cout<<i<<endl;
    }
    
    
    return 0;
}