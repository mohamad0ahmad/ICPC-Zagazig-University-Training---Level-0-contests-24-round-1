#include <iostream>
using namespace std;

int main (){
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N = 0;
        cin >> N;
        int *arr = new int[N+1];
        arr[N] = -1000000000;
        for (int i = 0; i < N; i++)
        {
           cin >> arr[i];
        }
        int Tops = 0;
        for (int i = 1; i < (N-1); i++)
        {
           if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            Tops++;
           }
        }
        cout<<Tops<<endl;
    }
    
    return 0;
}