#include <iostream>

using namespace std;

// Dynamic Allocation 
// - memory determined at runtime. we dont know how much memory until it runs.
// - allowing for flexible memory usage based on the needs of the program at that moment.
// - by default vectors from <std::vectors> are dynamic 

// Static Allocation 
// - memory allocated at compile time. we know ho much memory before it runs.
// - arrays are statis by defualt


int main(){
    int numbers[5]; //static declaration - unintialized - garbage values
    int* dyn_arr = new int[10]; // dynamic declaration - heap allocation

    
    int nums[] = {1, 2, 3, 4, 5}; // static declaration - intitalized


    int * arr_ptr = 
}