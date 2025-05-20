//          * largest or smallest  number *

#include<iostream>
using namespace std;

int main(){
    int ages []={25,22,11,23,5,45,12,311,51,32,};

    int len = sizeof(ages)/sizeof(ages[0]);
    int low = ages[0];
    int big = ages[0];
    for (int i=0 ; i<len; i++){
        if (low>ages[i]){
            low=ages[i];
            }
    
        else if(big<ages[i]){
            big=ages[i];    
        }
    }
    
    cout<<"smallest age is  : "<<low<<endl;
    cout <<"largest age is  : "<<big;
}