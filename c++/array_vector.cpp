/* An array with 3 elements
string cars[3] = {"Volvo", "BMW", "Ford"};

Trying to add another element (a fourth element) to the cars array will result in an error
cars[3] = "Tesla";  */

//  * For operations that require adding and removing array elements, C++ provides vectors, which are resizable arrays. *

# include<iostream>
# include<string>
# include <vector>
using namespace std;

int main (){
    vector<string> cars = {"volvo" , "BMW" , "Ford"};
    cout<<"cars name which is already present :  \n";

    // for(int i =0 ; i<sizeof(cars); i++){
    //     cout<<cars[i]<<"\n";}

    for (string car :cars){
        cout<<car<<endl;
    }

    cout<<"Can you add more car !!   type 'yes' ";
    string y;
    cin>>y;

// Adding another element to the vector
    if (y=="yes"){
    cars.push_back("Tesla");
    }


    cout<<"updated cars name : \n ";
    for (string car: cars){
        cout<<car<<endl;
    }
}