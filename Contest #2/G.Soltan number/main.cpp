#include <iostream>
using namespace std;

int main(){
    int Tests = 0;
    cin>>Tests;
    for (int i = 0; i < Tests; i++)
    {
        int A = 0, B = 0, C = 0;
        cin>>A>>B>>C;
        int min = 21, max = 0;
        if (A<B && A<C)
        {
            min = A;
        }else if(A > B && A > C){
            max = A;
        }

        if (B<A && B<C)
        {
            min = B;
        }else if(B > A && B > C){
            max = B;
        }

        if (C<A && C<B)
        {
            min = C;
        }else if(C > A && C > B){
            max = C;
        }

        if (A!=max && A!=min)
        {
            cout<<A<<endl;
        }else if (B!=max && B!=min)
        {
            cout<<B<<endl;
        }else if (C!=max && C!=min)
        {
            cout<<C<<endl;
        }
    }
    
    return 0;
}