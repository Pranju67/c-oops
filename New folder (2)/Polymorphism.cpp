/*poly -> multiple , morph -> forms 
Ability of objects to take diff forms or behave in diff ways depending on the context in whcih they are used 
*/

# include <iostream>
# include <string>
using namespace std;

//                                                 Compiler polymorphism 
class Student    // Constructor overloading
{
public:
    string name;
    int age;

    Student () {
        cout << "non parameterised constructor\n";
    }

    Student (string name, int age){
        this->name = name;
        this->age = age;
        cout << "parameterrized constructor\n";
        cout << "Name: " << name <<endl;
        // cout << "Age: " << age <<endl;
    }
};

class Print  // Function overloading
{
public:
  void show(int x){
    cout <<"I am integer\n"; 
    cout << "int: " << x <<endl;
  }
  void show(char ch){
    cout <<"I am character\n"; 
    cout << "char:  "<< ch <<endl;
  }
};

int main ()
{
  Print p1;
  p1.show('&');
  Student s1("Tony stark",25);
  s1.name;
  return 0;
}


//                                                       Run time polymorphism
// 1. Function overriding -> Parent and Child both contain same func with diff implementation
// class Parent 
// {
// public:
//    void getInfo(){
//     cout << "This is parent class\n";
//    }
// };
// class Child {
// public:
//   void getInfo(){
//     cout << "This is child class\n";
//   }
// };

// int main(){
//     Child c1;  // The parent is override by child class
//     c1.getInfo();
//     return 0;
// }


