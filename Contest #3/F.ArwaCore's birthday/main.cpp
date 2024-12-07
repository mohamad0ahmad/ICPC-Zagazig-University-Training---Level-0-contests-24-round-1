#include <iostream>
using namespace std;

int main (){
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N = 0;
        cin >> N;
        int *arr = new int[N];
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
        int smallest_ind = 0;
        int smallest = INT_MAX;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] < smallest)
            {
                smallest = arr[i];
                smallest_ind = i;
            }
        }
        arr[smallest_ind]++;
        int product = 1;
        for (int i = 0; i < N; i++)
        {
            product *= arr[i];
        }
        cout<<product<<endl;
    }
    
    return 0;
}