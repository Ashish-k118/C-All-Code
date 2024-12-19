// friend function se kisi bhi privet number ko hum accses kar skate h
/*
#include<iostream>
using namespace std;

class student2;
class student1
{
    int marks=90;
    friend void cmp (student1, student2);
};
class student2
{
    int marks=40;
    friend void cmp (student1, student2);
};
void cmp (student1 s1, student2 s2)
{
    if (s1.marks>s2.marks)
    {
        cout<<"student1 has highest marks="<<s1.marks;
    }
    else
    {
        cout<<"student2 has highest marks="<<s2.marks;
    }
}
int main ()
{
student1 obj1;
student2 obj2;
cmp (obj1,obj2);
}
*/



//         Friend Class function se ham kisi bhi obj ko acsse kar skte hai



#include<iostream>
using namespace std ;

class sbi
{
    int amount=90000;
    void balance ()
    {
        cout<<"balance="<<amount<<"\n";
    }
    friend class  axis;
};
class axis
{
    public:void show (sbi sk)
    {
        cout<<"amount of sbi="<<sk.amount<<"\n";
        sk.balance();
    }
};
int main ()
{
    sbi s;
    axis a;
    a.show(s);
}












