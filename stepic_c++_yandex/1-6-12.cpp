// Даны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни.

// Формат входных данных
// Вводятся три действительных числа.
// Формат выходных данных
// Если данное уравнение не имеет корней, выведите число 0. Если уравнение имеет один корень, выведите число 1, а затем этот корень. Если уравнение имеет два корня, выведите число 2, а затем два корня в порядке возрастания. Если уравнение имеет бесконечно много корней, выведите число 3.

// Sample Input:

// 1
// -1
// -2

// Sample Output:

// 2 -1 2

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double a, b, c, D, x1, x2;
    cin >> a >> b >> c;
    if (a != 0){
        D= b * b - 4 * a * c;
        if ( D > 0){
            x1= ( -b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            if (x1 > x2){
                cout << 2 << " " << x2 <<" "<< x1;
                }
            else    {
                cout << 2 << " " << x1 <<" "<< x2;
                }
        }
        else
            if(D == 0){
                x1 = -b / (2 * a);
                cout << 1 << " " << x1;
            }
            else
                cout << 0;
    }
    else
        if(b != 0){
            x1 = -c/b;
            cout << 1 << " " << x1;
        }
    else
        if(c != 0){
            cout << 0;
        }
        else {
            cout << 3;
        }
  return 0;
}