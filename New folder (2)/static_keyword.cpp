/* Static Varaibles-> Variables are declared as static in a func are created & initialised once for the lifetime of the program 
   Static Variables in a class are created & initialised once. They are shared by all objects of the class 
*/

# include <iostream>
# include <string>
using namespace std;

// Static Variables in func 
void func() {
    static int x = 0;
    cout << "X: " << x <<endl;
    x++;
}

int main(){
    func();
    func();
    return 0;
}