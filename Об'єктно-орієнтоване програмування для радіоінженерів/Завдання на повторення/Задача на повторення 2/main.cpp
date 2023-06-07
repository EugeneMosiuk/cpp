#include <iostream>

using namespace std;

int main()
{
    int val = 0;
    cout<<"Enter cathetus size"<<endl;
    cin>>val;
    if(val > 0 && val < 20)
    {
        for(;val!=0;val--)
        {
            for(int i = 0; i < val; i++)
                cout<<"*";
            cout<<endl;
        }
            
    }
    else
    {
        cout<<"Wrong value"<<endl;
        return 0;
    }
    return 0;
}