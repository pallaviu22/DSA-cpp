#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata();
};

int Employee::count; //--->static function



void Employee::getdata()
{
    cout << "the id of employee is " << id << "and the count is" << count << endl;
}
int main()
{

    Employee pals, mona, shraddha;

    pals.setdata();
    pals.getdata();

    mona.setdata();
    mona.getdata();

    shraddha.setdata();
    shraddha.getdata();
    return 0;
}