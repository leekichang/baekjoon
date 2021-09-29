#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int numCase, H, W, N;
    cin >> numCase;
    for(int i = 0; i < numCase; i++){
        cin >> H >> W >> N;
        int a = N%H;
        int b = N/H;
        if(a == 0){
            a = H;
        }
        else{
            b += 1;
        }
        cout << a*100+b << endl;        
    }
    return 0;
}