
 // Q.1. => W.A.P to print Even no. betveen 10 to 20


 /*
#include <iostream>
using namespace std;

int main(){

    for(int i=10;i<=20; ++i) {
        if(i%2 == 0) {
            cout<< i << " ";
        }
    }
    cout<<endl;

    return 0;
}
*/




// Q.2. =>  W.A.P to count the no. of digit

/*
#include <iostream>
using namespace std;

int main() {
    int number;

    cout <<"Enter an integer:";
    cin>>number;

    int digitCount = countDigits(number);
    cout<<"The number of digits"<<number<<"is:"<<digitCount<<endl;

    return 0;
}


*/




// Q.3. =>   W.A.P to check the given character is vowel or consonant






/*
#include <iostream>
using namespace std;


int main() {
    char ch;

    cout<<"Enter a single character:";
    cin>>ch;

    if (isalpha(ch)) {
        if (isVowel(ch)) {
            cout<<ch<<"is a vowel."<<endl;
        }

  else {
            cout<<ch<<"is a consonant."<<endl;
        }
    }

   else {
        cout<<ch<<" is not a letter."<<endl;
    }

    return 0;
}

*/




 // Q.4. =>  W.A.P to print the factorial


/*
 #include <iostream>
 using namespace std;


int main() {
    int number;

    cout<<"Enter Number: ";
    cin>>number;

    if (number <0) {
        cout<<"Factorial numbers."<<endl;
    }
     else {
        cout<<"Factorial of"<< number<<"is"<<factorial(number)<<endl;
    }

    return 0;
}

*/





// Q.5. =>  W.A.P to check the given year is leao or not



#include <iostream>
using namespace std;


int main() {
    int year;

    cout<<"Enter a year:";
    cin>>year;

    if (year%4==0) {
        cout<<year<<"leap year"<<endl;
    } else {
        cout<<year<<"not a leap year"<<endl;
    }

    return 0;
}





















