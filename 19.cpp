#include <iostream>
using namespace std;

int main()
{
    int prev=0 , cur=1;
    int n, term=0;
    cout<<"enter term of fibonacci series\n";
    cin>>n;
  //  cout<<prev<<" "<<cur<<"\t";
    for (int i=1; i<=n; i++)
    {
        term=prev+cur;
        prev=cur;
        cur=term;
        cout<<term<<"  ";
    }
}
