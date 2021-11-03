#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    double n, n1, n2, m, m1, m2;
    cout << "Введите переменные n и m:" << endl;
    cin >> n >> m;
    n1 = n;
    n2 = n;
    m1 = m;
    m2 = m;
    cout << "n---m = " << n-- - m << endl;
    if (n1-- < m1) {
        cout << "Выражение n--<m верно" << endl;
    }
    else { cout << "Выражение n--<m не верно" << endl; }
    if (n2++ > m2) {
        cout << "Выражение n++>m верно" << endl;
    }
    else { cout << "Выражение n++>m не верно" << endl; }
    return 0;
}



