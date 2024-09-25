#include <iostream>  
#include <vector>  
#include <algorithm> // 用于std::sort  

int main() {
    // 创建一个无序的整数数组  
    std::vector<int> unorderedArray = { 5, 3, 9, 1, 4, 2, 8, 7, 6, 0 };

    // 打印原始数组  
    std::cout << "Original unordered array: ";
    for (int num : unorderedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 对数组进行排序（如果你只想展示无序数组，可以注释掉以下两行）  
    std::sort(unorderedArray.begin(), unorderedArray.end());

    // 打印排序后的数组  
    std::cout << "Sorted array: ";
    for (int num : unorderedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}