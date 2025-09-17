//  ------------------Programm for write and Read in a file --------------------

#include<iostream>
using namespace std;
#include<cstring>
#include<fstream>
#include<iomanip>

struct student{
    char name[50];
    int id;
    char sub[20];
    char c_name[50];
    int fee;
};

void add();
void display();
void deleteemp();

int main(){
    int a;
    do{    
    cout<<"for add a student enter '1' : \n";
    cout<<"for display all record enter '2' : \n";
    cout<<"for exit '0' : \n";
    cout<<"=====>>>  ";
    cin>>a;
   
    if (a==1){
        add();
    }
    else if(a==2){
        display();
    }
    else if(a==0){
        //deleteemp();
        cout<<"programm is over :: \n";
    }
    else{
        cout<<"please choose valid choice : \n";
    }
    } while (a!=0);
    
    return 0;
    
}

void add(){
    student st;
    ofstream f("file.dat", ios::binary | ios::app);

    cout<<"\nEnter id of student : ";
    cin>>st.id;
    cin.ignore();
    cout<<"Enter Name of student : ";
    cin.getline(st.name,50);
    cout<<"Enter branch : ";
    cin.getline(st.sub,20);
    cout<<"Enter collage name : ";
    cin.getline(st.c_name,50);
    cout<<"Enter fees of the student : ";
    cin>>st.fee;

    f.write((char*)&st, sizeof(st));
    f.close();
    cout<<"\nStudent details added succesfully ::\n ";

}

void display(){
    student st;
    ifstream f("file.dat",ios::binary);
    if (!f){
        cout<<"\nfile not found !!  -> please enter student details first : \n";
    }

    cout<<"\n\n"<<left<<setw(5)<<"ID"
                <<left<<setw(10)<<"Name"
                <<left<<setw(10)<<"Branch"
                <<left<<setw(16)<<"Collage_Name"
                <<left<<setw(5)<<"Collage_Fee"<<endl;
            cout<<string(55,'-')<<endl;

    while(f.read((char*)&st , sizeof(st))){
        cout<<left<<setw(5)<<st.id
        <<left<<setw(10)<<st.name
        <<left<<setw(10)<<st.sub
        <<left<<setw(16)<<st.c_name
        <<left<<setw(5)<<st.fee<<endl;
    }
    cout<<string(55,'-')<<endl<<endl;

f.close();
    
}
void deleteemp() {
    int deleteID;
    cout << "Enter Employee ID to delete: ";
    cin >> deleteID;

    ifstream inFile("file.dat", ios::binary);
    ofstream tempFile("temp.dat", ios::binary);
    student e;
    bool found = false;

    while (inFile.read((char*)&e, sizeof(e))) {
        if (e.id != deleteID) {
            tempFile.write((char*)&e, sizeof(student));
        } else {
            found = true;
        }
    }
    inFile.close();
    tempFile.close();
    remove("file.dat");
    rename("temp.dat", "file.dat");

    if (found) cout << "Employee deleted successfully!\n";
    else cout << "Employee not found!\n";
}