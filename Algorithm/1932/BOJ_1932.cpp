#include <iostream>
using namespace std;

int A[505][505], N, M;
// dp[i][j] : (i,j) 성분에 도착했을 때 얻을 수 있는 최대 합
int dp[505][505];

int main() {

    cin >> N;

    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= i; ++j)
            cin >> A[i][j];
    // 초기값 설정
    dp[1][1] = A[1][1];
    // dp값 설정
    for (int i = 2; i <= N; ++i)
        for (int j = 1; j <= i; ++j)
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + A[i][j];

    for (int i = 1; i <= N; ++i)
        M = max(M, dp[N][i]);

    cout << M << '\n';

    return 0;
}
