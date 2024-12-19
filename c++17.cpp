#include <iostream>
using namespace std;
/*
int main()
{
    int i=2, j=3;
    for (; 3 ;)
    {
        cout<<"bye"<<"\t";
    }
    cout<<"\n done";
}
*/


int main(){

int n, s=0 ;

cout<<"Enter any number";
cin>>n;
for(int i=1; i<n; i++)
{
    if(n%i==0)
    {
        s=s+i;
    }
}
if(s==n)
{
    cout<<"perfect number :";
}
else
{
    cout<<"not perfect number : ";
}
}









