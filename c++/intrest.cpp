#include<iostream>
using namespace std ;

int intrest(int a , int b , int c){
int t= (a*b*c)/100 ;
return t;}

int main(){
int p ;
cout<<"enter principal amount \n ";
cin>>p;
int t ;
cout<<"enter time in month  \n  ";
cin>>t;
int r;
cout<<"enter rate  \n  ";
cin>>r;
int i=intrest(p,t,r);
cout<<"total interest is ::   " <<i<<endl;
cout<<"total amount 8s  ::  " <<i+p<<endl;
}