//В сети интернет каждому компьютеру присваивается четырехбайтовый код, 
// который принято записывать в виде четырех чисел, 
// каждое из которых может принимать значения от 0 до 255, разделенных точками.
// Вот примеры правильных IP-адресов:
//127.0.0.0
//192.168.0.1
//255.0.255.255
//Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.
//
//Входные данные
//
//Программа получает на вход строку из произвольных символов.
//
//Выходные данные
//
//Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.
//
//Примечание
//
//Для перевода из строки в число удобно пользоваться функцией stoi,
// которая принимает на вход строку, а возвращает число.
//
//Sample Input:
//
//127.0.0.1
//Sample Output:
//
//YES

#include "t07_ip.h"
#include <iostream>
#include <string>


using namespace std;

int t07_ip() {
    string a;
    cin >> a;
    bool flag = true;
    if (a[0] == '.') flag = false;
    for (int i = 0; i < 4; i++) {
        if (flag && a != "") {
            size_t ind = 0;

            int byte = std::stoi(a, &ind, 10);
            if (ind + 1 < a.length())
                a = a.substr(ind + 1);
            else {
                if (a[a.length() - 1] == '.') {

                    flag = false;
                }
                a = "";
            }
            if (a[0] == '.' || byte < 0 || byte > 255 || (i == 3 && ind == a.length() - 1) || (i != 3 && ind == 0))
                flag = false;
        } else flag = false;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}