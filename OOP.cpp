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







//second program for student's cards:
#include<iostream>
using namespace std;
class Student {
    private:
    string name;
    string fatherName;
    int rollNo;
    int Class;
    public:
    void setrecord(string n, string f, int r, int c); //defining we will declare it later.
    void getrecord() {
        cout<<"\n\n********************************"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Father's Name: "<<fatherName<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Class: "<<Class<<endl;
        cout<<"********************************"<<endl;
    }
};
void Student::setrecord(string n, string f, int r, int c) {
    name = n;
    fatherName = f;
    rollNo = r;
    Class = c;
};
int main() {
    Student S1;
    S1.setrecord("Zakia", "Sajid", 5, 8);
    S1.getrecord();
    Student S2;
    S2.setrecord("Saimi", "Sami", 4, 9);
    S2.getrecord();
    return 0;
}










//you can declare objects along with class defination like below:
#include<iostream>
using namespace std;
class Employee {
    private:
    int employeeSalary;
    public:
    void setemployeeSalary( int e ) {
        employeeSalary = e;
    }
    void getemployeeSalary() {
        cout<<"The salary of the Employee is: "<<employeeSalary<<endl;
    }
} harry, noman;
int main() {
    harry.setemployeeSalary(70000);
    harry.getemployeeSalary();
    noman.setemployeeSalary(50000);
    noman.getemployeeSalary();
    return 0;
}













