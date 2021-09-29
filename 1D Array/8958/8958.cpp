#include <iostream>
#include <string>
using namespace std;

int main(){
    int numOfValues;
    cin >> numOfValues;
    string str;
    int* scores = (int*)malloc(sizeof(int)*numOfValues);
    for(int i = 0; i < numOfValues; ++i){
        cin >> str;
        int cont = 1;
        for(int j = 0; j < str.length(); ++j){
            if(str[j] == 'O'){
                scores[i] += cont;
                cont += 1;
            }
            else{
                cont = 1;
            }
        }
        cout << scores[i] << endl;
    }
    return 0;
}