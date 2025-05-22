#include <iostream>
using namespace std;

void reverseArr(int *arr , int n){
    int *left = arr;
    int *right = arr+n-1;

    while (left<right){
        swap(*left , *right);
        left++;
        right--;
    }
}

int main(){
    /*int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\n enter array : ";
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    reverseArr(arr,n);
    */

    /*int n=5;
    int arr[n]={1,2,3,4,5};
    reverseArr(arr,n);*/

    int arr[]= {1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[1]);
    reverseArr(arr,n);

    for(int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;


}