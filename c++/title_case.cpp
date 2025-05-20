#include<string>
#include<iostream>
#include<cctype> //for check is upper or lower 
using namespace std;

bool isAcronym(const string &word){
    for(size_t i=0; i<word.length(); i++){
        if (!isupper(word[i]))
        return false;
    }
    return true;
}

string toTitlecase(const string &word){
    if (word.empty()) return "";
    string result = word;
    result[0]=toupper(result[0]);
    for(size_t i=1; i<result.length(); ++i){
        result[i]=tolower(result[i]);
    }
    return result;
}

string convertToTitlecase(const string &s){
    string result ="", word="";
    for (size_t i=0; i<s.length(); ++i){
        char ch =s[i];
        if(ch==' '){
            if (!word.empty()){
                result+=(isAcronym(word) ? word : toTitlecase(word))+" ";
                word.clear();
            }
        }
        else{
            word+=ch;

        }
    }
    if (!word.empty()){
        result+=(isAcronym(word)? word : toTitlecase(word));
    }
    return result;
}


int main(){

    int t;
    cout <<"enter no of test cases : ";
    cin>>t;
    cin.ignore(); //to ignore leftover newline after reading t

    while(t--){
        string s;
        getline(cin, s); //read the full line include space

        cout<<convertToTitlecase(s)<<endl;
    }
    return 0;
}
