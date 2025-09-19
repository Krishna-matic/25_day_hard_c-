#include <iostream>
using namespace std;
//Define a function that returns the product of two numbers entered by user
// int product(int a, int b){
//     return a*b;
// }
// int main(){
//     int x,y;
//     cout<<"Enter your numbers to multiply: ";
//     cin>>x>>y;
//     cout<<"Product of both the number is: "<<product(x,y);
//     return 0;
// }
//Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
// float circum(float a){
//     return 2*3.14*a;
// }
// float area(float b){
//     return 3.14*b*b;
// }
// int main(){
//     float r;
//     cout<<"Enter the radius of circle: ";
//     cin>>r;
//     cout<<"Area of the circle is: "<<area(r)<<" cm square."<<endl;
//     cout<<"Circumfrence of the circle is: "<<circum(r)<<" cm.";
//     return 0;
// }
//Define a function to find out if a number is prime or not.
// void check(int a){
//      bool is_prime = true;
//      if(a<2){
//         cout<<a<<" is not considered as prime.";
//         return;
//      }else{
//         for(int i=2;i<=a/2;i++){
//             if(a%i==0){
//                 is_prime = false;
//                 break;
//             }
//         }
//      }
//      if(is_prime){
//         cout<<a<<" is a prime number.";
//      }else{
//         cout<<a<<" is not a prime number.";
//      } 
// }
// int main(){
//     int x;
//     cout<<"Enter your number to check: ";
//     cin>>x;
//     check(x);
//     return 0;
// }
//Write a function to find if a number is a palindrome or not. Take number as parameter.
// void palindrome(int a){
//     int copy,reverse=0,result;
//     copy = a ;
//     while(copy!=0){
//         result = copy%10;
//         reverse = reverse*10 + result;
//         copy = copy/10;
//     }
//     if(reverse==a){
//         cout<<a<<" is a palindrome.";
//     }else{
//         cout<<a<<" is not a palindrome.";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     palindrome(n);
// }
