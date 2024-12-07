#include <iostream>
using namespace std;
#include <cmath>
int main(){
    int A = 0, B = 0;
    cin>>A;
    cin>>B;
    for (int i = 0; i < 1000000000; i++)
    {
        if (i*B >= A)
        {
            cout<<(i*B-A);
            break;
        }
        
    }
    
    return 0;
}