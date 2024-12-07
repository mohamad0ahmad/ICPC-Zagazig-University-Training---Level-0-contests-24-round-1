#include <iostream>
using namespace std;
int main(){
    int TestCases = 0;
    cin>>TestCases;
    for (int i = 0; i < TestCases; i++)
    {
        int a = 0, b = 0, c = 0;
        cin>>a;
        cin>>b;
        cin>>c;
        if (a+b == c)
        {
            cout<<"+"<<endl;
        }else{
            cout<<"-"<<endl;
        }
        
    }
    

    
    return 0;
}