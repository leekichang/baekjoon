#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    int curr = 1;
    int count = 1;
    while(curr < num){
        curr += count*6;
        count++;
    }
    cout << count << endl;
    return 0;
}