#include <iostream>

using namespace std;


// & : address-f operation
// - When used before a variable name, it returns the memory address of that variable.
// - When used in a variable declaration, it creates a reference.

// * : dereference opertion
// - When used with a pointer, it accesses the value at the address stored in the pointer.
// - When used in a variable declaration, it creates a pointer.
// - dereferencing means accessing the value stored at the memory address held by a pointer
// - dereferencing (* ptr) a null pointer is invalid, as it point to (holds) a null address 


// POINTERS
// - stores the address of an instance of the relevant data type
// - have their own memory, which depends on what object type they are storing
// - helpful when need to represent absence of a value (eg. nullptr), as they are more flexible

// REFERENCES
// - reference 'points' to instance's location, it's a reference/mirror to the instance itself
// - any changes made to reference reflect on the object it is mirroring
// - dont need any extra memory apart from that of the referenced object
// - its memory size is the defualt memory space of the machine. eg. 4bytes in a 32bit machine

int main(){
    int num = 42;
    int num2 = 5;
    int * num_ptr = &num;
    int & num_ref = num;

    cout << *num_ptr << endl;
    cout << num_ref << endl;

    num_ptr = &num2;
    num_ref = num2;

    cout << *num_ptr << endl;
    cout << num_ref << endl;

    num2 = 8;

    cout << *num_ptr << endl;
    cout << num_ref << endl;

    cout << num << endl;
    cout << num2 << endl;

}