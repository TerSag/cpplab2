#include <iostream>

int main() {
    double p;

    // Зчитування дійсного числа
    std::cout << "Введіть кількість балів (з точністю до одного знака після коми): ";
    std::cin >> p;

    // Перевірка діапазону та визначення оцінки
    if (p >= 0.0 && p <= 4.4) {
        std::cout << "Оцінка: 2.0 (незадовільно)" << std::endl;
    } else if (p >= 4.5 && p <= 5.2) {
        std::cout << "Оцінка: 3.0 (задовільно)" << std::endl;
    } else if (p >= 5.3 && p <= 6.2) {
        std::cout << "Оцінка: 3.5 (вище задовільно)" << std::endl;
    } else if (p >= 6.3 && p <= 7.2) {
        std::cout << "Оцінка: 4.0 (хороша)" << std::endl;
    } else if (p >= 7.3 && p <= 8.2) {
        std::cout << "Оцінка: 4.5 (вище добре)" << std::endl;
    } else if (p >= 8.3 && p <= 9.0) {
        std::cout << "Оцінка: 5.0 (дуже добре)" << std::endl;
    } else {
        std::cout << "Неправильна кількість пунктів!" << std::endl;
    }

    return 0;
}

