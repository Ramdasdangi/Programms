#include <iostream>
using namespace std;

// Class declaration
class Box {
private:
    int  width;

public:
    // Constructor to initialize width
    Box(int x) {
        width=x;
    }

    // Friend function declaration
    friend void printWidth(Box b);
};

// Friend function definition
void printWidth(Box b) {
    // Accessing private member of the class
    cout << "Width of the box: " << b.width << endl;
}

int main() {
    Box box(10.5); // Create an object of Box
    printWidth(box); // Call the friend function
    return 0;
}
