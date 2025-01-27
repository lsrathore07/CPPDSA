#include <iostream> 
using namespace std;

int main(){
    int age = 23;
    char grade = 'a';
    float pi=3.14f;
    bool isSafe = false;

    // cout << "Lokendra Singh Rathore" << endl;
    // cout << "Lokendra \n" << "Singh\n" << "Rathore" << endl;
    // cout << age << endl;
    // cout << isSafe << endl;
    // cout << pi << endl;

    //conversion implicit 'A' to ascii val
    char grade1 = 'A';
    int value = grade1;
    cout << value << endl;

    //conversion explici t casting bid to small datatype
    double price = 102.23;
    int newPrice = (int)price;
    cout << newPrice << endl;

    //cin input in c++
    // int yourAge;
    // cout << "Enter your age : " ;
    // cin >> yourAge;

    // cout << "Your Age is : " << yourAge << endl;


// Arithmatic operators example in c++
    // int a = 10; 
    // float b = 7;

    // int sum = a+b;
    // int multiply = a*b;
    // int subtract = a-b;
    // // float divide = a/b ;

    // cout << "Sum is : " << sum << endl;
    // cout << "Multiply is : " << multiply << endl;
    // cout << "Sub is : " << subtract << endl;
    // // cout << "Div is : " << divide << endl;
    // cout << "Div is : " << (float)a/b << endl;

// Relational Operator gives true and false some of operator are 
//  < less then , > greater then , equal to ==, not equal to != etc

  cout << (10 > 5) << endl;   // true
  cout << (10 < 5) << endl;   // false
  cout << (10 >= 5) << endl;   // true
  cout << (10 <= 10) << endl;   // true
  cout << (10 == 5) << endl;   // true
  cout << (10 != 5) << endl;   // true




    return 0;
}