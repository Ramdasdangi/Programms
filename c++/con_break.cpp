#include<iostream>
using namespace std;
int main() {
    for (int i=0; i<15 ; i++)
        if (i<5 ) {
            cout<<i<<endl;
            
        }
        else if(i>4 && i<6) {
            continue;
        }
        else if(i>6 && i<9) {
            cout<<i<<endl;
        }
        else if(i==9) {
            break;
        }
}