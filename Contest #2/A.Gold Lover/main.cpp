#include <iostream>
using namespace std;

int main(){
    int n = 0, k = 0 , G = 0;
    cin>>n;
    cin>>k;
    char *arr = new char[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (k == 0)
        {
            break;
        }
        if (arr[i] == 'G')
        {
            --k;
            ++G;
        }else{
            ++k;
        }
        
    }
    cout<<G<<endl;
    return 0;
}