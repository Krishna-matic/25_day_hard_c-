// #include <iostream>
// using namespace std;
// int main(){
//     To check whether the number is odd or even.
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     if(n%2==0){
//         cout<<n<<" is even.";
//     }else{
//         cout<<n<<" is odd.";
//     }
//     Calcultor type of thing.
//     int a,b;
//     char opr;
//     cout<<"Enter your first number: ";
//     cin>>a;
//     cout<<"Enter your second number: ";
//     cin>>b;
//     cout<<"Enter the operator: ";
//     cin>>opr;
//     if(opr =='+'){
//         int sum = a+b;
//         cout<<"Sum of both the numbers is: "<<sum;
//     }else if(opr == '-'){
//         int difference = a-b;
//         cout<<"Difference of both the numbers is: "<<difference;
//     }else if(opr == '/'){
//         int division = a/b;
//         cout<<"Division of both the numbers is: "<<division;
//     }else if(opr == '*'){
//         int product = a*b;
//         cout<<"Product of both the numbers is: "<<product;
//     }
//     To find out which number is greatest.
//     int num1,num2;
//     cout<<"Enter your first number: ";
//     cin>>num1;
//     cout<<"Enter your second number: ";
//     cin>>num2;
//     if(num1>num2){
//         cout<<num1<<" is the greatest number.";
//     }else{
//         cout<<num2<<" is the greatest number.";
//     }
//     To check whether the string is palindrome or not.
//     string word;
//     cout<<"Enter your word: ";
//     cin>>word;
//     int start = 0;
//     int end = word.length()-1;
//     bool is_Palindrome = true;
//     while(start<end){
//         if(word[start]!=word[end]){
//             is_Palindrome=false;
//             break;
//         }
//         start++;
//         end--;
//     }
//     if(is_Palindrome){
//         cout<<word<<" is Palindrome.";
//     }else{
//         cout<<word<<" is not Palidrome.";
//     }
// }