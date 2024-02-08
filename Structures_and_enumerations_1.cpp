#include <iostream>
enum {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {

    int number = 1;
    while (number) {
        std::cout << "\nВедите номер месяца: ";
        std::cin >> number;
        switch (number) {
        case (static_cast<int>(January)):
            std::cout << "Январь";
            break;
        case (static_cast<int>(February)):
            std::cout << "Февраль";
            break;
        case (static_cast<int>(March)):
            std::cout << "Март";
            break;
        case (static_cast<int>(April)):
            std::cout << "Апрель";
            break;
        case (static_cast<int>(May)):
            std::cout << "Май";
            break;
        case (static_cast<int>(June)):
            std::cout << "Июнь";
            break;
        case (static_cast<int>(July)):
            std::cout << "Июль";
            break;
        case (static_cast<int>(August)):
            std::cout << "Август";
            break;
        case (static_cast<int>(September)):
            std::cout << "Сентябрь";
            break;
        case (static_cast<int>(October)):
            std::cout << "Октябрь";
            break;
        case (static_cast<int>(November)):
            std::cout << "Ноябрь";
            break;
        case (static_cast<int>(December)):
            std::cout << "Декабрь";
            break;
        case (0):
            std::cout << "До свидания";
            break;
        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }

    }
}