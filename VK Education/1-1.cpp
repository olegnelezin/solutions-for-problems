#include <iostream>
using namespace std;
/*
Древнерусская мера длины сажень состоит из трёх аршин. Один аршин делится на четыре пяди. Одна пядь состоит из четырёх вершков.
Длина веревки составляет N вершков. Определите длину веревки в саженях, аршинах, пядях и вершках.
Замечание: 30 вершков это 0 саженей, 1 аршин, 3 пяди и 2 вершка.
*/
int main() {
    int n;
    cin >> n;
    int s = 0, a = 0, p = 0, v = 0;
    p = n / 4;
    if (p != 0)
        v = n % 4;
    a = p / 4;
    if (a != 0)
        p = p % 4;
    s = a / 3;
    if (s != 0)
        a = a % 3;
    cout << s << " " << a << " " << p << " " << v;
}