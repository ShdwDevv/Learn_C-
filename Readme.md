# In this repo you will learn the basics  of C++
* Cheat sheet - [Click here](https://whimsical.com/object-oriented-programming-cheatsheet-by-love-babbar-YbSgLatbWQ4R5paV7EgqFw)
* Course - [Click Here](https://www.scaler.com/topics/course/cpp-beginners/)
* STL - [Click Here](https://www.youtube.com/watch?v=RRVYpIET_RU)
## Normal instruction
* To compile cpp file (It will create a file named "a.out")
```shell
g++ fname.cpp
```
* To run
```shell
./a.out
```
## Hello World
* cout - console output
* << insertion operator
```cpp
#include <iostream>
using namespace std;
int main(){
    cout<<"Hello World";
    return 0;
}
```
## Use of namespace std in c++
* :: is scope resolution operator
### Without namespace
* Here we need to  use std namespace (To use the method from iostream we need to  use std::)
```c++
#include <iostream>
int main(){
    int a;
    std::cout<<"Enter A : ";
    std::cin>>a;
    std::cout<<"A value is : "<<a;
    return 0;
}
```
* In large code it will be more , So that we are using the std namespace , and oterh way to import only cin , cout
```c++
#include <iostream>
using std::cin,std::cout;
int main(){
    int a;
    cout<<"Enter A : ";
    cin>>a;
    cout<<"A value is : "<<a;
    return 0;
}
```
### Why we use namespace - to avoid name conflict 
* string is from std namespace
```cpp
#include <iostream>
using namespace std;
namespace name1{
    string name = "Arshath";
    int age = 25;
}
namespace name2{
    string name = "Arshath";
}
using namespace name2;
int main(){
    int a;
    cout<<name1::name<<endl;
    cout<<name1::age<<endl;
    cout<<name<<endl;
    return 0;
}
```
```
Arshath
25
Arshath
```
## To get user Input
* ">>" - Extraction operator
```c++
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter A and B : ";
    cin>>a>>b;
    cout<<"A and B are : "<<a<<" "<<b<<endl;
    return 0;
}
```
```
Enter A and B : 12 42
A and B are : 12 42
```
### With different Datatypes
```c++
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Integer : ";
    cin>>a;
    string b;
    cout<<"Enter String : ";
    cin>>b;
    char c;
    cout<<"Enter Character : ";
    cin>>c;
    float d;
    cout<<"Enter Float : ";
    cin>>d;
    cout<<"The values are .. "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
}
```
```
Enter Integer : 22
Enter String : Sana
Enter Character : D
Enter Float : 44.4
The values are .. 22 Sana D 44.4 
```
### String Issue
* Like C, It won't consider the values after space
```c++
#include <iostream>
using namespace std;
int main(){
    string s,s2,s3;
    cout<<"Enter string : ";
    cin>>s;
    cin>>s2;
    cin>>s3;
    cout<<s<<" "<<s2<<" "<<s3<<endl;
}
```
```
Enter string : Arshath is Good
Arshath is Good
```
* To rectify this , we use getline function 
* syntax : getline(input stream, variable name)
```c++
#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter Para : ";
    getline(cin,s);
    cout<<s<<endl;
}
```
```
Enter Para : c++ is good to learn 
c++ is good to learn
```
## std::string class in C++
1. Input function
1. Capacity function
1. Iterator function
1. Manipulating function
```c++
#include <iostream>
using namespace std;
int main(){
    string s = "Welcome"; // Welcome
    cout<<s<<endl;
    // since string is a class we can initialize it by creating a object
    string s2("welcome");
    cout<<s2<<endl; // welcome
    // concatenation
    string fname = "Arshath";
    string lname = "Ahamed";
    cout<<fname+" "+lname<<endl; // Arshath Ahamed
    string fullName = fname.append(" ").append(lname);
    cout<<fullName<<endl;// Arshath Ahamed
    cout<<2+" "+4<<endl; // empty space
    // Accessing
    cout<<fullName[0]<<endl; // A
    fullName[0] = 'a';
    cout<<fullName<<endl; // arshath Ahamed
} 
```
* Input function : we use getline() . If we get any issue related to getting input in string / char , use **fflush(stdin)** to delete the garbage value 
```c++
#include <iostream>
using namespace std;
int main(){
    string s = "stack";
    //to add at last
    s.push_back('s');
    cout<<s<<endl; // stacks
    // To delete from last
    s.pop_back();
    cout<<s<<endl; // staack
    return 0;
}
```
### Capacity Function  
* we can use both <= and != in for loop 
```c++
#include <iostream>
using namespace std;
int main(){
    string s("stack");
    cout<<s<<endl;
    cout<<"Size : "<<s.size()<<endl;
    cout<<"Length : "<<s.length()<<endl;
    cout<<"Max Size : "<<s.max_size()<<endl;
}
```
```
stack
Size : 5
Length : 5
Max Size : 4611686018427387903
```
### Iterator Function
```c++
#include <iostream>
using namespace std;
int main(){
    string s("stack");
    string::iterator it;
    for(it = s.begin() ; it <= s.end();it++) cout<<*it<<endl;
    // for reverse
    string::reverse_iterator it2;
    for(it2 = s.rbegin();it2 != s.rend();it2++) cout<<*it2<<endl;
}
```
### Mamipulating Function
```c++
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
```
```
String 1 : adb
String 2 : bad
After Swapping...
String 1 : bad
String 2 : adb
```