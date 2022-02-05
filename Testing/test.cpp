
#include "stdio.h"
#include "stdlib.h"
#include <iostream>
#include <functional>

void foo(int* a){
    *a += 32;
}

int main(){
    int a = 2;
    int* f_ptr = nullptr;
    f_ptr = &a;

    foo(f_ptr);
    std::cout << *f_ptr;
    return 0;
}