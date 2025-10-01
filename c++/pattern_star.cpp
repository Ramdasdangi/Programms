#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"number of line : ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0 ; j<=i; j++){
            cout<<"* ";

        }
        
cout<<endl;
        }
        

        cout<<"\n\n";


        for(int i=1; i<=5; i++){

            for(int j=5 ; j>=i; j--){
            cout<<"* ";

        }
        cout<<endl;
    }
}




/*

*
* *
* * * 
* * * *




* * * * *
* * * * 
* * * 
* *
* 

*/