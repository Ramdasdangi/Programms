#include<iostream>
using namespace std;

// function prototype 
//this is use when function is below to main program 

// type   function-name(argument)
int sum(int a , int b);   // accepted 
//int sum(int ,int);     //accepted 
//int sum(int a , b);    //not accepted 

void fun(void); 
    
int main(){
    int num1,num2;
    cout<<"enter first number :"<<endl;
    cin>>num1;
    cout<<"enter second number :"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters 
    cout<<"sum ="<<sum(num1,num2);
    
    fun();
}    

int sum(int a,int b){
    // a and b are formal parameters 
    int c=a+b;
    return c ;
    }

void fun() {
    cout<<"\ngood morning";}  
    