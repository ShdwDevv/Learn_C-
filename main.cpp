#include <iostream>
using namespace std;
class Shape{
    public:
    float radius,length,breath,height;
};
class Triangle: public Shape{
    public:
    void getValue(){
        cout<<"Enter Breath : ";
        cin>>breath;
        cout<<"Enter Height : ";
        cin>>height;
    }
    void area(){
        cout<<"Area of Triangle: "<<0.5 * breath * height<<endl;
    }
};
class Square: public Shape{
    public:
    void getValue(){
        cout<<"Enter Side : ";
        cin>>length;
    }
    void area(){
        cout<<"Area of Square : "<<length*length<<endl;
    }
};
class Rectangle: public Shape{
    public:
    void getValue(){
        cout<<"Enter Breath : ";
        cin>>breath;
        cout<<"Enter Length : ";
        cin>>length;
    }
    void area(){
        cout<<"Area of Rectangle : "<<length*breath<<endl;
    }
};
class Circle: public Shape{
    public:
    void getValue(){
        cout<<"Enter Radius : ";
        cin>>radius;
    }
    void area(){
        cout<<"Area of Circle : "<<3.14*radius*radius<<endl;
    }
};
int main(){
    Triangle t;
    Rectangle r;
    Square s;
    Circle c;
    t.getValue();
    t.area();
    r.getValue();
    r.area();
    s.getValue();
    s.area();
    c.getValue();
    c.area();
}