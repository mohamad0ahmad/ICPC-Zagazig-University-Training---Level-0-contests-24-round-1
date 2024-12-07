#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    char arr[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        char firstChar = arr[i][0];
        for (int j = 1; j < M; j++) {
            if (arr[i][j] != firstChar) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    for (int i = 1; i < N; i++) {
        if (arr[i][0] == arr[i-1][0]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
