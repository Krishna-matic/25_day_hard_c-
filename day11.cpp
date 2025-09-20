#include <iostream>
using namespace std;
// void grades(int a){
//     if(a>90&&a<=100){
//         cout<<"Your grades are: AA";
//     }else if(a>80&&a<=90){
//         cout<<"Your grades are: AB";
//     }else if(a>70&&a<=80){
//         cout<<"Your grades are: BB";
//     }else if(a>60&&a<=70){
//         cout<<"Your grades are: BC";
//     }else if(a>50&&a<=60){
//         cout<<"Your grades are: CD";
//     }else if(a>40&&a<=50){
//         cout<<"Your grades are: DD";
//     }else if(a<=40){
//         cout<<"You failed.";
//     }
// }
// int main(){
//     int marks;
//     cout<<"Enter your marks: ";
//     cin>>marks;
//     grades(marks);
//     return 0;
// }
// void factorial(int a){
//     int fact=1;
//     if(a==0||a==1){
//         cout<<"Factorial of the number is: "<<fact<<endl;
//         return;
//     }else{
//         for(int i=1;i<=a;i++){
//             fact=fact*i;
//         }
//     }
//     cout<<"Factorial of the number is: "<<fact<<endl;
// }
// int main(){
//     int x;
//     cout<<"Enter the number: ";
//     cin>>x;
//     factorial(x);
//     return 0;
// }
// void prime(int a,int b){
//     cout<<"Prime number between those numbers are: ";
//     for(int i=a;i<b;i++){
//         bool is_prime=true;
//         for(int k=2;k<i/2;k++){
//             if(i%k==0){
//                 is_prime=false;
//                 break;
//             }
//         }
//         if(is_prime){
//             cout<<i<<" ";
//         }
//     }
// }
// int main(){
//     int x,y;
//     cout<<"Enter the two numbers: ";
//     cin>>x>>y;
//     prime(x,y);
// }
void sum(int n){
    int sum=0;
    cout<<"The sum of natural numbers till "<<n<<" is: ";
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    cout<<sum;
}
int main(){
    int x;
    cout<<"Enter your number: ";
    cin>>x;
    sum(x);
}