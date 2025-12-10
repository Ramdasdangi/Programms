#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int bob=(y-x)/2;
	    int alice=y-bob;
	    cout<<alice<<" "<<bob<<endl;
	}

}
