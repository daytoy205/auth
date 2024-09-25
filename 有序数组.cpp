#include <iostream>  
#include <vector> // 使用std::vector而不是固定大小的数组，因为它更灵活  

// 假设我们不需要一个函数来保持数组有序，因为我们在初始化时就已经是有序的了  
// 但为了学习目的，我们可以添加一个向有序数组添加元素的函数（可选）  
void addElementToOrderedArray(std::vector<int>& array, int element) {
    // 找到正确的插入位置，保持数组有序  
    auto it = std::lower_bound(array.begin(), array.end(), element);
    array.insert(it, element);
}

int main() {
    // 创建一个有序的整数数组  
    std::vector<int> orderedArray = { 1, 3, 5, 7, 9 };

    // 打印有序数组  
    std::cout << "Ordered array: ";
    for (int num : orderedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 可选：向有序数组中添加一个新元素并保持其有序  
    // addElementToOrderedArray(orderedArray, 4); // 例如，添加4  

    // 如果我们添加了元素，我们可以再次打印数组来验证它是否仍然有序  
    // （但在这个例子中，我们没有添加，所以注释掉了）  

    return 0;
}