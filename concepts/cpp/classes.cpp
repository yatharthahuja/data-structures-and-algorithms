#include <iostream>

using namespace std;

class MyClass {  // Members are private by default
    int hidden;  // private
};

struct MyStruct {  // Members are public by default
    int visible;   // public
};

// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class, not inherited
// protected - members cannot be accessed from outside the class, but can be accessed in inherited classes.


class BaseClass {
public:
    void publicMethod() { std::cout << "Public method\n"; }
protected:
    void protectedMethod() { std::cout << "Protected method\n"; }
private:
    void privateMethod() { std::cout << "Private method\n"; }
};

// Struct inheritance
struct DerivedStruct : BaseClass { // default for all members in a struct is public
    void testAccess() {
        publicMethod();     // Accessible
        protectedMethod();  // Accessible
        // privateMethod(); // Not accessible
    }
};

// Class inheritance
class DerivedClass : BaseClass { // default for all members in a class is private
    void testAccess() {
        // publicMethod();     // Not accessible (private inheritance)
        // protectedMethod();  // Not accessible (private inheritance)
        // privateMethod();    // Not accessible
    }
};
