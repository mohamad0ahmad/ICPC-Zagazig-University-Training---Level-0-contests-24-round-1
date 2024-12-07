#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    string *arr1 = new string[n];
    int *arr2 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
        cin>>arr2[i];
    }
    int total = 0;
    int winner = 0;
    int winnerindex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr2[i]>winner)
        {
            winner = arr2[i];
            winnerindex = i;
        }
        
        total += arr2[i];
    }
    cout<<"Total scream units: "<<total<<endl;
    cout<<"Winner Monster: "<<arr1[winnerindex]<<", Scream Units: "<<winner<<endl;
    
    
    return 0;
}