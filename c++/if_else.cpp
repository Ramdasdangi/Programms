#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number ";
    cin>>a;
    if (a<0)
    {
        cout<<"you enter nagetive number";
    }
    else if (a==0){
        cout<<"you enter zero";
    }
   
    else if (a>0) {
        cout<<"you enter positive number";
    }
    else {
        cout<<"you enter special symbol";
    }
}
