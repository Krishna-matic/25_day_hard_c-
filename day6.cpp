#include <iostream>
using namespace std;
int main(){
    // int n,pow;
    // int ans=1;
    // cout<<"Enter your number: ";
    // cin>>n;
    // cout<<"Enter it's Power: ";
    // cin>>pow;
    // for(int i=1;i<=pow;i++){
    //     ans = ans*n;
    // }
    // cout<<"The "<<pow<<" power of number "<<n<<" is "<<ans<<".";
    //find the HCF and LCM of two numbers.
    // int a,b;
    // cout<<"Enter your first number: ";
    // cin>>a;
    // cout<<"Enter your second number: ";
    // cin>>b;
    // int x=a,y=b;
    // while(b !=0){//Euclid formula to find HCF
    //     int rem = a%b;
    //     a=b;
    //     b=rem;
    // }
    // cout<<"HCF of both the number is: "<<a<<endl;
    // cout<<"LCM of both the number is: "<<(x*y)/a;
    //check if the year is leap or not
    int year;
    cout<<"Enter your year: ";
    cin>>year;
    if(year%4==0){
        cout<<year<<" is a leap year.";
    }else{
        cout<<year<<" is not a leap year.";
    }
}