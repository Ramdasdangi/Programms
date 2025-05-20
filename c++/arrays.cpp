#include<iostream>
using namespace std;
int main() {
    int ar[]={3,5,104,88,1};
    for (int i=0; i<5; i++){
        cout<<ar[i]<<endl;
    }
    cout<<"after change"<<endl;
    ar[1]=100; ar[2]=0;
    int i=0;
    do {
        cout<<ar[i]<<endl;
        i++;}while(i<5);
}