#include <iostream>
#include <ctime>
using namespace std;

int* delete0(int* arr, int* size) // ф-я удаления нулей
{
    int* rem = remove(arr, arr + *size, 0);
    if (rem == size)
        return arr;
    *size = rem - arr;
    int* new_arr = new int[*size]; //создание нового массива
    memcpy(new_arr, arr, sizeof(int) * (*size));
    delete[] arr;
    return new_arr;
}

int* insertn(int* arr, int* size, int* N, const int value) // ф-я замены элемента
{
    if (N >= arr && N < (arr + *size))
    {
        int* new_arr = new int[*size + 1];
        int new_size = N - arr + 1;
        memcpy(new_arr, arr, sizeof(int) * new_size);
        *(new_arr + new_size) = value;
        memcpy(new_arr + new_size + 1, arr + new_size, sizeof(int) * (*size - new_size));
        delete[] arr;
        ++* size;
        return new_arr;
    }
    return arr;
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    int size = 30;
    int* arr = new int[size];

    cout << "Заполнение массива:" << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 21 - 10;
        cout << arr[i] << "  ";
    }
    cout << endl << "Удаление нулей:" << endl;
    arr = delete0(arr, &size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << "  ";
    //Добавление после первого четного элемента массива элемента со значением M[ I-1 ]+2
    cout << endl << "Добавление элемента:" << endl;
    int* n = find_if(arr, arr + size, [](int val) { return !(val % 2); }); //проверка на четность
    if (n != arr + size)
        arr = insertn(arr, &size, n, *(n)+2);

    for (int i = 0; i < size; i++)
        cout << arr[i] << "  ";


    return 0;
}

