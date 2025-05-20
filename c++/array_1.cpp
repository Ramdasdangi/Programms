#include<iostream>
#include<string>
using namespace std;




/*
//           *  changing a element in array  -  and out by for loop  *

int main (){
    string name[2]={"rmaa", "shyam"};
    //cout<<name[1];

    for(int i=0; i<2 ; i++){
        cout<<name[i]<<endl;
    }

    name[0]="Ram ";
    //cout<<name[0]<<endl;
    cout<<"updated array  : \n";
    for (int i=0; i<2; i++){
        cout<<name[i]<<endl;
    } 
    return 0;
}*/

/*
//          *      array using a "for-each loop"         *

int main(){
    string names[3]={"ram","sach", "kush"};
    for (string name : names){
        cout<<name<<"\n";
    }

    return 0; 
}*/

//                    *   input by user     *
int main (){
    string name [5];
    cout <<" Enter name of persons : \n";
    for (int i=0; i<5; i++){
        cout<<"Enter name of "<<i+1<<"- person \n";
        getline(cin , name[i]);
    }

    string y;
    cout<<"Can you see name of all persons  : \n"<<"Type yes : ";
    cin>> y;
    if (y=="yes"){
        for (string nam : name ){
            cout<<nam<<"\n";
        }
    }

}