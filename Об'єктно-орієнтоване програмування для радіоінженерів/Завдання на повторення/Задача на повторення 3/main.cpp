#include <iostream>

using namespace std;

void UserFill(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    cin>>arr[i];
}

void Magic(int* arr, int size)
{
    cout<<"Solution:"<<endl;
    for(int i = 0; i<size;i++)
    {
        if(arr[i] % 3 == 0 || arr[i] % 5 == 0)
            cout<<i<<" - "<<arr[i]<<endl;
    }
}

int main()
{
    int arrSize, *fArr = nullptr;
    
    cout<<"Enter array size:"<<endl;
    cin>>arrSize;
    if(arrSize > 10 || arrSize <1)
    {
        cout<<"Wrong array size"<<endl;
        return 1;
    }
    fArr = new int[arrSize];
    
    UserFill(fArr, arrSize);
    Magic(fArr, arrSize);
    return 0;
}