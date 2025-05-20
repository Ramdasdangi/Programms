#include<iostream>
using namespace std;

int factorial(int n) {
    if(n<=1) {
        return 1;
    }
    return n*factorial(n-1);
}
int fb(int n ){
    if (n<2){
        return 1;}
    return fb(n-2)+fb(n-1);   
}
int main () {
    /*int a;        //for factorial 
    cout<<"which number to calculate factorial\n";
    cin>>a;
    cout<<"factorial of "<<a<<"  is :: "<<factorial(a)<<endl;
    */
    
    //for Fibonacci series 
    int f ;
    cout<<"which  number of number you find from Fibonacci series  "   <<endl;
    cin>>f;
    int c=fb(f);
    cout<<"The term of Fibonacci sequence at position of " <<f<<"  is  "<<c<<endl;
    
}