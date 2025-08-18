#include <iostream>
#include<fstream>
#include <iomanip>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

struct emp{
    int id ;
    char name[50];
    char desi[50];
    float basicpay;
    float al;
    float ded;
    float salary;

};

// function declarations
bool adminlogin();
void addemp();
void dis();
void searchemp();
void update();
void deleteemp();
void sortemp();
float calcNet(float basic, float al, float ded);



int main(){
   if(!adminlogin()){
    cout<<"Access Denied !!! ";
    return 0;
   }

   int choice;
   do{
      cout << "\n===-----=== Payroll Management System ===-----===\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Update Employee designation/Salary\n";
        cout << "5. Delete Employee\n";
        cout << "6. Sort Employees\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

    switch (choice)
    {
    
        case 1: addemp(); break;
        case 2: dis(); break;
        case 3: searchemp(); break;
        case 4: update(); break;
        case 5: deleteemp(); break;
        case 6: sortemp(); break;
        case 0: cout<<"Exiting program >>...!!! \n";
        default: cout<<"invalid choice !! please try again .. \n";

   }
}while(choice!=0);
return 0;

}

// admin login

bool adminlogin(){
    string pass;
    cout<<"enter admin password : ";
    cin>>pass;
    return(pass=="123");

}

void addemp(){
    emp e;
    ofstream outFile("payroll.dat", ios::binary| ios::app);

    cout << "Enter Employee ID: ";
    cin >> e.id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    cin.getline(e.name, 50);
    cout<<"Enter designation : ";
    cin.getline(e.desi,50);
    cout << "Enter Basic Pay: ";
    cin >> e.basicpay;
    cout << "Enter Allowances: ";
    cin >> e.al;
    cout << "Enter Deductions: ";
    cin >> e.ded;

    e.salary = calcNet(e.basicpay, e.al, e.ded);

    outFile.write((char*)&e, sizeof(e));
    outFile.close();
    cout << "Employee added successfully!\n";
}

// ===== DISPLAY EMPLOYEES =====
void dis() {
    emp e;
    ifstream inFile("payroll.dat", ios::binary);

    if (!inFile) {
        cout << "No data found!\n";
        return;
    }

    cout << "\n" << setw(5) << "ID" << setw(20) << "Name"
         << setw(20) <<"designation"
         << setw(12) << "Basic" << setw(12) << "Allowances"
         << setw(12) << "Deductions" << setw(12) << "Net Pay\n";
    cout << string(80, '-') << endl;

    while (inFile.read((char*)&e, sizeof(e))) {
        cout << setw(5) << e.id << setw(20) << e.name
             <<setw(20) << e.desi
             << setw(12) << e.basicpay << setw(12) << e.al
             << setw(12) << e.ded << setw(12) << e.salary << endl;
    }
    inFile.close();
}

// ===== SEARCH EMPLOYEE =====
void searchemp() {
    int searchID;
    cout << "Enter Employee ID to search: ";
    cin >> searchID;

    emp e;
    ifstream inFile("payroll.dat", ios::binary);
    bool found = false;

    while (inFile.read((char*)&e, sizeof(e))) {
        if (e.id == searchID) {
            cout << "\nEmployee Found!\n";
            cout << "ID: " << e.id << "\nName: " << e.name
                 <<"\nDesignation: "<<e.desi
                 << "\nBasic Pay: " << e.basicpay
                 << "\nAllowances: " << e.al
                 << "\nDeductions: " << e.ded
                 << "\nNet Pay: " << e.salary << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Employee not found!\n";

    inFile.close();
}


// ===== UPDATE SALARY =====
void update() {
    int searchID;
    cout << "Enter Employee ID to update : ";
    cin >> searchID;

    fstream file("payroll.dat", ios::binary | ios::in | ios::out);
    emp e;
    bool found = false;

    while (file.read((char*)&e, sizeof(e))) {
        if (e.id == searchID) {
            cout<<"Name of employee : "<<e.name<<endl;
            int u;
            cout<<"what you want update 'designation/salary' : \n";
            cout<<"for designation  (' 1 ') \n for salary (' 2 ')\n";
            cin>>u;

            if(u==1){
                cout<<"current designation : "<<e.desi<<endl;
                cout<<"enter new designation : ";
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear input buffer
                cin.getline(e.desi, 50);
                file.seekp(-static_cast<std::streamoff>(sizeof(e)), ios::cur);
                file.write((char*)&e, sizeof(e));
                cout<<"updated successfully!!\n";
                found=true;
                break;

            }
            else if(u==2){
            cout << "Current Net Pay: " << e.salary << endl;
            cout << "Enter New Basic Pay: ";
            cin >> e.basicpay;
            cout << "Enter New Allowances: ";
            cin >> e.al;
            cout << "Enter New Deductions: ";
            cin >> e.ded;

            e.salary = calcNet(e.basicpay, e.al, e.ded);

            file.seekp(-sizeof(e), ios::cur);
            file.write((char*)&e, sizeof(e));

            cout << "Salary updated successfully!\n";
            found = true;
            break;}
            else{
                cout<<"choose any one out of two designation or salary ::\n";
            }
        }
    }
    if (!found) cout << "Employee not found!\n";

    file.close();
}

// ===== DELETE EMPLOYEE =====
void deleteemp() {
    int deleteID;
    cout << "Enter Employee ID to delete: ";
    cin >> deleteID;

    ifstream inFile("payroll.dat", ios::binary);
    ofstream tempFile("temp.dat", ios::binary);
    emp e;
    bool found = false;

    while (inFile.read((char*)&e, sizeof(e))) {
        if (e.id != deleteID) {
            tempFile.write((char*)&e, sizeof(emp));
        } else {
            found = true;
        }
    }
    inFile.close();
    tempFile.close();
    remove("payroll.dat");
    rename("temp.dat", "payroll.dat");

    if (found) cout << "Employee deleted successfully!\n";
    else cout << "Employee not found!\n";
}

// ===== SORT EMPLOYEES =====
void sortemp() {
    vector<emp> employees;
    emp e;
    ifstream inFile("payroll.dat", ios::binary);
    while (inFile.read((char*)&e, sizeof(e))) {
        employees.push_back(e);
    }
    inFile.close();

    if (employees.empty()) {
        cout << "No employees to sort!\n";
        return;
    }

    int option;
    cout << "Sort by:\n1. Name\n2. Net Pay\nEnter choice: ";
    cin >> option;

    if (option == 1) {
        sort(employees.begin(), employees.end(),
             [](emp a, emp b) { return strcmp(a.name, b.name) < 0; });
    } else if (option == 2) {
        sort(employees.begin(), employees.end(),
             [](emp a,emp b) { return a.salary > b.salary; });
    } else {
        cout << "Invalid choice!\n";
        return;
    }

    cout << "\nSorted Employee List:\n";
    cout << setw(5) << "ID" << setw(20) << "Name"<<setw(20)<<"designation"
         << setw(12) << "Basic" << setw(12) << "Allowances"
         << setw(12) << "Deductions" << setw(12) << "Net Pay\n";
    cout << string(80, '-') << endl;

    for (auto &e : employees) {
        cout << setw(5) << e.id << setw(20) << e.name<<setw(20)<<e.desi
             << setw(12) << e.basicpay << setw(12) << e.al
             << setw(12) << e.ded << setw(12) << e.salary << endl;
    }
}


// ===== NET PAY CALCULATION =====
float calcNet(float basic, float al, float ded) {
    return basic + al - ded;
}
