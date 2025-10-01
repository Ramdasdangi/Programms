#include<iostream>
using namespace std;

int main(){
    int n=5;
    char c='Z';
    
    for (int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout<<c<<" ";
            c--;
            
        }
        cout<<endl;
    }
    c+=1;
    cout<<"\n";
    for (int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<c<<" ";
            c++;
            
        }
        cout<<endl;
    }


}