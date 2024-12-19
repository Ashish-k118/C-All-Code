#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 4;

    for (int i=1; i<=a; i++)
        {
        for (int j=1; j<=b; j++)
        {
            if (i==1 || i==a)
        {
            cout<<"*"<<" ";
        }
            else if (j==1 || j==b)
        {
            cout<<"*"<<" ";
        }
            else
        {
            cout<<"  ";
        }
        }
        cout<<endl;
    }

    return 0;
}


























