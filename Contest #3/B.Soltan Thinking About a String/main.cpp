#include <iostream>
using namespace std;

int main (){
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int A = 0;
        int B = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
            {
                A++;
            }else{
                B++;
            }
        }
        if (A>B)
        {
            cout<<"A"<<endl;
        }else{
            cout<<"B"<<endl;
        }
        
    }
    
    return 0;
}