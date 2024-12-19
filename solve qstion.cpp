/*
Q.1 W.A..P to display only unique value in an array?

Q.2 W.A..P.   to  only  display the prime values in an array?

Q.3 W.A.P.  to finding single  missing number in a consecutive value in an array?

Q.4 W.A.P. to display the sum of alternate values of an array?

Q.5 W.A.P.  to find square root of valid number in an array?

Q.6 W.A.P.  to display array in ascending orders?

Q.7 W.A.P. to display array in descending order?

Q.8 W.A.P. to shift all zero at the end but relative order should be maintained?

Ex: arr={2,4,0,9,0,7}
Output:{2,4,9,7,0,0

*/






//1.
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[5] , j;
    cout<<"enter 5 records\n";
    for (int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    cout<<"result of unique value\n";
    for (int i=0; i<5; i++)
    {
    for( j=0; j<i; j++)
    {
        if (arr[i]==arr[j])
        {
            break;
        }
    }
    if (i==j)
    {
        cout<<arr[i]<<"\t";
    }
    }
}

*/



//  2.

/*
#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<"enter 5 records\n";
    for (int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    int f;
    cout<<"result of unique value\n";
    for (int i=0; i<5; i++)
    {
        f=0;
    int k=arr[i]-1;
    while (k>1)
    {
        if (arr[i]%k==0)
        {
            f=1;
            break;
        }
        k--;
    }
    if (f==0)
    {
        cout<<arr[i]<<" ";
    }
    }
}

*/

// 3.
/*
#include <iostream>
using namespace std;

int main ()
{
    int arr[]={1,2,4,5,6};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<s; i++)
    {
     if (arr[i+1]-arr[i]>1)
     {
         cout<<"missing number=: "<<arr[i]+1;
         break;
     }
    }
}
*/

// 5.

/*
#include <iostream>
using namespace std;

int main ()
{
    int arr[]={2,81,64,8,121};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<s; i++)
    {
     int n=arr[i];
     for (int j=1; j<n/2; j++)
     {
         if (j*j==n)
         {
             cout<<n<<"\t";
         }
     }
    }
}
*/


// 6.

/*
#include <iostream>
using namespace std;

int main ()
{
    int arr[]={1,2,4,5,6};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    int tmp [s];
    for (int i=0; i<s; i++)
    {

    }
}
*/




#include<iostream>
using namespace std;
class A ()
{

};
int main()
{

}


void fun ()
{

}
int main ()
{

}





