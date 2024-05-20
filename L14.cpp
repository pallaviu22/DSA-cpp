#include<iostream>
using namespace std;

/********* STRUCT   UNION    ENU .*********/

struct employee
{
    int eid;
    char character;
    float salary;
    
};

union student
{
    int rollno;
    char name;             //union me struct se different ye hoga ki at a time ek hi use ho skta
    float marks;         //either rollno ,name.salary ek value set ki to dusri wli overwrite ho jayegi
                        //this gives more control over memoryy...hehehe
};



int main(){
 
    struct employee kizz;
    kizz.eid=1;
    kizz.character='p';
    kizz.salary=2000000000;

    cout<<"the salary of kizz is "<<kizz.salary<<endl;

    union student s1;
    s1.rollno=24;
    s1.name='k'; //yaha p name declare kiya to roll no chala jayegaa and if agr me
    cout<<s1.rollno<<endl;//roll no print krne ki koshish krti hun then it will give me garbage value.
    cout<<s1.name<<endl;


    enum {breakfast , lunch , dinner };
    cout<<breakfast<<endl;
    int m1=dinner;           //enum  breakfst ko 0;lunch ko 1;       
    cout<<m1;                //aur dinner ko 2 .. basically no de deta hai usemujhe b nhi  pata 
    return 0;                /***pata chla to update deti hun***/
}   