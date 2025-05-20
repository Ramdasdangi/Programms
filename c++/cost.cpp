#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        
        int total_cost = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= x) {
                total_cost += b[i];
            }
        }
        cout << total_cost << endl;
       /* // your code goes here
        int itm[5];
        for (int k=0 ; k<n; k++){
            if (x<=a[k]){
                itm[k]=k;
                cout<<"ram11\n";
            }
        }
        //cout<<itm[0]<<" "<<itm[0]<<" "<<endl;
        // for(int m=0 ; m<n ; m++){
        //     cout<<itm[m]<<" ";
        // }
        
        int c=0;
        for (int l=0 ; l< sizeof(itm) ; l++){
           // c+=b[itm[l]];
            int d=itm[1];
            c=c+b[d];
            //cout<<"ram";

        }
        cout<<c<<endl;*/
    }

}
