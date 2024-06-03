// first oop program to clear concept of public and private access specifier, setter and getter function.
#include <iostream>
using namespace std;
class Employee {
    private:
    int a,b,c;
    public:
    int d, e;
    void setEmployee(int a1, int b1, int c1);// Declaration.
    void getEmployee() {
        cout<<"The value of a is: "<<a<<"."<<endl;
        cout<<"The value of b is: "<<b<<"."<<endl;
        cout<<"The value of c is: "<<c<<"."<<endl;
        cout<<"The value of b is: "<<b<<"."<<endl;
        cout<<"The value of c is: "<<c<<"."<<endl;
        }
};
void Employee::setEmployee(int a1, int b1, int c1) {
    a=a1;
    b=b1;
    c=c1;
} // In public access specifier we declared setEmployee function now we are defining setEmployee function.
int main() {
    Employee Jabbar; //creating object of class Employee.
    Jabbar.setEmployee(2,4,5); //providing values to setEmployee function in public access specifier.
    Jabbar.d = 7; // we have assigned values with set function to d and e because they are declared in public access apecifier.
    Jabbar.e = 8;
    Jabbar.getEmployee(); //getting values of this employee by getEmployee function.
    return 0;
}
