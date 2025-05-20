#include<iostream>
using namespace std;

int main(){
    int s;
    cout<<"Enter size of array : ";
    cin>>s;
    int arr[s];
    for (int i=0; i<s; i++){
        cout<<"enter array element  "<<i+1<<" : ";
        cin>>arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    int a,b,c;
    bool x=false;

    for(int i=0; i<n-2; i++){
       for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                a=arr[i];
                b=arr[j];
                c=arr[k];
                if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){
                    cout<<a<<" "<<b<<" "<<c<<" "<<"True\n";
                    x=true;
                }
                
                
            }
        }
        
    }
    if(x!=true){
        cout<<"No triplet found\n";
    }
    
    return 0;
}