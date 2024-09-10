#include <iostream>
using namespace std;
int main(){
    string s1 = "adb";
    string s2 = "bad";
    cout<<"String 1 : "<<s1<<endl;
    cout<<"String 2 : "<<s2<<endl;
    s1.swap(s2);
    cout<<"After Swapping..."<<endl;
    cout<<"String 1 : "<<s1<<endl;
    cout<<"String 2 : "<<s2<<endl;
}