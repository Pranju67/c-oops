#include <iostream>
#include <string>
using namespace std;


class Teacher{
private: 
    double salary;
public:
   string name;
   string dept;
   int ID;
   string sub;
//    double salary;

// Diff types of constructors which has name are called as constructor overloading
// non-parameterized constructor
   Teacher() {
     cout << " Hi, I am constructor\n";
   }

// parameterised constructor
Teacher (string n, string d, string s,double sal) {
     name = n;
     dept = d;
     sub = s;
     salary = sal;
}
Teacher(Teacher &orgObj){
    cout << "I am a custom copy constructor \n";
     this->name = orgObj.name;
     this->dept = orgObj.dept;
     this->sub = orgObj.sub; 
     this->salary = orgObj.salary;
}
   void setSalary(double s){
   salary = s;
   }
    
   double getSalary(){
      return salary;
   }

   void getInfo(){
    cout << "name: " << name <<endl;
    cout << "subject: " << sub <<endl;
   }
};

int main () {
    // Teacher t1;
    // t1.name = "Pranjal";
    // t1.sub = "CS";
    // t1.ID = 12345;
    // t1.dept = "EXTC";
    // t1.setSalary(25000);

    // for parameterised
    Teacher t1("Pranjal","EXTC","CS",25000);
    cout << t1.name <<endl;
    cout << t1.getSalary() <<endl;
    t1.getInfo();
    
    // Teacher t2(t1);  //by default copy constructor in c++
    // t1.getInfo();

    // Teacher t2(t1);  // by default custom copy constructor in c++
    // t2.getInfo();


    // pointers concept
    // int x =10;
    // int *ptr = &x;
    // cout << &x << endl;
    // cout << ptr;
    return 0;
   
}