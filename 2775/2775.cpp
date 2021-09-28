#include <iostream>
using namespace std;

int numCase, k, n, DP[15][15];

int main(){
    cin >> numCase;
    for(int i = 1; i <= 14; i++){
        DP[0][i] = i;
    }
    for(int i = 1; i <= 14; i++){
        for(int j = 1; j <= 14; j++){
            DP[i][j] = DP[i-1][j]+DP[i][j-1];
        }
    }
    for(int i = 0; i < numCase; i++){
        cin >> k >> n;
        cout << DP[k][n] << endl;
    }
    return 0;
}