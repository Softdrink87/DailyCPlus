/*
#include <iostreram>

int main() {
    int arr_size;
    std::cout << "array size : ";
    std::cin >> arr_size;
    int *list = new int[arr_size];
    for (int i=0; i < arr_size; i++)
    {
        std::cin >> list[i];
    }
    for (int i =0; i < arr_size; i++) {
        std::cout << i << "th element of list : " << list[i] << std::endl;
    }
    delete[] list;
    return 0;
}
*/

#include <iostream>

int main() {
    int array_size;
    std::cin >> array_size;
    int* list = new int[array_size];
    for(int i =0; i<array_size; i++)
    {
        std::cout << list[i] << std::endl;
    }

    delete[] list;
    return 0;
}