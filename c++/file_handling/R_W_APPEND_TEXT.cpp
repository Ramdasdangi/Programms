//  ---------------------Read , write  , append  in text file   ---------------------------

#include <iostream>
#include<fstream>
#include<string>
using namespace std;

void write(){
    string f = "text_file.txt";
    ofstream file (f);
    if(!file){
        cout<<"ERROR FILE CREATING !! "<<endl;
        return  ;
    }

    cout<<"Enter text to write ( Write END to stop ) ::: \n";
    string line;
    while (true){
        getline (cin , line);
        if(line=="END" || line =="end" || line=="End")break;
        file<<line<<endl;
    }
    file.close();
    cout << "✅ Data written successfully.\n";
}



void read(){
    string f = "text_file.txt";
    ifstream file(f);
    if(!file){
        cout<<"FILE DOES NOT EXIST ::  \n";
        return;
    }
    cout<<"\n\n";
    cout<<string(55,'-');

    cout << "\n File Content:\n";
    string line;
    while(getline(file,line)){
        cout<<line<<endl;
    }
    cout<<string(55,'-');
    cout<<"\n\n";
    file.close();
}


void append(){
    ofstream file("text_file.txt", ios::app);
    if(!file){
        cout<<"FILE DOES NOT EXIST ::  \n";
        return;
    }
    cout << "Enter text to APPEND (type END to stop):\n";
    string line;
    while (true) {
        getline(cin, line);
        if (line == "END" || line =="end" || line=="End") break;
        file << line ;
    }
    file.close();
    cout << "✅ Data appended successfully.\n";

}


int main() {
    int choice;

    do {
        cout << "\n====== FILE HANDLING MENU ======\n";
        cout << "1. Write to File (overwrite)\n";
        cout << "2. Read File\n";
        cout << "3. Append to File\n";
        cout << "4. Exit\n\n";
        cout << "Enter your choice :: ";
        cin >> choice;
        cout<<endl;

        if (choice == 1) {
            write();
        }
        else if (choice == 2) {
            read();
        }
        else if (choice == 3) {
            append();
        }
        else if (choice == 4) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "❌ ENTER RIGHT OPTION :: \n";
        }

    } while (choice != 4);

    return 0;
}