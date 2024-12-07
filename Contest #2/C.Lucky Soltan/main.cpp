#include <iostream>
using namespace std;

int main(){
    int Tests = 0;
    cin>>Tests;
    for (int i = 0; i < Tests; i++)
    {
        int N = 0;
        cin>>N;
        int half1 = 0;
        int half2 = 0;
        for (int i = 0; i < 3; i++)
        {
            half1 += (N%10);
            N /= 10;
        }
        for (int i = 0; i < 3; i++)
        {
            half2 += (N%10);
            N /= 10;
        }
        if (half1 == half2)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}