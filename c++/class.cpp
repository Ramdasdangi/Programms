#include<iostream>
using namespace std;

    class emp {
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1); //Declaration
        void getData(){
            cout<<"a is"<<a<<endl;
            cout<<"b is"<<b<<endl;
            cout<<"c is"<<c<<endl;
            cout<<"d is"<<d<<endl;
            cout<<"e is"<<e<<endl;
        }
    };
void emp :: setData(int a1,int b1,int c1) {
    a=a1;
    b=b1;
    c=c1;
}

int main() {
    emp ram;
    //ram.a=3;
    ram.d=9;
    ram.e=10;
    ram.setData(2,5,7);
    ram.getData();

}