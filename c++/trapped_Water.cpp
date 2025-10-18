#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int n=12;
    // cout<<"Enter how much column occurs : ";
    // cin>>n;
    int height[]={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    int left_max[n];
    int right_max[n];

    left_max[0]=height[0];
    for(int i=1; i<n; i++){
        left_max[i]= max(height[i],left_max [i-1]);
    }

    right_max[n-1]=height[n-1];
    for(int i=n-2; i>=0; i--){
        right_max[i]=max(right_max[i+1], height[i]);
    }

    int trappedWater=0;
    for (int i = 0; i < n; i++)
    {
        int water = min(left_max[i], right_max[i]);
        trappedWater+=water-height[i];
    }

    cout<<"Total water stored is "<<trappedWater<<" units.";

    return 0;
    
}