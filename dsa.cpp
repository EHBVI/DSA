#include<iostream>
using namespace std;

int main(){

    int arr[100];
    int m;
    cout<<"Enter the number of stuents: ";
    cin>>m;

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i <m; i++)
    {
        cout<< arr[i] << " ,";
    }

    cout<<endl;
    
    return 0;
}