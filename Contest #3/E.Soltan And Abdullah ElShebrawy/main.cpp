#include <iostream>
using namespace std;

int main (){
    int N = 0, B = 0, C = 0;
    cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            C += arr[i];
        }else{
            B += arr[i];
        }
    }
    cout<<(B-C)<<endl;
    return 0;
}