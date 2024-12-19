
// Match dismatch
/*
clude<iostream>
using namespace std;
#include<string.h>

int main()
{
    char c[10];
    char v[10];

    cout<<"Enter name\n";
    cin>>c;
    cout<<"Enter surname\n";
    cin>>v;

    if (strcmp(c,v)==0)
    {
        cout<<"pwd matched";
    }
    else
    {
        cout<<"pwd not matched";
    }

}
*/


/*
// not match

#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    char c[10];
    char v[10];

    cout<<"Enter name\n";
    cin>>c;
    cout<<"Enter surname\n";
    cin>>v;

    if (stricmp(c,v)==0)
    {
        cout<<"pwd matched";
    }
    else
    {
        cout<<"pwd not matched";
    }
}
*/



/*
// return match

#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    char c[10];
    char v[10];

    cout<<"Enter name\n";
    cin>>c;
    cout<<"Enter surname\n";
    cin>>v;
    cout<<"name = "<<c<<"\n";
    cout<<"reverse ="<<strrev(c)<<"\n";
    cout<<"length ="<<strlen(c)<<"\n";
    cout<<"upper letter ="<<strupr(c)<<"\n";
    cout<<"small letter = "<<strlwr(c)<<"\n";
    cout<<"merge ="<<strcat(c,v)<<"\n";
    strcpy (c,v);
    cout<<"name ="<<c<<"\n";
    cout<<"surname ="<<v<<"\n";
}
*/























