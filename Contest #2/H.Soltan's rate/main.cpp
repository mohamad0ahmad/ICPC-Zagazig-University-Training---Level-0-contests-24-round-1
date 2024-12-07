#include <iostream>
using namespace std;

int main(){
    int Tests = 0;
    cin>>Tests;
    for (int i = 0; i < Tests; i++)
    {
        int rate = 0;
        cin>>rate;
        if(rate <= 1399){
            cout<<"Division 4"<<endl;
        }else if(rate >= 1900){
            cout<<"Division 1"<<endl;
        }else if(1600 <= rate && rate <= 1899){
            cout<<"Division 2"<<endl;
        }else if(1400 <= rate && rate <= 1599){
            cout<<"Division 3"<<endl;
        }
    }
    
    return 0;
}