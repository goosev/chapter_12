// strngbad.cpp -- методы класса StringBad
#include <cstring>
#include "strngbad.h"
using std::cout;
using std::endl;

//Инициализация статического члена класса
int StringBad::num_strings =0;

//Методы класса

//Создание StringBad из C-строки
StringBad::StringBad(const char* s)
{
    len = std::strlen(s);                           //установка размера
    str = new char[len + 1];                        //выделение памяти
    std::strcpy(str, s);                            //инициализация указателя
    num_strings++;                                  //счётчик объектов
    cout << num_strings << ":\"" << str
         << "\" object created" << endl;            //для отладки
}
StringBad::StringBad()                              //конструктор по умолчанию
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");                        //строка по умолчанию
    num_strings++;
    cout << num_strings << ":\"" << str
         << "\" default object created" << endl;    //для отладки
}
StringBad::~StringBad()                             //необходимый деструктор
{
    cout << "\"" << str << "\' object deleted, ";   //для отлакди
    --num_strings;                                  //является обязательным
    cout << num_strings << " left" << endl;          //для отладки
    delete [] str;                                  //является обязательным
}
std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}
