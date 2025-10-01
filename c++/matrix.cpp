#include<iostream>
using namespace std;



int main(){
    int arr[3][4] ;
    int i,j;
    cout<<"ener matrix element \n";
    for(i=0; i<3; i++){
        for(j=0 ; j<4; j++){
            cout<<"enter element "<<i <<" X "<<j<<" : ";
            cin>>arr[i][j];
            
        }
    }

    cout<<string(80,'-');
    cout<<endl;
    cout<<"matrix given by you : \n\n";

    for(i=0;  i<3; i++){
        for(j=0; j<4; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<string(80,'-');
    cout<<endl;

    int sum=0;
    for( i = 0; i<3; i++){
        for( j=0; j<4; j++){
            sum += arr[i][j];
        }
    }
    cout<<"sum of elemet is "<<sum<<endl;

    int fs=0;
    int snd=0;
    int trd=0;
    for(j=0; j<4; j++){
        
        fs += arr[0][j];
        snd += arr[1][j];
        trd += arr[2][j];
    }
    cout<<"sum of first row is "<<fs<<endl;
    cout<<"sum of secound row is "<<snd<<endl;
    cout<<"sum of third row is "<<trd<<endl;

    int first=0;
    int s=0;
    int t=0;
    int f=0;
    for(i=0; i<3; i++){
        
        first += arr[i][0];
        s += arr[i][1];        
        t += arr[i][2];
        f += arr[i][3];
    }
    cout<<"sum of first coloum is "<<first<<endl;
    cout<<"sum of secound coloum is "<<s<<endl;
    cout<<"sum of third coloum is "<<t<<endl;
    cout<<"sum of fourth coloum is "<<f<<endl;

    int d_sum=0;
    for( i = 0; i<3; i++){
        for( j=0; j<4; j++){
            if(i==j){
                d_sum += arr[i][j];
            }
        }
    }
    cout<<"sum of diagonal elemet is "<<d_sum;
}