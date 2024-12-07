#include <iostream>
using namespace std;

int main(){
    int Tests = 0;
    cin>>Tests;
    for (int i = 0; i < Tests; i++)
    {
        string s ;
        cin>>s;
        if (s == "bca" || s == "cab")
        {
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}