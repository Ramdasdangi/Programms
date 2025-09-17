#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<algorithm>
using namespace std;

struct student{
    char name[50];
    int id;
    char sub[20];
    char c_name[50];
    int fee;
};


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
}


void update() {
    int s_id;
    cout <<"employee id which is want to find : \n";
    cin>>s_id;

    student st;
    fstream f("file.dat" , ios::binary|ios::in|ios::out);
    bool found = false;

    while (f.read((char*)&st ,sizeof(st)))
    {
        if (st.id==s_id)
        {
         cout<<"Student Name is " <<st.name<<endl;
        
         cout<<"WHAT ARE YOU WANT TO UPDATE : \n";
         cout<<"for subject enter 1 \n for collage name enter 2 \n";
         int u;
         cin>>u;
        

            if(u==1){
                cout<<"current subject name is : "<<st.sub<<endl;
                cout<<"Enter name of new subject : ";
                cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                cin.getline(st.sub,20);
                f.seekp(-static_cast<std::streamoff>(sizeof(st)),ios::cur);
                f.write((char*)&st, sizeof(st));
                cout<<"Subject Name Update Successfully !! \n";
                found=true;
                break;
            }

            else if(u==2){
                cout<<"old collage name is : "<<st.c_name<<endl;
                cout<<"Enter New collage name : ";
                cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                cin.getline(st.c_name,50);
                f.seekp(-static_cast<std::streamoff>(sizeof(st)),ios::cur);
                f.write((char*)&st, sizeof(st));
                cout<<"Collage Name Update Successfully !! \n";
                found=true;
                break;
            }
        }
    }
}

int main(){
    string yes="yes";

    do {
    int a;
    cout<<"for see record enter 1 \n for update record 2 \n";
    cin>>a;
    if(a==1){
        display();
    }
    else if(a==2){
        update();
    }
    else{
        cout<<"choose right choice :: \n";
    }
    cout<<"are you continues do operation enter yes \n";
    cin>>yes;
    }while(yes=="yes");

}
