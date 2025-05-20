#include<iostream>
#include<string>
using namespace std;

int main (){
    string fruits[3];
    cout<<"enter name of 3 fruits  : "<<endl;
    for (int i=0; i<3 ; i++){
        cout<<"enter fruit : "<<i+1<<endl;
        getline(cin,fruits[i]);
    }

    cout <<"you are entered : "<<endl;
    for(int i=0 ; i<3 ; i++){
        cout<<fruits[i]<<endl;
       
    }
  return 0;  
}






/* #include<iostream>
using namespace std;
int main (){
    char fruits[3][20]={
        "apple "
        "banana "
        "cherry"

    };
    cout<<"fruits"<<endl;
    for(int i=0 ; i<3 ; i++){
        cout<<fruits[i]<<endl;
    }
    
}*/