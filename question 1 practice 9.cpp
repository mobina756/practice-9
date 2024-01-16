#include <iostream>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // آرایه با اعداد صعودی
    int num, index = 0;

    std::cout << "Enter a number to insert into the array: ";
    std::cin >> num;

    // یافتن مکان مناسب برای درج عدد
    while (index < 9 && arr[index] < num) {
        index++;
    }

    // جابجایی عناصر برای ایجاد جای خالی برای درج عدد
    for (int i = 9; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // درج عدد در آرایه
    arr[index] = num;

    // چاپ آرایه نهایی
    std::cout << "Array after inserting the number: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}