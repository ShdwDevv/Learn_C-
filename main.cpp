#include <iostream>
using namespace std;
int main(){
    int n,val;
    cout<<"Enter the size of the Array : ";
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"Enter the value to search : ";
    cin>>val;
    for(int i = 0; i < n;i++){
        if(arr[i] == val){
            cout<<"Value found at index "<<i;
            return 0;
        }
    }
    cout<<"Value Not found :(";
    return 0;
}