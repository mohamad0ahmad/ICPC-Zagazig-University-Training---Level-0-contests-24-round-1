#include <iostream>
using namespace std;

int main(){
    int Tests = 0;
    cin>>Tests;
    for (int i = 0; i < Tests; i++)
    {
        int A = 0, B = 0;
        char c;
        cin>>A>>c>>B;
        cout<<(A+B)<<endl;
    }
    return 0;
}