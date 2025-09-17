#include <iostream>
using namespace std;

//     **** programm using struction ****

struct employee{
    char name [50];
    int salary ;
    int accound_no;
};

int main(){
    
    int n;
    cout <<"enter how many entry you want ";
    cin>>n;
    employee emp[n];

    for (int i=0 ; i<n ; i++){
        cout<<"enter name of "<<i+1<<" employee : ";
        cin>>emp[i].name;
        cout<<"enter salary : ";
        cin>>emp[i].salary;
        cout<<"enter accound number : ";
        cin>>emp[i].accound_no;

    }
    cout<<"you enter "<<n<<" values :: \n";
    

    for(int j=0 ; j<n; j++){
        cout <<j+1<<" value : ";
        cout<<emp[j].name<<" , ";
        cout<<emp[j].salary<<" , ";
        cout<<emp[j].accound_no<<"  \n";
    }
    return 0;

}