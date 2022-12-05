#include <iostream>

using namespace std;

void change(int *x, int *y) {
    int mid = *x; //функция, которая будет менять местами два соседних элемента обращаясь к зарезервированной памяти
    *x = *y;
    *y = mid;
}

int main() {
    int arr[10]={-12, 2545, 3, 26, 86, 5, 32, 44, 44, 8};
    cout << "unsorted array" << endl;
    for (int i = 0; i < 10; i++) {// появляется массив, сначала выводим его в несортированном виде
        cout << arr[i] << " ";
    }
    cout << " " << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j <
                            10; j++) {               // непосредственно сама пузырьковая сортировка. Сравниваем два соседних элемента и меняем их местами в случае чего
            if (arr[i] > arr[j]) {
                change(&arr[i], &arr[j]);
            }
        }
    }
    cout << endl << "sorted array" << endl;  // выводим сортированный массив
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}