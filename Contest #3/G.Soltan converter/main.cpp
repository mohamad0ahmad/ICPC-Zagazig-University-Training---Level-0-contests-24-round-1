#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int X = 0, Y = 0;
    cin>>Y;
    cin>>X;
    int Q = 0;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int q = 0;
        cin >> q;
        if (q == 0)
        {
            int x = 0, y = 0;
            cin >> x;
            cin >> y;
            int index = x +(y-1)*X;
            cout << index<< endl;
        }else{
            int number = 0;
            cin >> number;
            int x_axis = number%X;
            if (x_axis == 0)
            {
                x_axis = X;
            }
            float y = ceil((float)number/ (float)X) ;
            int y_axis = y;
            cout <<x_axis<<" "<<y_axis<<endl;
        }
    }
    
    return 0;
}