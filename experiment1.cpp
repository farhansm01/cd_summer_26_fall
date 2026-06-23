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


void findAverage(){

    int a;
    cout<<"enter array size: ";
    cin>>a;

    int arr[a];
    cout<<"enter the values of the array: ";

    int sum=0;

    for(int i=0; i<a; i++){
        cin>>arr[i];
        sum += arr[i];
    }

    cout<<"average: "<<sum/a<<endl;




}


void findMinMax() {

    int a;
    cout<<"enter array size: ";
    cin>>a;

    int arr[a];
    cout<<"enter the values of the array: ";

    for(int i=0; i<a; i++){
        cin>>arr[i];

    }

    int minVal = arr[0];
    int maxVal = arr[0];

    for(int i=0; i<a; i++){
        if(arr[i] < minVal){
            minVal = arr[i];
        }
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }

    cout<<"Minimum value: "<<minVal<<endl;
    cout<<"Maximum value: "<<maxVal<<endl;
}

void fullName(){
    string first, last;

    cout<<"enter first name: ";
    getline(cin, first);

    cout<<"enter last name: ";
    getline(cin, last);


    cout<<"your full name is: "<<first + ' ' + last<<endl;



}

int main()
{
    //fullName();


}
