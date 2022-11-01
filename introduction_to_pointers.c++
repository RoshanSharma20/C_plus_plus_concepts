#include <iostream>
using namespace std;
int main()
{
    // syntax of pointers
    // datatype *pointer_name = &variable_name;
    int num = 5;
    int a = 4;
    int *ptr = &num; // stores the address of num variable
    // ptr stores address in hexadecimal format therefore it has size of 8
    cout << ptr << endl;  // gives the address of variable stored in pointer
    cout << *ptr << endl; // using dereference the value of the variable whose address is stored in the pointer can be accessed

    // Bad practice
    // int *p; ->this may initialize the pointer with a read-only address and using this pointer we can update the values in the memory,which can be problematic
    // instead we can declare the pointer to a null pointer or 0
    int *p = NULL;
    p = &a; // pointers can be declared and then initialized using the following syntax method

    // copying of pointers
    int *q = p; // points to variable a,same as pointer p
}