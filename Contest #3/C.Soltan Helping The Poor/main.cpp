#include <iostream>
using namespace std;

int main (){
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int k = 0, N = 0, given = 0, mygold = 0;
        cin>>N;
        cin>>k;
        int *arr = new int[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (arr[i] >= k)
            {
                mygold += arr[i];
            }else if(arr[i] == 0 && mygold > 0){
                mygold--;
                given++;
            }
        }
        cout<<given<<endl;
    }
    
    return 0;
}