/*

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * *
* * * * * * 
* * * * *
* * * *
* * *
* *
*

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of line ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=0; i<=n; i++){
        for(int j=n; j>=i ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    /*  // this for second loop both are correct
    for(int i = n; i >= 1; i--){
    for(int j = 1; j <= i; j++){
        cout << "* ";
    }
    cout << endl;
}
    */
   

}