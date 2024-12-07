#include <iostream>
using namespace std;
int main(){//x,d,p,n,m
    int x = 0, d = 0, p = 0, n = 0, m = 0;
    cin>>x;
    cin>>d;
    cin>>p;
    cin>>n;
    cin>>m;

    int totaltime = (p/m)*n;
    totaltime += n;
    totaltime += d;
    if (totaltime>x)
    {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    return 0;
}