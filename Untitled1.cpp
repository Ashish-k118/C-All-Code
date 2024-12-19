/*
#include <iostream>
using namespace std;

void fun(int a[], int s)
{
    for (int i=0; i<s; i++)
    {
        a[i]=a[i]+10;
        cout<<a[i]<<"\n";
    }
}
int main()
{
    int arr[]={20,13,43,2,5};
    int s=sizeof(arr)/sizeof(arr[0]);
    show(arr,s);
    cout<<"\original array\n";
    for (int i=0; i<s; i++)
    {
        a[i]=a[i]+10;
        cout<<a[i]<<"\n";
    }
}
*/






/*

#include <iostream>
#include <cmath>

using namespace std;

void displayMenu() {
    cout << "Select operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Square Root\n";
    cout << "6. Exit\n";
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error! Division by zero.\n";
        return 0;
    }
}

double squareRoot(double a) {
    if (a >= 0) {
        return sqrt(a);
    } else {
        cout << "Error! Negative input for square root.\n";
        return 0;
    }
}

int main() {
    int choice;
    double num1, num2;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        } else if (choice == 5) {
            cout << "Enter number: ";
            cin >> num1;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Result: " << squareRoot(num1) << endl;
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

*/















