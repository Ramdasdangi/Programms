#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int r,b,g;
        cin>>r>>b>>g;
        
        int sum=0;
        int min=0;
        int left=0;
        if(r<b && r<g){
            min=r;
            sum+=r;
            left+=b-r;
            left+=g-r;
        }
        else if(b<r && b<g){
            min=b;
            sum+=b;
            left+=r-b;
            left+=g-b;
        }
        else if(g<r && g<<b){
            min=g;
            sum+=g;
            left+=b-g;
            left+=r-g;
        }
        else if(r==b && r==g){
            min=r;
            sum+=r;
            left+=b-r;
            left+=g-r;
        }
        else if(r==0){
        
        }
        
        int total=sum*10+left*3;
        cout<<total<<endl;
        
        
    }
}
/*
# cook your dish here
t = int(input())
for _ in range(t):
    res = 0
    arr = list(map(int, input().split()))
    # print(arr)
    arr.sort()
    # print(arr)
    res
    for i in range(arr[0]):
        res = res+10
    res = res+(arr[1]-arr[0]+arr[2]-arr[0])*3
    print(res)
    */