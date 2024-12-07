#include <iostream>
using namespace std;

int main (){
    int N = 0,chest = 0, biceps = 0, back = 0;
    cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (i%3 == 0)
        {
            chest += arr[i];
        }else if (i%3 == 1)
        {
            biceps += arr[i];
        }else{
            back += arr[i];
        }
    }
    if (chest > biceps && chest > back)
    {
        cout<<"chest"<<endl;
    }else if (biceps > chest && biceps > back)
    {
        cout<<"biceps"<<endl;
    }else{
        cout<<"back"<<endl;
    }
    
    return 0;
}