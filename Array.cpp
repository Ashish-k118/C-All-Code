/*

here are 2 type of array:
    1. numeric array :
        a) one dimension
        b) two dimension
        c) multi dimension

    2. associative array: get the data by key & value (pair)

    one dimension array :


*/


#include<iostream>
using namespace std;

int main()
{
   //  datatype var [size];
  //   static array:  // memory west hoti hai
 //    dynamic array:  // memory west nhi hoti hai
/*
 bool cybrom[5];
 cout<<sizeof(cybrom);
*/
/*
int array1[5]={12,3,4,5,6};
// cout<<array[5];
int array[5];
cout<<array[0]<<"\n"<<array[1];
*/


/*
int arr[]={890,35,46,78};
cout<<*arr<<"\n";
cout<<*(arr+3)<<"\n";
cout<<arr[2]<<"\n";
cout<<2[arr]<<"\n";
cout<<-2[arr]<<"\n";
cout<<arr[-2];   /// garbage deawback of array;
*/

/*
int a[]={1,2,3,4};
cout<<a [2];
*/


// datatype arrayname [size] singal dinamension array








// even numberr

/*
int cyb[5];
cout<<"Enter 5 value : \n";
for(int i=0; i<=4; i++)
{
    cin>>cyb[i];
}

cout<<"data stored in array : ";
for (int  i=0; i<=4; i++)
{
    if  (cyb[i]%2==0)
    {
        cout<<cyb[i]<<" ";
    }

}
*/

//  odd number print


/*
int cyb[5];
cout<<"Enter 5 value : \n";
for(int i=0; i<=4; i++)
{
    cin>>cyb[i];
}
for (int i=4; i>=0; i--)
{
    if(cyb[i]%2!=0)
    {
    cout<<cyb[i]<<" ";
    }
}
*/



//  evrsh order
/*
int cyb[5];
cout<<"Enter 5 value : \n";
for(int i=0; i<=4; i++)
{
    cin>>cyb[i];
}
for (int i=5; i>=0; i--)
{
    cout<<cyb[i]<<" ";
}
*/


// having even number

int cyb[5];
cout<<"Enter 5 value : \n";
for(int i=0; i<=4; i++)
{
    cin>>cyb[i];
}
for (int i=5; i>=0; i--)
{
    if(i%2==0)
    {
    cout<<cyb[i]<<" ";
    }
}








}


































