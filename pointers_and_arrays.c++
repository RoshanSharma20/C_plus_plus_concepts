#include <iostream>
using namespace std;
int getSum(int *arr, int n)
{
    cout << "size of passed pointer is:" << sizeof(arr) << endl; // gives the size of the pointer
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return sum;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr << endl;     // the arr variable is itself a pointer to the first element of the array in the memory
    cout << &arr << endl;    // also give the same answer as the previous statement
    cout << &arr[0] << endl; // gives the address of the fitst element of the array
    cout << arr + 1 << endl;
    int *ptr = arr; // assigning of the array to a pointer
    // internal implementation of arrays is--> arr[i]=*(arr+i)
    // important concept i[arr]=*(i+arr)

    // character arrays
    char ch[6] = "abcde";
    cout << ch << endl; // instead of printing the first address of the ch array it prints the whole array

    // passing pointers to a function
    cout << "sum of the array is : " << getSum(arr, 5);
}