#include <iostream>
#include <string>
using namespace std;

class uni {
public:
    string name;
    int roll_no;

    class collage {
    public:
        string co_name;

        void show(uni &u) {   // pass uni object here
            cout << "Collage name is " << co_name << endl;
            cout << "Student name is " << u.name << endl;
            cout << "Roll number is " << u.roll_no << endl;
        }
    };
};

int main() {
    uni::collage c;
    c.co_name = "TIT";

    uni un;
    un.name = "Ram";
    un.roll_no = 25;

    c.show(un);   // pass the object here
}
