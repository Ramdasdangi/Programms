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
	    int sum=arr[0]+arr[1];
	    for (int i=1; i<n-1; i++){
	        int x=arr[i]+arr[i+1];
	        if(x<sum){
	            sum=x;
	        }
	    }
	    cout<<sum<<endl;
	}

}
