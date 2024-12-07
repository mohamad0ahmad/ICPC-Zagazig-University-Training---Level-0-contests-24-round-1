#include <iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i <= s1.length(); i++)
    {
        char c = s1[i];
        if (c >= 'A' && c <= 'Z')
        {
            c += 32;
            s1[i] =  c;
        }
    }
    for (int i = 0; i <= s2.length(); i++)
    {
        char c = s2[i];
        if (c >= 'A' && c <= 'Z')
        {
            c += 32;
            s2[i] =  c;
        }
    }
    bool equal = false;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] > s2[i])
        {
            cout<<"1"<<endl;
            equal = false;
            break;
        }else if (s1[i] < s2[i])
        {
            cout<<"-1"<<endl;
            equal = false;
            break;
        }else{
            equal = true; 
        }
    }
    if (equal)
    {
        cout<<"0"<<endl;
    }
    
    return 0;
}

