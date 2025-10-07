#include<iostream>
using namespace std;


//          Fibonacci series programm by recursion

int main(){
    int n;
    void fibo(int ,int , int );
    cout<<"enter number : ";
    cin>>n;
    int a=0 , b=1; 
    if(n>=1)
        cout<<a<< " ";
    if(n==2)
        cout<<b<<" ";
    if(n>2)
        fibo(n, a, b);

}

void fibo(int n, int a, int b){
    if(n==1)
        return ;
    else{
        int t=a+b;
        cout<<t<<" ";
        a=b;
        b=t;
        fibo(n-=1, a,b);
        
    }

}



//        fibonacci series programm by Looping 

/* int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    int a=0, b=1;
    for(int i=1; i<=n; i++){
        if (i==1)
            cout<<0<<" ";
        else if(i==2)
            cout<<1<<" ";
        else{
            cout<<a+b<<" ";
            int t=a;
            a=b;
            b=t+a;
        }
        
    }
} */

// 0,1,1,2,3,5,8,13,21,34,55


