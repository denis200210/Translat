#include <iostream>
#include <cmath>
#include "Function.h"

using namespace std;

int main() {

    cout <<"Input text (а..я): ";// вводим текст
    cin.getline(str,500);// считываем строку
    cout << "Output: ";
    translate(str, angl, rus);  // наш написанный транслит
    delete [] str;// очищаем память
    return 0;
}
