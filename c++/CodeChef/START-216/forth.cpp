#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        sort(arr , arr+n);
        
        // for(int i=0; i<n; i++){
        //     cout<<arr[i]<<endl;
        // }
        
        int a1[n];
        for(int i=0; i<n; i++){
            a1[i]=1;
        }
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                int x=arr[j];
                int y =arr[i];
                if(x<=y && ((x&y)==x)){
                    if(a1[j]+1>a1[i]){
                        a1[i]=a1[j]+1;
                    }
                }
                else if(y<x && ((x&y)==y)){
                    if(a1[j]+1>a1[i]){
                        a1[i]=a1[j]+1;
                    }
                }
            }
        }
        int max=a1[0];
        for(int i=1; i<n; i++){
            if(max<a1[i]){
                max=a1[i];
            }
        }
        cout<<max<<endl;
        
    }
    return 0;
}