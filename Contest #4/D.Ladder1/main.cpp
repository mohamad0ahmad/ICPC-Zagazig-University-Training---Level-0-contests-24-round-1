#include <iostream>
using namespace std;

int main(){
    int Up = 0, Low = 0;
    string s ;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            Up++;
        }else{
            Low++;
        }
    }
    if (Up > Low)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }
    }else{
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
