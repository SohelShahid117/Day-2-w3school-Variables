#include<iostream>
using namespace std;
int main(){

    //C++ Variables,Multiple Variables,Identifiers,Constants,Real-Life Examples
    //C++ User Input
    
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

   


    return 0;
}

/*
https://www.w3schools.com/cpp/cpp_user_input.asp

1. All C++ variables must be identified with unique names.These unique names are called identifiers.
2.Names cannot contain whitespaces or special characters like !, #, %, etc.
3.Reserved words (like C++ keywords, such as int) cannot be used as names

4.When you do not want others (or yourself) to change existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only).
5.When you declare a constant variable, it must be assigned with a value

*/