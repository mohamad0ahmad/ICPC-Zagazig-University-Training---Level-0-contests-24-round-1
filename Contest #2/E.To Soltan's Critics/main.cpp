#include <iostream>
using namespace std;

int main(){
    int Tests = 0;
    cin>>Tests;
    for (int i = 0; i < Tests; i++)
    {
        int A = 0, B = 0, C = 0;
        cin>>A;
        cin>>B;
        cin>>C;
        if ((A+B) >= 10)
        {
            cout<<"YES"<<endl;
        }else if ((A+C) >= 10)
        {
            cout<<"YES"<<endl;
        }else if ((B+C) >= 10)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}