/*#include <iostream>
using namespace std;

void fun(int a[], int s)
{
    for (int i=0; i<s; i++)
    {
        a[i]=a[i]+1045;
        cout<<a[i]<<"\n";
    }
}
int main()
{
    int arr[]={20,13,43,2,5};
    int s=sizeof(arr)/sizeof(arr[0]);
    fun(arr,s);
    cout<<"\original array\n";
    for (int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\n";
    }
}
*/


#include<iostream>
using namespace std;
int sbi (int code, int pws)
{
    return 1000;
}
int axis(int code, int pws)
{
    return 2000;
}
int main ()
{
    int(*atm)(int,int);
    atm=sbi;
    cout<<"min balance of sbi="<<atm(1001,1234)<<"\n";
    atm =axis;
    cout<<"min balance of axis="<<atm(2001,25 34)<<"\n";
}


/*
 Recursion

Function Calling
It self is Called

Recursion


1 > Head , Recursion
2 > Tail Recursion
/*
