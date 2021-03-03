#include <iostream>
#include "testing.h"

int counter = 20;

void change(int &number, int status) {
    innerloop:
        std::cout << "Change" << std::endl;
}

int32_t Media::perform(int32_t arrs[], int16_t size)
{
    int32_t sum = 0;
    for (int16_t i = 0; i < size; i++)
    {
        sum += arrs[i];
    }
    return sum;
}
void test1()
{
    std::cout << sizeof(char) << std::endl; // 8 bit
    std::cout << sizeof(bool) << std::endl; // 8 bit

    std::cout << sizeof(short) << std::endl; // 16 bit

    std::cout << sizeof(float) << std::endl; // 32 bit
    std::cout << sizeof(int) << std::endl; // 32 bit 

    std::cout << sizeof(double) << std::endl; // 64 bit
    std::cout << sizeof(long) << std::endl; // 64 bit

    std::cout << sizeof(long long) << std::endl; // 64 bit

}

void test2() 
{
    std::cout << "Please type the size: ";    
    int16_t size;
    std::cin >> size;
    std::cout << "Please type the items: ";    
    int32_t nums[size];
    for (int32_t &num : nums) {
        std::cin >> num;
    }    
    std::cout << Media::perform(nums, size) << std::endl;
    
    // Media::perform(number);
}