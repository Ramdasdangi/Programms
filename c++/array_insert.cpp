#include<iostream>
using namespace std;

/*
int main()
{   
    cout<<"enter element ";
    int n=6;
    int arr[n];
    int k=2;
   int j=n-1;
   for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    while( j<=k){
        arr[j+1]=arr[j];
        j=j-1;}
        arr[k]=10;
        
      
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
    return 0;
    
}*/

int main()
{   
    int n=6;
    int arr[n];
    
   cout<<"enter element ";
   for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    int k;
    cout<<"which index you want delete";
    cin>>k;
    for( int j=k ; j<n-1; j++){
        arr[j]=arr[j+1];
        }
       n=n-1; 
        
      
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
    return 0;
 }

/*
[2,4,5,5,4]
*/