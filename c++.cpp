#include <iostream>
using namespace std;

int main(){

    cout<<"press 1 for january"<<"\n";
    cout<<"press 2 for feburary"<<"\n";
    cout<<"press 3 for march"<<"\n";
    cout<<"press 4 for april"<<"\n";
    cout<<"press 5 for may"<<"\n";
    cout<<"press 6 for june"<<"\n";
    cout<<"press 7 for july"<<"\n";
    cout<<"press 8 for august"<<"\n";
    cout<<"press 9 for september"<<"\n";
    cout<<"press 10 for october"<<"\n";
    cout<<"press 11 for november"<<"\n";
    cout<<"press 12 for december"<<"\n";

    cout<<"press 0 to exit"<<"\n";

    int month = 0;
    cin >> month;

    switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<<"31 days" <<"\n";
        break;
    case 2:
        cout<<"28 or 29 based on leap year" <<"\n";
        break;
    case 4:
        cout<<"30 days"<<"\n";
        break;
    case 6:
        cout<<"30 days" <<"\n";
        break;
    case 9:
        cout<<"30 days" <<"\n";
        break;
    case 11:
        cout<<"30 days" <<"\n";
        break;

    default:
        cout<<"invalid input" <<"\n";


    }
    cout<<"thank you"<<"\n";


}






