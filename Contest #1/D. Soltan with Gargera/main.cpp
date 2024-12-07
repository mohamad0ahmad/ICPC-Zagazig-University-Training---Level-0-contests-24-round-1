#include <iostream>
using namespace std;
int main(){
    int X = 0;
    cin>>X;
    if(X==2){
        cout<<"NO";
    }else if (X&1)
    {
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}