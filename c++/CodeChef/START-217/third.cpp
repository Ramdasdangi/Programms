#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    if(n<=m)
        cout<<0;
    else
        cout<<n-m;
}

/*
# cook your dish here
n,m=map(int,input().split())

if(n<=m):
    print(0)
else:
    print(n-m)
*/