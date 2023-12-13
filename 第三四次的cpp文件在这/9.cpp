#include <iostream>
using namespace std;

// 排序函数，使用冒泡排序
void sortArray(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // 交换两个元素的值
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "请输入数组元素个数: ";
    cin >> n;

    int* arr = new int[n];

    cout << "请输入数组元素: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }
    cout << "指针及指向的内容为：";
    for (int i = 0; i < n; i++) {
        cout << arr + i << ": " << *(arr + i) << endl;
    }

    sortArray(arr, n);

    cout << "排序后的数组元素为：";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}