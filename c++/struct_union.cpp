#include<iostream>
using namespace std;
/*struct emp {
        int id;
        char letter;
        float sall;
    };*/
/*typedef struct emp {
        int id;
        char letter;
        float sall;
    } st;*/
    
/*union rokda {
// only aik ka hi memory optimise hoga
// memory save one time one use
    int rice;
    char carl;
    float dollar;
    }  ;*/
     
int main () {
   //struct emp ram;
   /*st ram;
    ram.id=1;
    ram.letter='c';
    ram.sall=5;
    cout<<ram.id<<endl;
    cout<<ram.letter<<endl;
    cout<<ram.sall<<endl;*/
    
    /*union rokda m1;
    m1.rice=3;
    cout<<m1.rice<<endl;
    m1.carl='y';
    cout<<m1.rice<<endl;//bcz one time one use . this is overwrite.
    cout<<m1.carl;
    */
    
    enum meal{breakfast , lunch , dinner};
    meal m1=breakfast ;
    cout<<m1<<endl;
    cout<<breakfast <<endl;
    cout<<lunch <<endl;
}