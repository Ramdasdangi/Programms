#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        int oc=0;
        int c=0;
        for (int j=0; j<n;j++){
            oc+=a[j];
            int on=0;
            if (a[j]>y){
                on=a[j]-y;
                c+=on;
            }
        
        }
        //int t= oc+c;
        cout<<"oc"<<oc;
        cout<<"c"<<c;
        
        if((c+x)<oc){
            cout<<"COUPON\n";
        }
        else{
            cout<<"NO COUPON\n";
        }
    }

}
