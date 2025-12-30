#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int s=0;
	    for(int i=0; i<n ; i++){
	        s+=arr[i];
	    }
	  
	    int x=floor((double)s / n);
	    if(x<0){
	        x*=(-1);
	        cout<<x<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}

}
