/*
#include<iostream>
using namespace std;
non return function
void functionname()
*/


#include <iostream>
using namespace std;

//function return value without parameter
/*

datatype functionname()
{
    statement/code;
    return value;
}

int product(int qty)
{
    return 500*qty;

}
int main()
{
    int q ;
    cout<< " Enter Number = :\n";
    cin>>q;
    product(q);
}

*/


//   W. A. p. to print the account number of any  Rollno ?


/*


#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

    unordered_map<string, string> data = {
        {"101", "ACC001"},
        {"102", "ACC002"},
        {"103", "ACC003"}
    };

    string rollno;
    cout << "Enter Roll Number: \n";
    cin >> rollno;

    auto it = data.find(rollno);
    if (it != data.end()) {
        cout << "Account Number for Roll No " << rollno << ": " << it->second << endl;
    } else {
        cout << "Roll Number not found." << endl;
    }

    return 0;
}

*/


#include<iostream>
using namespace std;

// passing array is a parameter in a function;

void swp (int a, int b)
{

    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Value of a= "<<a<<"\n";
    cout<<"Value of B = "<<b<<"\n";
}
int main ()
{
    int x,y;
    cout<<"Enter 2 no: \n";
    cin>>x>>y;
    swp(x,y);

}
















