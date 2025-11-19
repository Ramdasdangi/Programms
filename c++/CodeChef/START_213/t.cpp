#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int s=0;
	    int h=0;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	  
	   for(int i=0; i<n; i++){
	      
	       
	       if(s+arr[i] == 2*s){
	           int o=arr[i];
	           arr[i]=arr[i-1];
	           arr[i-1]=o;
	           
	       }
	       else if(s+arr[i] != 2*s){
	           h+=1;
	           
	       }
	       s=s+arr[i];
	   }
	   for(int i=0; i<n; i++){
	       cout<<arr[i]<<" ";
	   }
	   cout<<endl<<h<<endl;
	}
}
