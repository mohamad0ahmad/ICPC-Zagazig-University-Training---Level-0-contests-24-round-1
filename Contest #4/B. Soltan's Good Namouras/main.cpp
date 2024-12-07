#include <iostream>
using namespace std;


int main() {
    long long n , k ;
    cin >> n >>k;
    int cnt = 0 ;
    while(n--) {
        string s ;
        cin >> s ;
        bool ok = 1 ;
        for(int i = 0 ; i <= k ; i++) {
            if(s.find(i+'0') == string::npos) {
                ok = 0 ;
                break;
            }
        }
        if(ok) cnt++;

    }
    cout << cnt << endl;
}


