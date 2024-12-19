/*

1. Single , [A->B]
2. Multiple  , [A<-C->B]
3. Multilevel , [A->B->C]
4. Hierarchical (B).(C).(D)-->[A]
5. Hybtid [A]<-[B] ,<-[C]<-[D]


in single inheritanace there are tow class the frist class and second class which inheritanace the proptey
of parents class is called child class and we create the object of child class and with the help or it we can accecs
the data member and member function of both class

class parent class
{
........
}
class child class :public parent class
{
............
}
int main ()



*/

/*
#include <iostream>
using namespace std;
class RBI
{
    public:RBI()
    {
        cout<<"\n RBI memory allocated \n";
    }
    public:void server()
    {
        cout<<"\n RBI \n";
    }
};
class SBI:public RBI
{
    public:SBI()
    {
        cout<<"\n SBI memory allocated \n";
    }
    public:void client ()
    {
        cout<<"\n SBI \n";
    }
};
int main ()
{
    SBI obj2;
    obj2.client();
    obj2.server();
}
*/




/*
#include <iostream>
using namespace std;
class RBI
{
    public:RBI()
    {
        cout<<"\n RBI memory allocated \n";
    }
    ~RBI ()
    {
        cout<<"\n RBI memory deallocated \n";
    }
    public:void server()
    {
        cout<<"\n RBI \n";
    }
};
class SBI:public RBI
{
    public:SBI()
    {
        cout<<"\n SBI memory allocated \n";
    }
    ~SBI ()
    {
        cout<<"\n SBI memory deallocated \n";
    }
    public:void client ()
    {
        cout<<"\n SBI \n";
    }
};
int main ()
{
    SBI obj2;
    obj2.client();
    obj2.server();
}






//  in a multelevl inheritancs  there are more then tow class and
//  each child class inheritancs the property of preves class .





#include <iostream>
using namespace std;
class RBI
{
    public:RBI()
    {
        cout<<"\n RBI memory allocated \n";
    }
    ~RBI ()
    {
        cout<<"\n RBI memory deallocated \n";
    }
    public:void server()
    {
        cout<<"\n RBI \n";
    }
};
class SBI:public RBI
{
    public:SBI()
    {
        cout<<"\n SBI memory allocated \n";
    }
    ~SBI ()
    {
        cout<<"\n SBI memory deallocated \n";
    }
    public:void client ()
    {
        cout<<"\n SBI \n";
    }
};
class customer:public SBI
{
    public:customer ()
    {
        cout<<"\n CUSTOMER MEMORY \n";
    }
    ~customer()
    {
        cout<<"\n CUSTOMER MEMORY \n ";
    }
    void msg ()
    {
        cout<<"\n welcome \n ";
    }
};
int main ()
{
    SBI obj2;
    obj2.client();
    obj2.server();
}
*/



/*

multipuul inheritans we can in hairit more then one class at a time .
daymand problam multipal inheritans me ati h.


#include <iostream>
using namespace std;
class sbi
{
    public:void sbishow()
    {
        cout<<"\n SBI CLASS \n ";
    }
};
class axis
{
    public:void axisshow()
    {
        cout<<"\n AXIS CLASS \n ";
    }
};
class customer:public sbi, public axis
{
    public:void show()
    {
        cout<<"\n customer class \n";
    }
};
int main ()
{
    customer c;
    c.show();
    c.sbishow();
    c.axisshow();
}

*/



// in a multipul inheritens there me we a doymond problum inf booth the inherited classes hevig the same signecher of function.






















//   hrairical inheritans
//  in hiraikal inheritens there is only one print class and multipul children classes and ich class in herits di
//  propti of root class


/*
#include <iostream>
using namespace std ;
class university
{
    public:void show ()
    {
        cout<<"\n Welcome \n ";
    }
};
class c1:public university
{
    public:void msg()
    {
        cout<<"\n College1 \n";
    }
} ;
class c2:public university
{
    public:void msg()
    {
        cout<<"\n College2 \n";
    }
};
int main()
{
    c1 obj1;
    obj1.msg();
    obj1.show();
    c2 obj2;
    obj2.msg();
    obj2.show();
}

*/






#include<iostream>
using namespace std;
class RBI
{
    public: virtual void msg()
    {
        cout<<"\n RBI class \n ";
    }
};
class SBI:public RBI
{
    public:void msg()
    {
        cout<<"\n SBI class \n ";
    }
};
class PNB:public RBI
{
    public:void msg()
    {
        cout<<"\n PNB class \n ";
    }
};
int main ()
{
    RBI *obj;
    RBI r;
    obj = &r;
    obj->msg();
    SBI s;
    PNB p;
    obj=&s;
    obj->msg();
}


/*
// non Super  Class //


supar class allvej haing varchul function and we creat
pointer object and non pointer object off it .
and we allves pass the adresh of non super class
and get member function by using this pointer
*/

piyour virtual function









