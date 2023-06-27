#include<iostream>
using namespace std;

int main(){

    int arr[100];
    int n;
    cout<<"Enter the number of stuents: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i <n; i++)
    {
        cout<< arr[i] << " ,";
    }

    cout<<endl;
    
    return 0;
}