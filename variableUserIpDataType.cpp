#include<iostream>
#include<string>
using namespace std;
int main(){

    /* C++ Variables,Multiple Variables,Identifiers,Constants,Real-Life Examples,User Input,Data Types-Numeric,Boolean,Character,String   Data Types
    */

    // int myNum =22;
    int myNum;
    myNum=32;
    cout<<myNum<<endl;

    myNum=43;
    cout<<myNum<<endl;


    int myAge = 35;
    cout<<"my age is "<<myAge<<" years old"<<endl;
    // cout<<`my age is${myAge}years old`<<endl; error

    int x = 5;
    int y =19;
    int sum=x+y;
    cout<<"sum = "<<sum<<endl;

    int a=5,b=11,c=34;
    int add=a+b+c;
    cout<<"add = "<<add<<endl;

    // int p=q=r=76; err
    int p,q,r;
    p=q=r=98;
    int add2 = p+q+r;
    cout<<"sum = "<<add2<<endl;

   
   int hourPerDay = 24;
   int h=24;
   cout<<"one day = "<<hourPerDay<<" hour"<<"\n";
   cout<<h<<"\n";

   const int myVal=34;
   // myVal=45; err
   cout<<myVal<<"\n";

   const int secondPerhr = 60;
   const float PI = 3.1416;
   cout<<secondPerhr<<"\n";
   cout<<PI<<"\n";

//    const int perDayhr;
//    perDayhr=24; err
//    cout<<perDayhr<<"\n";

int stdId = 101;
int stdAge = 23;
float stdFee = 102.45;
char stdGrade = 'A';

cout<<"student ID : "<<stdId<<"\n";
cout<<"student Age : "<<stdAge<<"\n";
cout<<"student Fee : "<<stdFee<<"\n";
cout<<"student Grade : "<<stdGrade<<"\n";

int length,width;
cout<<"enter the length:\n";
cin>>length;
cout<<"enter the width:\n";
cin>>width;
int area=length*width;
cout<<"area of rectangle = "<<area<<"\n";

int myIntNum =99;
float myFloatNum = 67.99;
double myDoubleNum = 89.98876;
char myLetter = 'A';
bool myBoolean = true;
string myString = "how r u?";

cout<<myIntNum<<"\n";
cout<<myFloatNum<<"\n";
cout<<myDoubleNum<<"\n";
// cout<<myIntNum<<"\n";
cout<<myLetter<<"\n";
cout<<myBoolean<<"\n";
cout<<myString<<"\n";

// float f1 = 1.2e6;
float f1 = 1.2e3;
// double d1 = 1.2e17;
double d1 = 1.2e7;
cout<<f1<<"\n";
cout<<d1<<"\n";

bool isCodingFun = true;
bool isCodeCopyGood = false;
cout<<isCodingFun<<"\n";
cout<<isCodeCopyGood<<"\n";

char a1 = 71,b1=99,c1=5;
cout<<a1<<"\n";
cout<<b1<<"\n";
cout<<c1<<"\n";

int items;
cout<<"enter the number of items\n";
cin>>items;

float costPerItems;
cout<<"enter the cost of per items\n";
cin>>costPerItems;

double totalCost = items*costPerItems;

char currency = '$';

cout<<"number of items "<<items<<"\n";
cout<<"cost per items "<<costPerItems<<currency<<"\n";
cout<<"total cost "<<totalCost<<currency<<"\n";



return 0;
}

/*
https://www.w3schools.com/cpp/cpp_user_input.asp

1. All C++ variables must be identified with unique names.These unique names are called identifiers.
2.Names cannot contain whitespaces or special characters like !, #, %, etc.
3.Reserved words (like C++ keywords, such as int) cannot be used as names

4.When you do not want others (or yourself) to change existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only).
5.When you declare a constant variable, it must be assigned with a value

6.
Data Type	     Size	    Description

boolean	        1 byte	    Stores true or false values
char	        1 byte	    Stores a single character/letter/number, or ASCII values
int	            2 or        Stores whole numbers, without decimals
                4 bytes	

float	        4 bytes	    Stores fractional numbers, containing one or more decimals.
                            Sufficient for storing 6-7 decimal digits          
double	        8 bytes	    Stores fractional numbers, containing one or more decimals.
                            Sufficient for storing 15 decimal digits.


7.float vs. double

The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.

8.Boolean values are mostly used for conditional testing
9.The char data type is used to store a single character. The character must be surrounded by single quotes, like 'A' or 'c':

10.To use strings, you must include an additional header file in the source code, the <string> library:

*/

/**
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/SohelShahid117/Day3-w3school-cpp-operator-string-math-boolean.git
git push -u origin main
 */