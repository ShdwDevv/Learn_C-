# In this repo you will learn the basics  of C++
* Prerequisite - Learn C language - [link](https://github.com/ShdwDevv/C_Program/tree/main/Notes)
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
* To runn in windows 
```shell
a.exe
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
### Manipulating Function
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
## If statement
```c++
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter A and B : ";
    cin>>a>>b;
    if(a > b) cout<<a<<" is Greater";
    if(b > a) cout<<b<<" is Greater";
    if(a == b) cout<<"Both "<<a<<" and "<<b<<" are equal";
    return 0;
}
```
## If and else Statement
```c++
#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a Character : ";
    cin>>c;
    if(
        c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
    ){
        cout<<c<<" is a vowel";
    }
    else{
        cout<<c<<" is not a vowel";
    }
    return 0;
}
```
## else if statement
```
Else If Ladder in C++ :
 
A certain grade of steel is graded according to the following conditions:
 
1. Hardness must be greater than 50.
2. Carbon content must be less than 0.7
3. Tensile strength must be greater than 5600
 
The grades are as follows:
 
Grade is 10, if all three conditions are met.
Grade is 9, if conditions 1 and 2 are met.
Grade is 8, if conditions 2 and 3 are met.
Grade is 7, if conditions 1 and 3 are met.
Grade is 6, if only one condition is met.
Grade is 5, if none of the conditions are met.
```
```c++
#include <iostream>
using namespace std;
int main(){
    int hard,tensile;
    float carbon;
    cout<<"Enter Hardness : ";
    cin>>hard;
    cout<<"Enter Carbon content rate : ";
    cin>>carbon;
    cout<<"Enter Tensile strength : ";
    cin>>tensile;
    if(hard > 50 && carbon < 0.7 && tensile > 5600) cout<<"Grade is 10"<<endl;
    else if(hard > 50 && carbon < 0.7) cout<<"Grade is 9"<<endl;
    else if(carbon < 0.7 && tensile > 5600) cout<<"Grade is 8"<<endl;
    else if(hard > 50 && tensile > 5600) cout<<"Grade is 7"<<endl;
    else if(hard > 50 || carbon < 0.7 || tensile > 5600) cout<<"Grade is 6"<<endl;
    else cout<<"Grade is 5"<<endl;
    return 0;
}
```
## Nested if in C++
```
age>=18:
    Male:
        Room-5
    Female:
        Room-6
Not Eligible
```
```c++
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Age : ";
    cin>>age;
    if(age >= 18){
        char gender;
        cout<<"Enter Gender : ";
        cin>>gender; // here if we give 'ma' then it  will  consider the first character only and make the gender male
        if(gender == 'M' || gender == 'm') cout<<"Go to room 5"<<endl;
        else if(gender == 'F' || gender == 'f') cout<<"Go to room 6"<<endl;
        else cout<<"Invalid Gender"<<endl;
    }
    else{
        cout<<"You are not eligible for the vote"<<endl;
    }
    return 0;
}
```
## Switch Statement
```c++
#include <iostream> 
using namespace std;
int main(){
    int m;
    cout<<"Enter Month Count : ";
    cin>>m;
    switch(m){
        case 1:cout<<"January"<<endl;break;
        case 2:cout<<"February"<<endl;break;
        case 3:cout<<"March"<<endl;break;
        case 4:cout<<"April"<<endl;break;
        case 5:cout<<"May"<<endl;break;
        case 6:cout<<"June"<<endl;break;
        case 7:cout<<"July"<<endl;break;
        case 8:cout<<"August"<<endl;break;
        case 9:cout<<"September"<<endl;break;
        case 10:cout<<"October"<<endl;break;
        case 11:cout<<"November"<<endl;break;
        case 12:cout<<"December"<<endl;break;
        default : cout<<"Invalid Month"<<endl;
    }
}
```
## Group Switch Statement
* we need to print the number of days in thhe respective month
```c++
#include <iostream> 
using namespace std;
int main(){
    int m;
    cout<<"Enter Month Count : ";
    cin>>m;
    switch(m){
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:cout<<"31 Days"<<endl;break;
        case 4:case 6:case 9:case 11:cout<<"30 Days"<<endl;break;
        case 2:cout<<"28/29 Days"<<endl;break;
        default : cout<<"Invalid Month"<<endl;
    }
}
```
## Salary calculation using if statement
```
If his basic salary is less than Rs. 1500,
then HRA = 10% of basic salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500,
then HRA = Rs. 500 and DA = 98% of basic salary.
If the employee's salary is input through the keyboard
write a program to find his gross salary
```
```c++
#include<iostream>
using namespace std;
int main(){
    float bs,gs,hra,da;
    cout<<"Enter Basic Salary : ";
    cin>>bs;
    if(bs < 1500){
        hra = bs * 10 / 100;
        da = bs * 90 / 100;
    }
    else{
        hra = 500;
        da = bs * 98 / 100;
    }
    gs = bs + hra + da;
    cout<<"Basic Salary         : "<<bs<<endl;
    cout<<"House Rent Allowance : "<<hra<<endl;
    cout<<"Dearness Allowance   : "<<da<<endl;
    cout<<"Gross Salary         : "<<gs<<endl;
    return 0;
}
```
```
Enter Basic Salary : 1000
Basic Salary         : 1000
House Rent Allowance : 100
Dearness Allowance   : 900
Gross Salary         : 2000
```
## Insurance Eligibility Test
```
A company insures its drivers in the following cases:
    a.	If the driver is married.
    b.	If the driver is unmarried, male & above 30 years of age.
    c.	If the driver is unmarried, female & above 25 years of age.
