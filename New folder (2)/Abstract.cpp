/* Abstraction -> Abstract classes are used to provide a base class from which other classes are derived
They cannot be instantiated -> means their objects cannot be created ,  instance = obj 
Abstract classes are used to define blueprint */ 

# include <iostream>
# include <string>
using namespace std;

class Shape  // Abstract class created -> blueprint is defined
{
    virtual void draw ()=0;
};

class Circle: public Shape  //Shape class is inherited 
{
    public:
       void draw (){
        cout << "Drawing a circle";
       }

};
int main (){
    Circle c1;
    c1.draw();
}