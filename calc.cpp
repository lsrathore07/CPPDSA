#include <iostream>
using namespace std;

int main(){
    int a,b;
    char c;

    cout << "enter first number : " << endl;
    cin >> a ;
    cout << "enter operand : " <<endl;
    cin >> c ;
    cout << "enter second number : " << endl;
    cin >> b;

    if(c == '*'){
        cout << "multiple = " << (a*b) << endl;
    }
    else if(c == '+'){
        cout << "the addition = " << (a+b) << endl;
    }
    else if(c == '-'){
        cout << "Subtraction = " << (a-b) << endl;
    }
    else if(c == '/'){
        cout << "division = " << (a/b) << endl;
    }
    return 0;
}