#include <iostream>  
#include <vector>  
#include <algorithm> // ����std::sort  

int main() {
    // ����һ���������������  
    std::vector<int> unorderedArray = { 5, 3, 9, 1, 4, 2, 8, 7, 6, 0 };

    // ��ӡԭʼ����  
    std::cout << "Original unordered array: ";
    for (int num : unorderedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // ������������������ֻ��չʾ�������飬����ע�͵��������У�  
    std::sort(unorderedArray.begin(), unorderedArray.end());

    // ��ӡ����������  
    std::cout << "Sorted array: ";
    for (int num : unorderedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}