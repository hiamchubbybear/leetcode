#include <iostream>
#include <ctime>

int main() {
    clock_t start_time = clock();  // Bắt đầu đo thời gian

    for (int i = 0; i < 100000000; i++) {
        // Vòng lặp chỉ đơn giản là tăng biến đếm
    }

    clock_t end_time = clock();  // Kết thúc đo thời gian
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Thời gian thực thi: " << execution_time << " giây" << std::endl;

    return 0;
}
