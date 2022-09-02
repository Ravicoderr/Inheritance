#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    float salary;
    employee(int empid)
    {
        id = empid;
        salary = 99000;
    }
    employee() {}
    void display()
    {
        cout << "The emopyee is " << id << endl;
    }
};
/*After writing the class keyword we have to write the derived class name and then put a “:” sign.
After “:” sign we have to write the visibility mode and then write the base class name.
Note:

Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited
An example program is shown below to demonstrate the concept of inheritance.

 // Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}*/

class programmer : public employee
{
public:
    int code;
    programmer(int inid)
    {
        id = inid;
        code = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    employee ravi(1), mohan(2);
    ravi.display();
    cout << "the salary of ravi is " << ravi.salary << endl;
    mohan.display();
    cout << "the salary of mohan is " << mohan.salary << endl;

    programmer skills(11);
    cout << skills.code << endl;
    cout << skills.id << endl;
    skills.getdata();
    return 0;
}