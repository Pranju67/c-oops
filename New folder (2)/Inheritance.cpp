// Inheritance -> Properties & members func of base(parent) class are passed to the derived (child) class
# include <iostream>
# include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person (){
      cout << "I am parent constructor" << endl;
    }
};

class Student : public Person {
public:
    int rollno;

    Student (){
        cout << "I am a child constructor" << endl;
    }

    void getInfo() {
        cout << "Name: " << name <<endl;
        cout << "Age: " << age <<endl;
        cout << "rollno: " << rollno <<endl;
    }
};

int main ()
{
    Student s1;
    s1.name = "Pranjal";
    s1.age = 23;
    s1.rollno = 52;
    s1.getInfo();
    return 0;
}