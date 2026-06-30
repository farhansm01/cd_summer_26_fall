#include<iostream>
#include<vector>

using namespace std;

bool isOperator(string word)
{
    vector<string> operators = {"+", "-", "*", "/", "=", "<", ">", "<<", ">>", "%"};

    bool isOp = false;

    for(int i=0; i<operators.size(); i++){
        if(operators[i] == word){
            isOp = true;
            break;
        }
    }

    return isOp;
}

bool isKeyword(string word)
{
    vector<string> keywords = {"int", "float", "main", "class", "while", "char", "stack" };

    bool isKey = false;

    for(int i=0; i< keywords.size(); i++)
    {
        if(keywords[i] == word){
            isKey = true;
            break;
        }
    }

    return isKey;
}

bool isPunctuation(string word)
{
    vector<string> punctuations = {";", "(", ")", "[", "]", "{", "}", ".", ","};

    bool isPunc = false;

    for(int i=0; i< punctuations.size(); i++)
    {
        if(punctuations[i] == word){
            isPunc = true;
            break;
        }
    }

    return isPunc;
}



bool isIdentifier(string word) {

    char f = word[0];


     if(!((f >=65 && f<=90) || (f>=97 && f <= 122 ) || f == 95)) {

        return false;
    }

    for(int i=1; i<word.length(); i++){
        char c = word[i];
        if(!((c>=65 && c<=90) || (c>=97 && c<= 122) || (c>=48 && c<=57 ) || c==95)){

            return false;
        }
    }

    return true;
}

bool isNumber(string word) {


    bool isNum = true;


    for(int i=0; i<word.length(); i++){

        if(word[i] == '.'){
            continue;
        }else if(word[i] < 48 || word[i] > 57){
            isNum = false;
            break;
        }
    }

    return isNum;
}


void validTokens()
{


    string statement;

    getline(cin, statement);


    vector<string> tokens;

       string word ="";
    for(int i=0; i<statement.length(); i++){


        if(statement[i] == ' '){
            tokens.push_back(word);
            word ="";
        }else{
            word += statement[i];
        }
    }



    for(int i=0; i<tokens.size(); i++){

        if(isOperator(tokens[i])){
            cout<<tokens[i]<<" is an operator \n";
        }else if(isKeyword(tokens[i])){
            cout<<tokens[i]<<" is a keyword \n";
        }else if(isPunctuation(tokens[i])){
            cout<<tokens[i]<<" is a punctuation\n";
        }else if(isIdentifier(tokens[i])){
            cout<<tokens[i]<<" is an identifier\n";
        }else if(isNumber(tokens[i])){
            cout<<tokens[i]<<" is a constant\n";
        }else{
            cout<<tokens[i]<<" is an invalid token\n";
        }
    }






}


int main()
{
validTokens();
}
