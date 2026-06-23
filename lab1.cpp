#include<iostream>
using namespace std;

void numberCheck() {
    string s;
    cin>>s;

    bool isNum = true;


    for(int i=0; i<s.length(); i++){
        if(s[i] < 48 || s[i] > 57){
            isNum = false;
            break;
        }
    }

    if(isNum ){
        cout<<"numeric constant"<<endl;
    }else{
        cout<<"Not Numeric"<<endl;
    }
}

void  operatorCheck(){
    string op;
    cin>>op;
    int opCount = 0;

    for(int i=0; i<op.length(); i++){
        if(op[i] == 43){
            cout<<"operator "<<opCount+1 <<" : + (addition)"<<endl;
            opCount++;
        }else if(op[i] == 45){
            cout<<"operator "<<opCount+1 <<" : - (subtraction)"<<endl;
            opCount++;
        }else if(op[i] == 42){
            cout<<"operator "<<opCount+1 <<" : * (multiplication)"<<endl;
            opCount++;
        }else if(op[i] == 47){
            cout<<"operator "<<opCount+1 <<" : / (division)"<<endl;
            opCount++;
        }else if(op[i] == 37){
            cout<<"operator "<<opCount+1 <<" : % (modulus)"<<endl;
            opCount++;
        }else if(op[i] == 61){
            cout<<"operator "<<opCount+1 <<" : = (equal)"<<endl;
            opCount++;
        }
    }
}

void commentCheck(){
    string s;
    cin.ignore();
    getline(cin, s);






    if(s[0] == '/' && s[1] == '*' && s[s.length()-2] == '*' && s[s.length()-1] =='/'){
        cout<<"This is a multiline comment"<<endl;
    }else if(s[0] == '/' && s[1] == '/'){
        cout<<"This is a single line comment"<<endl;
    }else{
        cout<<"Not a comment"<<endl;
    }







}

void checkIdentifier() {
    string s;
    cin>>s;
    char f = s[0];


     if(!((f >=65 && f<=90) || (f>=97 && f <= 122 ) || f == 95)) {
        cout<<"Not an identifier" << endl;
        return;
    }

    for(int i=1; i<s.length(); i++){
        char c = s[i];
        if(!((c>=65 && c<=90) || (c>=97 && c<= 122) || (c>=48 && c<=57 ) || c==95)){
            cout<<"Not an identifier"<<endl;
            return;
        }
    }

    cout<<"Valid identifier"<<endl;
}

int main()
{
    numberCheck();

    operatorCheck();

    commentCheck();

    checkIdentifier();


}
