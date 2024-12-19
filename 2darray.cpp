/*
2D Array

in 2D array we use 2 subscript array where 1st subscript to row and the second the subscript  belong to colomn
mostly database use table as 2D array .
in a 2D array we use two nested loop here first loop is  dedicated for row and
 second  loop is dedicated for column ;
 Its also called matrix in mathematical language.

 DATATYPE ARRAY NAME [ ROW SIZE ] [ COLUMN ]

*/


/*
#include <iostream>
using namespace std;

int main ()
{
   int arr[2][3]={2,3,5,6,7,8};
   int rsize = sizeof (arr);
   cout<<rsize;
  // cout<<arr[0][2];
/*
  for (int i=0; i<2;i++)
  {
      for (int j=0;j<3; j++)
      {
          cout<<arr[i][j]<<"\t";
      }
      cout<<"\n";
  }
  }*/

  /*
  #include<iostream>
  using namespace std;

  int main()
  {
      int arr[2][3]={2,5,1,6,7,8};
      for(int i=0; i<2; i++)
      {
          for (int c=0; c<3; c++)
          {
              cout<<arr[i][c]<<"\t";
          }
          cout<<endl;
      }
  }
*/

/*
#include<iostream>
using namespace std;

  int main()
  {
      int arr[2][3];
      cout<<"Enter 6 Values\n";
      for(int i=0; i<2; i++)
      {
          for (int c=0; c<3; c++)
          {
              cin>>arr[i][c];
          }
     }
     cout<<"\n Stored Data in 2D Arr\n";
     for (int i=0; i<2; i++)
     {
         for (int c=0; c<3; c++)
         {
             cout<<arr [i][c]<<"\t";
         }
         cout<<endl;
     }
  }
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int arr [3][3];
    cout<<"Enter Value\n";
    for (int i=0; i<3; i++)
    {
        for(int c=0; c<3; c++)
        {
            cin>>arr[i][c];
        }
    }

    for (int i=0; i<3; i++)
    {
        for(int c=0; c<3; c++)
        {
            if(arr[i][c]%2==0)
            cout<<arr[i][c]<<" ";
        }
    }
}
*/




// w .a .p sum to the value of 2D array


#include <iostream>
using namespace std;

int main()
{
    int arr [3][3], sum=0;
    cout<<"Enter Value : \n";
    for (int i=0; i<3; i++)
    {
        for(int c=0; c<3; c++)
        {
            cin>>arr[i][c];
        }
    }
    for (int i=0; i<3; i++)
    {
        for(int c=0; c<3; c++)
        {
            sum+=arr[i][c];
        }
    }
    cout<<"Sum Is : " <<sum;
}













