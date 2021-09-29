#include <iostream>
#include <string>
using namespace std;

int isGroupWord(string str){
    char prevChar = str[0];
    int isShown[26] = {0,};
    isShown[str[0]-97] += 1;
    for(int i = 1; i < str.length(); i++){
        if(prevChar != str[i] && isShown[str[i]-97] != 0){
            return 0;
        }
        else if(prevChar != str[i] && isShown[str[i]-97] == 0){
            isShown[str[i]-97] += 1;
            prevChar = str[i];
        }
    }
    return 1;
}

int main(){
    int numOfWord;
    cin >> numOfWord;
    string word;
    int count = 0;
    for(int i = 0; i < numOfWord; i++){
        cin >> word;
        count += isGroupWord(word);
    }
    cout << count << endl;
    return 0;
}