//Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа.
// Если соседних элементов одного знака нет - не выводите ничего.
// Если таких пар соседей несколько - выведите первую пару.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива. Все числа отличны от нуля.
//Формат выходных данных
//        Выведите ответ на задачу. Элементы выводятся в порядке неубывания их индексов.
//Sample Input:
//
//5
//-1 2 3 -1 -2
//Sample Output:
//
//2 3

#include "t04_neighbors.h"
#include <iostream>


using namespace std;

int t04_neighbors() {
    int n;
    cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    bool flag = true;
    int i = 0;
    while (++i < (n - 1) && flag) {
        if ( a[i] * a[i + 1] > 0) {
            cout << a[i] << ' ' << a[i + 1];
            flag = 0;
        }
    }
}
