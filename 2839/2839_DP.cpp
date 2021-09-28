#include <iostream>
using namespace std;

//DP -> 
int DP[5001];

int main(){
    int N;
    cin >> N;
    DP[3] = DP[5] = 1;
    for (int i = 6; i <= N; i++) {
		if (DP[i - 3]){
            DP[i] = DP[i - 3] + 1;
        }
		//이미 dp[i-3]에 값이 존재할때 dp[i]가 업데이트 됐었을 수 있다.
		//만약 dp[i]에 값이 없다면 dp[i] = dp[i-5] +1 로 업데이트
		if (DP[i - 5]){
            DP[i] = DP[i] ? min(DP[i] , DP[i - 5] + 1) : DP[i - 5] + 1;
        }
	}
    cout << (DP[N] == 0 ? -1 : DP[N]) << endl;
    return 0;
}   