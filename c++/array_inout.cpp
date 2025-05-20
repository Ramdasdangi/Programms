#include <bits/stdc++.h>
using namespace std;

int search(int arr[] ,int n){
    int g=arr[0];
    for (int i =0; i<n; i++){
        if (arr[i]>g){
            g=arr[i];
            return g;
            
        }
    }
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i=0 ; i<t ;i++){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i <n; i++) {
            cin>>arr[i];
            
        }
        
        int r=search(arr , n);
        cout << r << endl;
    }
}
