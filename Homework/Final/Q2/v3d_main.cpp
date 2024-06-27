#include <iostream>
#include "V3d.h"
using namespace std;

int main(void)
{
    cout << "Welcome to V3d!" << endl;

    const V3d<int> v(2, 3, 4);
    cout << v << endl;

    V3d<int> v1, v2(3, -3, 3), v3(4), v4(0, 4, 0);
    V3d<int> v5, v6, v7, v8;
    const V3d<int> v9(v2), v10(v4);
    V3d<int> Result;

    cout << "Arithmetic on v1 and v2:" << endl;
    cout << "========================" << endl;
    cout << endl;

    cout.width(15);
    cout << "v1 = ";
    cout << v1 << endl;

    cout.width(15);
    cout << "v2 = ";
    cout << v2 << endl;

    cout.width(15);
    Result = v1 + v2;
    cout << "(v1 + v2) = ";
    cout << Result << endl;

    cout.width(15);
    Result = v1 - v2;
    cout << "(v1 - v2) = ";
    cout << Result << endl;

    cout.width(15);
    Result = v1;
    Result += v2;
    cout << "(v1 += v2) = ";
    cout << Result << endl;

    cout.width(15);
    Result = v1;
    Result -= v2;
    cout << "(v1 -= v2) = ";
    cout << Result << endl;

    cout << endl;
    cout.width(15);
    Result = v1 + v2 - v3 + v4;
    cout << "(v1+v2-v3+v4) = " << Result << endl;

    cout << "v1 = " << v1 << endl
         << "v2 = " << v2 << endl;
    cout << "v3 = " << v3 << endl
         << "v4 = " << v4 << endl;
    cout << endl;
    Result = v1++;
    cout << "v1++ = " << Result << endl;
    Result = ++v2;
    cout << "++v2 = " << Result << endl;
    Result = v3--;
    cout << "v3-- = " << Result << endl;
    Result = --v4;
    cout << "--v4 = " << Result << endl;

    v5 = v1;
    v6 = v2;
    v7 = v3;
    v8 = v4;

    v5 = -v5;
    v6 = -v6;

    cout << "v1 = ";
    cout << v1 << endl;
    cout << "v2 = ";
    cout << v2 << endl;
    cout << "v3 = ";
    cout << v3 << endl;
    cout << "v4 = ";
    cout << v4 << endl;
    cout << "v5 = ";
    cout << v5 << endl;
    cout << "v6 = ";
    cout << v6 << endl;
    cout << "v7 = ";
    cout << v7 << endl;
    cout << "v8 = ";
    cout << v8 << endl;
    cout << endl;

    v1 = V3d<int>(0, -4, 3);
    v2 = V3d<int>(4),
    v3 = V3d<int>(-3, 3, -3),
    v4 = V3d<int>(0, 0, 0),
    v5 = 5;
    v6 = 6;
    v7 = 7;
    v8 = 8;

    cout << endl;

    cout << "v = V3d(.) calls" << endl;
    cout << "v1 = ";
    cout << v1 << endl;
    cout << "v2 = ";
    cout << v2 << endl;
    cout << "v3 = ";
    cout << v3 << endl;
    cout << "v4 = ";
    cout << v4 << endl;
    cout << "v5 = ";
    cout << v5 << endl;
    cout << "v6 = ";
    cout << v6 << endl;
    cout << "v7 = ";
    cout << v7 << endl;
    cout << "v8= ";
    cout << v8 << endl;
    cout << endl;

    v3 -= 3;
    v5 = v + 3;

    cout << "v1 = ";
    cout << v1 << endl;
    cout << "v2 = ";
    cout << v2 << endl;
    cout << "v3 = ";
    cout << v3 << endl;
    cout << "v4 = ";
    cout << v4 << endl;
    cout << "v5 = ";
    cout << v5 << endl;
    cout << "v6 = ";
    cout << v6 << endl;
    cout << endl;

    return 0;
}