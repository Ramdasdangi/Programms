/*
You are given an integer array nums. You may rearrange the elements in any order.

The alternating score of an array arr is defined as:

score = arr[0]2 - arr[1]2 + arr[2]2 - arr[3]2 + ...
Return an integer denoting the maximum possible alternating score of nums after rearranging its element©leetcode
*/

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        // int s=sizeof(nums)/sizeof(nums[0]);
        const int s=nums.size();
        vector<int> arr(s);
        for(int i=0; i<s; i++){
            int t=(nums[i])*(nums[i]);
            arr[i]=t;
        }
        sort(arr.begin(), arr.end());
        int n=s/2;
        
            
      /*  else
            n=(size+1)/2;*/

        long p=0;
        long ne=0;
        for(int i=0; i<n; i++){
            p+=arr[i];
        }
        for(int j=n; j<s; j++)
            ne+=arr[j];
        
        return (ne-p);
        
        
    }
};

int main(){
    Solution sol;
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    long long ans=sol.maxAlternatingSum(nums);

    cout<<"Result "<<ans;

    return 0;
}