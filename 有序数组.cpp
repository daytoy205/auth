#include <iostream>  
#include <vector> // ʹ��std::vector�����ǹ̶���С�����飬��Ϊ�������  

// �������ǲ���Ҫһ����������������������Ϊ�����ڳ�ʼ��ʱ���Ѿ����������  
// ��Ϊ��ѧϰĿ�ģ����ǿ������һ���������������Ԫ�صĺ�������ѡ��  
void addElementToOrderedArray(std::vector<int>& array, int element) {
    // �ҵ���ȷ�Ĳ���λ�ã�������������  
    auto it = std::lower_bound(array.begin(), array.end(), element);
    array.insert(it, element);
}

int main() {
    // ����һ���������������  
    std::vector<int> orderedArray = { 1, 3, 5, 7, 9 };

    // ��ӡ��������  
    std::cout << "Ordered array: ";
    for (int num : orderedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // ��ѡ�����������������һ����Ԫ�ز�����������  
    // addElementToOrderedArray(orderedArray, 4); // ���磬���4  

    // ������������Ԫ�أ����ǿ����ٴδ�ӡ��������֤���Ƿ���Ȼ����  
    // ��������������У�����û����ӣ�����ע�͵��ˣ�  

    return 0;
}