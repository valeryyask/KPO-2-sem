#include <iostream>

using namespace std;

// Определение пользовательских типов данных с помощью typedef
typedef unsigned int area;    
typedef string name;  
typedef unsigned int population;
typedef string valuta;        

// Определение структуры country для хранения информации о стране
struct country {
    name n;    
    area a;      
    population b;    
    valuta v;        
};

// Перегрузка оператора ">" для сравнения объектов типа country по численности населения
bool operator > (country s1, country s2) {
    return (s1.b > s2.b);  // Возвращает true, если население первой страны больше населения второй
}

// Перегрузка оператора "<" для сравнения объектов типа country по площади
bool operator < (country s1, country s2) {
    return (s1.a < s2.a);  // Возвращает true, если площадь первой страны меньше площади второй
}


int main() {
    // Установка локали для корректного отображения русского текста в консоли
    setlocale(LC_ALL, "Russian");

    // Создание объектов типа country и инициализация их данными о странах
    country s1 = { "russia", 17151442, 144000000, "rub" };    // Россия
    country s2 = { "belarus", 207600, 9288000, "byn" };       // Беларусь

    // Сравнение стран по площади и вывод результата
    if (s1 < s2) {
        cout << "Первая страна имеет меньшую площадь\n";
    }
    else {
        cout << "Вторая страна имеет меньшую площадь\n";
    }

    // Сравнение стран по численности населения и вывод результата
    if (s1 > s2) {
        cout << "Население первой страны больше чем население второй\n";
    }
    else {
        cout << "Население второй страны больше или равно населению первой\n";
    }

    return 0;
}
