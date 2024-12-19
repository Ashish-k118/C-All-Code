// #include <iostream>
// using namespace std;
//  it is use to dealocate di memory of occupation  object
//  operator overloading it used to redefine nature of operator for non primitive data type

//  OPERATOR OVERLOADING :

//  1. Unary operator overloading
//  2. Binary operator overloading
/*
syntex :
    ~classname()
    {
        statement code;
    }

class top
{
    int x=10;
    public:top()
    {
    cout<<x;
    }
    ~top()
    {
        cout<<"memory released";
    }
};
int main()
{
    top t;
}
*/



//  unary operator
/*
class top
{
    int x;
    public:top(int a)
    {
        x=a;

    }
    void operator ++()  //  unary operator
    {
        x++;
        cout<<x;
    }
};
int main ()
{
    top t1(3);
    ++t1;
}





class top
{
    int a , b;
    public:top(int kg, int gram)
    {
        a=kg;
        b=gram;
    }
    void operator +(top obj)
    {
        a=a+obj.a;
        b=b+obj.b;
        cout<<"total k.g = "<<a<<"\t";
        cout<<"total gram = "<<b<<"\n";
    }
};
int main()
{
    top p1(20,10);
    top p2 (90,30);
    p1+p2;
}
*/





/*Q.1 Write a C++ program to display Names, Roll No., and grade of 3 students who have appeared in the examination.
Declare the class of name, roll no., and grade. Create an array of class objects.
 Read and display the contents of the array


#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
    char grade;

public:
    void readDetails() {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollNo;
        cout<<"Enter grade: ";
        cin>>grade;
    }

    void displayDetails()
     const {
        cout<<"Name:"<<name<<",Roll No.:"<<rollNo<<",Grade:"<<grade<<endl;
    }
};

int main()
 {
    const int numStudents = 3;
    Student students[numStudents];

    cout<<"Enter details for "<<numStudents<<"students:"<<endl;
    for (int i=0; i< numStudents; i++) {
        cout<<"Student"<< i + 1 <<":"<<endl;
        students[i].readDetails();
    }

    cout<<"\nDisplaying details of students:"<<endl;
    for (int i = 0; i < numStudents; i++) {
        cout<<"Student"<< i + 1 <<": ";
        students[i].displayDetails();
    }

    return 0;
}



*/





//   with the help of frind function we can asse the privet deta member of eny class out site site off it

/*
class frind1
{
    int notes=1000;
    public:void show()
    {
        cout<<notes;
    }
};
int main ()
{
    frind1 f;
    cout<<f.notes;
}

*/





/*
Q.2 Write a C++ program to read the Empcode,Empname,Salary of N employee and compute the
 net salary of each employee (DA=52% of basic and HRA=30% of basic).





#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empCode;
    string empName;
    float basicSalary;
    float netSalary;

public:
    void readDetails() {
        cout<<"Enter Employee Code: ";
        cin>>empCode;
        cout<<"Enter Employee Name: ";
        cin>>empName;
        cout<<"Enter Basic Salary: ";
        cin>>basicSalary;
    }
    void calculateNetSalary() {
        float da = 0.52 * basicSalary;
        float hra = 0.30 * basicSalary;
        netSalary = basicSalary + da + hra;
    }
    void displayDetails() const {
        cout<<"Emp Code: "<<empCode<<", Name:"<<empName<<", Net Salary:"<<netSalary<<endl;
    }
};

int main() {
    int n;

    cout<<"Enter the number of employees:";
    cin>>n;

    Employee employees[n];

    cout<<"Enter details for "<<n<<" employees:"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<"Employee "<<i + 1<<":"<<endl;
        employees[i].readDetails();
        employees[i].calculateNetSalary();
    }
    cout<<"\nDisplaying employee details:"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<"Employee"<< i + 1 <<": ";
        employees[i].displayDetails();
    }

    return 0;
}

*/








/*
Q.3 Write a C++ program to use scope resolution operator using static class.
*/











/*
Q.4 Write a C++ program to count objects.
*/












/*
Q.5 Write a C++ program to find largest of two numbers using friend function.
*/














/*
Q.6.Write a C++ program to find area of geometry using function overloading.
*/














/*
Q.7 Write a C++ program to find the distance between two station using operator overloading.
*/














/*
Q.8 Write a C++ program to to calculate area of triangle using parameterized constructor.
*/















