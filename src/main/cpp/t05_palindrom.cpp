//По данной строке определите, является ли она палиндромом 
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//kayak
//Sample Output:
//
//yes

#include "t05_palindrom.h"
#include <iostream>


using namespace std;

int t05_palindrom() {
    string a;
    bool flag = true;
    cin >> a;
    for(int i = 0; i < a.length() - i - 1; i ++) {
        if(a[i] != a[a.length() - i - 1]) flag = false;
    }
    if (flag)
        cout << "yes";
    else
        cout << "no";
}