#include <iostream>
using namespace std;
int main(){
    //Design a calculator using switch statement.
    double a,b;
    char opr;
    cout<<"Enter your first number: ";
    cin>>a;
    cout<<"Enter your second number: ";
    cin>>b;
    cout<<"Enter your operator(+,-,/,*): ";
    cin>>opr;
    switch(opr){
        case '+': cout<<"Addition of both the numbers is: "<<a+b;break;
        case '-': cout<<"Difference of both the numbers is: "<<a-b;break;
        case '*': cout<<"Product of both the number is: "<<a*b;break;
        case '/': cout<<"Division of both the number is: "<<a/b;break;
    }
}