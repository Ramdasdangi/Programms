#include<iostream>
#include <cstring>
#include<fstream>
#include<iomanip>
using namespace std;

struct student{
    char name[50];
    int id;
    char sub[20];
    char c_name[50];
    int fee;
};

void text_read(){
    ifstream file("text_file.txt" );
    cout<<string(75,'*')<<endl;
    if(!file){
        cout<<"Text File not found : \n";
    }
    string line;
    cout<<"this text file --->>>\n";
    while (getline (file , line)){
        cout<<line<<endl;}
  //  cout<<"\n\n";
    file.close();
    } 


void binary_read(){
    student st;
    ifstream f("file.dat",ios::binary);
    if(!f){
        cout<<"Binary file does'nt exist : \n";
    }
    string len;
    cout<<"\n\n";
    cout<<string(75,'*')<<endl;
    cout<<"this binary file ===>>>\n";
    cout<<"\n\n"<<left<<setw(5)<<"ID"
                <<left<<setw(10)<<"Name"
                <<left<<setw(10)<<"Branch"
                <<left<<setw(16)<<"Collage_Name"
                <<left<<setw(5)<<"Collage_Fee"<<endl;
            cout<<string(55,'-')<<endl;

    while (f.read((char*)&st,sizeof(st))){
        cout<<left<<setw(5)<<st.id
        <<left<<setw(10)<<st.name
        <<left<<setw(10)<<st.sub
        <<left<<setw(16)<<st.c_name
        <<left<<setw(5)<<st.fee<<endl;
    }
    cout<<string(55,'-')<<endl<<endl;
    cout<<string(75,'*')<<endl;
    f.close();
}



int main(){
    text_read();
    binary_read();
}
