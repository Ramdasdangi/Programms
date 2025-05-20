#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {0, 1, 2, 3,11, 12, 13, 14,21,22,23,25};      //[3][4] is lenght
        
    // Accessing 3rd element is 1st row
    cout << arr[0][2] << endl;           // [0][2] is indesing

    // Accessing first element in 2nd row
    cout << arr[1][0]<<endl;

    // accessing 3rd element in third row
    cout << arr[2][2];
    
    return 0;
}
