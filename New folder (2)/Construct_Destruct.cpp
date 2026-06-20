#include <iostream>
#include <string>
using namespace std;
class student{
public:
// data members
   string name;
   double *cgpaPtr;   // pointer

   student (string name, double cgpa) // constructor
   {
     this->name = name;
     cgpaPtr = new double;  // rahul cgpa
     *cgpaPtr = cgpa;     // pointer will store value of cgpa
   }
//    ~student() // Destructor
// {
//      cout << "Hi i am a destructor i am working for deleting";
//      delete cgpaPtr // it will delete the content in the pointer not the pointer 
//    }
   student (student &obj)  // copy constructor
   {
     this->name = obj.name;
     cgpaPtr = new double;     // new cgpa memory for neha
     *cgpaPtr = *obj.cgpaPtr;   // neha cgpa memory contains value of rahul cgpa i.e. 8.9
   }

   void getInfo()  // member function 
   {
    cout << "name: " << name << endl;
    cout << "cgpa: " << *cgpaPtr << endl;
   }
};
int main (){
    student s1 ("shraddha", 8.99);  // s1 -> object 
    s1.getInfo();
    student s2(s1);
    s2.name = "Neha";
    *(s2.cgpaPtr) = 9.2;     // deep copy 
    s2.getInfo();
    return 0;
}




