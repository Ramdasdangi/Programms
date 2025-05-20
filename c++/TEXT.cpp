#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num , original , remainder , result=0 , n=0;
    cout<<"which number :  ";
    cin>>num;
     original=num;

     int temp=num;
     while (temp!=0){
        temp/=10;
        ++n;
     }

     temp=num;
     while(temp!=0){
        remainder=temp%10;
        result +=pow(remainder, n);
        temp /= 10;
     }
     if (result == original){
        cout<<original<<"is an armstrong num \n";
     }
     else {
        cout<<original<<"is not armstrong num \n";
     }
     return 0;
}




// int main(){
//     int num , reverse=0 , remainder;
//     cout<<"enter a number : ";
//     cin>>num;
//     cout<<endl;

//     while (num!=0)
//     {
//         remainder = num%10;
//         reverse=reverse*10+remainder;
//         num=num/10;
//     }
//     cout<<"reversed num : "<<reverse<<endl;
//     return 0 ;
// }



// int main(){
//     int n ;
//     cout<<"enter which table you want: \n";
//     cin>>n;
//     cout<<"table of "<<n<<endl;
//     for(int i=1; i<=10; i++){
//         cout<<n*i<<endl;
//     }
//     return 0;
// }


// int main() {
//     int n ;
//     cout<<"enter number :";
//     cin>>n;
//     int fact=1;
//     for (int i=n; i>0; i--){
//         fact=i*fact;

//     }
//     cout<<fact;

// }