```
```c++
#include <iostream>
using namespace std;
int main(){
    char marital,gender;
    int age;
    cout<<"Enter Marital Status (M as Married | U as Unmarried) : ";
    cin>>marital;
    if(marital == 'M' || marital == 'm'){
        cout<<"You are eligible";
    }
    else if(marital == 'U' || marital == 'u'){
        cout<<"Enter The Gender (M for Male and F for Female) : ";
        cin>>gender;
        cout<<"Enter Your Age : ";
        cin>>age;
        if((gender == 'M' || gender == 'm')){
            if(age >= 30){
                cout<<"You are eligible";
            }
            else{
                cout<<"You are not eligible";
            }
        }
        else if((gender == 'F' || gender == 'f')){
            if(age >= 25){
                cout<<"You are eligible";
            }
            else{
                cout<<"You are not eligible";
            }
        }
        else{
            cout<<"Invalid Gender Input";
        }
    }
    else{
        cout<<"Invalid Marital Input";
    }
    return 0;
}
```
```
Enter Marital Status (M as Married | U as Unmarried) : U
Enter The Gender (M for Male and F for Female) : f
Enter Your Age : 28
You are eligible
```
## Library Fine Calculation
```
A library charges a fine for every book returned late.
For first 5 days the fine is 50 paise,
for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees.
If you return the book after 30 days your membership will be cancelled.
Write a program to accept the number of days the member is late to return
the book and display the fine or the appropriate message.
 
>0 <=5  /0.50
>=6 <=10  /1
>10 <=30 /5
>30
```
```cpp
#include <iostream>
using namespace std;
int main(){
    int days=-1;
    while(days < 0){
        cout<<"Enter the No of Days : ";
        cin>>days;
    }
    if(days > 0 && days <= 5){
        cout<<"Per Day Fine Amount is : 50 paise"<<endl;
        cout<<"The fine amount is : "<<days*0.5;
    }
    else if(days <= 10){
        cout<<"Per Day Fine Amount is : 1 rupee"<<endl;
        cout<<"The fine amount is : "<<days*1;
    }
    else if(days <= 30){
        cout<<"Per Day Fine Amount is : 5 rupee"<<endl;
        cout<<"The fine amount is : "<<days*5;
    }
    else{
        cout<<"Your membership is cancelled";
    }
    return 0;
}
```
## While Loop
```cpp
#include <iostream>
using namespace std;
int main(){
    int i = 1,limit;
    cout<<"Enter the limit : ";
    cin>>limit;
    while(i <= limit){
        cout<<i<<endl;
        i++;
    }
}
```
## Do - While loop
```cpp
#include <iostream>
using namespace std;
int main(){
    int limit;
    cout<<"Enter the limits : ";
    cin>>limit;
    int i = 1;
    do{
        if(i % 2 == 0) cout<<i<<endl;
        i++;
    }while(i <= limit);
}
```
## For loop
```cpp
#include <iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter Table Name : ";
    cin>>t;
    for(int i = 1; i <= 10;i++){
        cout<<t<<" * "<<i<<" = "<<t*i<<endl;
    }
    return 0;
}
```
## For Each Loop
* auto means that it will automatically adaped the the element's datatype
```cpp
#include <iostream>
using namespace std;
int main(){
    int arr[] = {33,21,45,66,23,77};
    for(auto a : arr){
        cout<<a<<endl;
    }
}
```
## Sum of N number
```cpp
#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter Range : ";
    cin>>r;
    int sum = 0;
    for(int i = 0 ; i <= r;i++){
        sum+=i;
    }
    cout<<"Sum of "<<r<<" numbers : "<<sum<<endl;
    cout<<"Sum of "<<r<<" numbers : "<<(r * (r+1))/2;
}
```
## Factors of a Given Number    
```cpp
#include <iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"The factors of "<<n<<" are : "<<endl;
    for(int i = 1; i <= n;i++){
        if(n % i == 0) cout<<i<<" ";
    }
}
``` 
```cpp
Enter the Number : 10
The factors of 10 are :
1 2 5 10
```
### Armstrong Number between 100 and 999
Op : 153 370 371 407
```cpp
#include <iostream>
using namespace std;
int main(){
    for(int val = 100; val <= 999;val++){
        int temp = val;
        int sum = 0;
        while(temp > 0){
            int d = temp % 10;
            sum += (d * d * d);
            temp = temp / 10;
        }
        if(sum == val) cout<<sum<<" ";
    }
}
```
## Prime Number between 0 - 100
```cpp
#include <iostream>
using namespace std;
int main(){
    for(int val = 1; val <= 100;val++){
        int count = 0;
        for(int i = 1;i <= val;i++){
            if(val % i == 0) count++;
        }
        if(count == 2) cout<<val<<" ";
    }
}
```
## Arrays
```cpp
#include <iostream>
using namespace std;
int main(){
    int arr1[5] = {10,20}; // 10 20 0 0 0 
    int arr2[] = {1,2,3,4,5,6};
    for(int n : arr1) cout<<n<<" ";
    cout<<"\n";
    for(int n : arr2) cout<<n<<" ";
    cout<<"\nLength : "<<sizeof(arr2) / sizeof(int);
}
```
```
10 20 0 0 0 
1 2 3 4 5 6
Length : 6
```
## Search an element in an Array
```cpp
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
```