/* this program will take a binary number from user and after one's complement it will display number on screen. It will also check whether
the provided number is binary or not.*/
#include<iostream>
#include<string>    //header file for strings
using namespace std;
class binaryNumber {
    private:
    string s;
    public:
    void read(void);   
    void checkBinary(void);
    void onesComplement(void);
    void display();
};
void binaryNumber::read(void) {
    cout<<"Please! Enter a binary number: "<<endl;
    cin>>s;
}
void binaryNumber::checkBinary(void) {
    for(int i =0; i < s.length(); i++) {
        if(s.at(i) != '0' && s.at(i) != '1') {
        cout<<"Your provided number is incorrect."<<endl;
        exit(0);
        }
    }
}
void binaryNumber::onesComplement(void) {
    checkBinary(); //check binary will be called automatically no need to call this function in main.
    for(int i=0; i<s.length(); i++) {
        if(s.at(i)=='0') {
            s.at(i)='1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binaryNumber::display(void) 
{
    cout<<"Displaying your binary Number :"<<endl;
    for(int i = 0; i<s.length(); i++) {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main() {
    binaryNumber b;
    b.read();
    // b.checkBinary();
    b.display();
    b.onesComplement();
    b.display();
    return 0;
}














//This program will display depature and arrival time of millat express train moreover it will also display stations
#include<iostream>
#include<string>
using namespace std;
class railway
{
private:
    string millatArrival;
    string millatDeparture;
    string fromStation;
    string toStation;

public:
    void setmillatArrival(string a);
    void setmillatDeparture(string d);
    void setfromStation(string f);
    void settoStation(string t);
    void display() {
        cout<<"Millat Express arrival time: "<<millatArrival<<"."<<endl;
        cout<<"Millat Express departure time: "<<millatArrival<<"."<<endl;
        cout<<"Millat Express going from : "<<fromStation<<" to "<<toStation<<"."<<endl;
    }
};

void railway::setmillatArrival(string a) {
    millatArrival = a;
}
void railway::setmillatDeparture(string d) {
    millatDeparture = d;
}
void railway::setfromStation(string f) {
    fromStation = f;
}
void railway::settoStation(string t) {
    toStation = t;
}
int main() {
    railway millatExpress;
    millatExpress.setmillatArrival("08:00 AM");
    millatExpress.setmillatDeparture("09:00 AM");
    millatExpress.setfromStation("Karachi");
    millatExpress.settoStation("Lahore");
    millatExpress.display();
    return 0;
}











//The below code will take item id and price from user and than it will display on screen.
#include<iostream>
using namespace std;
class shopItems {
    private:
    int itemId[100]; //This is the array to store 100 items id.
    int itemPrice[100]; //This is the array to store 100 items price.
    int counter; //This will mention number of items.
    public:
    void setitemCounter(void) {
        counter = 0;
    } //Initializing counter with 0.
    void setPrice(void); //declaring function.
    void displayPrice(); //declaring function.
};
void shopItems::setPrice(void) {
    cout<<"Please! Enter the Id of the item: "<<counter + 1<<endl;
    cin>>itemId[counter];
    cout<<"Please! Enter the Price of the item: "<<endl;
    cin>>itemPrice[counter];
    counter++; 
}
void shopItems::displayPrice(void) {
    for(int i = 0; i < counter; i++) {
        cout<<"The price of the item is "<<itemPrice[i]<<" and the Item Id is "<<itemId[i]<<"."<<endl;
    }
    
}
int main() {
    shopItems Dukaan; //object for shopItems Class
    Dukaan.setitemCounter();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.displayPrice();
    return 0;
}













//Employee program with class
#include<iostream>
using namespace std;
class employeeData {
    private:
    string employeeName;
    string employeeFather;
    string joiningDate;
    string employeeSalary;
    public:
    void setemployeeName(string n) {
        employeeName=n;
    }
    void setemployeeFather(string f) {
        employeeFather=f;
    }
    void setjoiningDate(string d) {
        joiningDate=d;
    }
    void setemployeeSalary(string s) {
        employeeSalary=s;
    }
    void display() {
        cout<<"\n\n**************************************************"<<endl;
        cout<<"Employee's Name: "<<employeeName<<endl;
        cout<<"Employee's Father's Name: "<<employeeFather<<endl;
        cout<<"Joining Date: "<<joiningDate<<endl;
        cout<<"Salary: "<<employeeSalary<<endl;
        cout<<"**************************************************"<<endl;
    }
};
int main() {
    employeeData Farhan;
    Farhan.setemployeeName("Farhan");
    Farhan.setemployeeFather("Hussain");
    Farhan.setjoiningDate("6-October-2024");
    Farhan.setemployeeSalary("Rs 70 000/-");
    Farhan.display();
    employeeData Raza;
    Raza.setemployeeName("Raza");
    Raza.setemployeeFather("Kamran");
    Raza.setjoiningDate("7-October-2024");
    Raza.setemployeeSalary("Rs 50 000/-");
    Raza.display();
    employeeData Chaman;
    Chaman.setemployeeName("Chaman");
    Chaman.setemployeeFather("Hamdan");
    Chaman.setjoiningDate("8-October-2024");
    Chaman.setemployeeSalary("Rs 30 000/-");
    Chaman.display();
    return 0;
}















//Static count data member for all objects.
#include<iostream>
using namespace std;
class Employee {
    private:
    int id;
    static int count;
    public:
    void setData(void) {
        cout<<"Please! Enter your Id:"<<endl;
        cin>>id;
        count++;
    }
    void getData(void) {
        cout<<"Your Employee Id is "<<id<<" and the Employee # is "<<count<<"."<<endl;
    }
};
int Employee::count; //by default value is zero.
int main() {
    Employee Zafar, Kamran, Imran;
    Zafar.setData();
    Zafar.getData();
    
    Kamran.setData();
    Kamran.getData();
    
    Imran.setData();
    Imran.getData();
    return 0;
}












//Static data member and static function:
#include<iostream>
using namespace std;
class Employee {
    private:
    int id;
    static int count;
    public:
    void setData(void) {
        cout<<"Please! Enter your Id:"<<endl;
        cin>>id;
        count++;
    }
    void getData(void) {
        cout<<"Your Employee Id is "<<id<<" and the Employee # is "<<count<<"."<<endl;
    }
    static void getCount(void) {
        //cout<<id; it throws an error.
        cout<<"The value of count is: "<<count<<endl;
    }
};
int Employee::count=1000; //by default value is zero but here we have initialized it with 1000.
int main() {
    Employee Zafar, Kamran, Imran;
    Zafar.setData();
    Zafar.getData();
    Employee::getCount();
    
    Kamran.setData();
    Kamran.getData();
    Employee::getCount();
    
    Imran.setData();
    Imran.getData();
    Employee::getCount();
    return 0;
}
