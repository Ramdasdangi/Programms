#include<iostream>
#include<string>
using namespace std;

int main (){
cout<<" All operations are combine ::"<<endl;
string yes="yes";
int total ;
int b;
cout<<"enter first number : "<<endl;
cin>>b;
total=b;
while (yes=="yes"){
    
    
    int x ;
    cout<<endl<<"what you do :: "<<endl <<"for addition (enter '1') - "<<endl;
    cout<<"for subtraction (enter '2') - "<<endl;
    cout<<"for multiplication (enter '3') - "<<endl;
    cout<<"for division (enter '4') - "<<endl;
    cin>>x;
    
    int c;
    cout<<"\n\nenter another number : "<<endl;
    cin>>c;
    
    if (x==1)
    {   total=total+c;
        cout<<"Total after adding "<<c<<" is -> "<< total<<endl;
    }
    else if(x==2)
    {   total=total-c;
        cout<<"Total after subtract "<<c<<" is -> " << total<<endl;}    
    else if(x==3)
    {   total=total*c;
        cout<<"Total after multiply by "<<c<<" is -> " << total<<endl;}
    else if(x==4)
    {   total=total/c;
        cout <<"Total after divide by "<<c<<" is -> " << total<<endl;}    
    else{
        cout<<"chosen right operator ✓ . Thanks "<<endl<<endl;}
    
    
    cout<<endl<<"do you want more calculation then enter ( yes )  _ "<<endl;
    cin>>yes;
    }}