#include <iostream>
using namespace std;
// int main(){
//     int size;
//     cout<<"Enter the number: ";
//     cin>>size;
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int size;
//     cout<<"Enter the number: ";
//     cin>>size;
//     for(int i=1;i<=size;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int size;
//     cout<<"Enter the number: ";
//     cin>>size;
//     for(int i=1;i<=size;i++){
//         for(int j=size;j>=i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int size;
//     cout<<"Enter the number: ";
//     cin>>size;
//     for(int i=1;i<=size;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     for(int i=0;i<=5;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<5;i++){
//         for(int j=4;j>i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     //spaces
//     for(int i=0;i<=5;i++){
//         for(int j=4;j>=i;j--){
//             cout<<" ";
//         }
//         for(int w=1;w<=i;w++){
//                 cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<i; j++){ 
            cout<<" ";
        }
        for(int k=5; k>=i; k--){ 
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

