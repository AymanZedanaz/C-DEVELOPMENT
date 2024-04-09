#include <iostream>

using namespace std;

int z = 1;

int Second()
{
    cout << z << " Coming From Second Function\n";
    // cout << a << " Coming From Second Function\n";
    return 0;
}

int main()
{
    int a;
    a = 100;
    cout << a;

    cout << "\n=======\n";

    int b, c, d;
    b = 10, c = 20, d = 30;
    cout << b + c + d;

    cout << "\n=======\n";

    int e, f = 40, g;
    e = 20, g = 60;
    cout << e + f + g;

    cout << "\n=======\n";

    int h, i, j;
    h = i = j = 10;
    cout << h + i + j;

    cout << "\n==================\n";
    cout << "\n==================\n";
    cout << "\n==================\n";
    cout << "\n==================\n";
    cout << "\n==================\n";
    cout << "\n==================\n";

    cout << z << " Coming From Main Function\n";
    cout << a << " Coming From Main Function\n";
    Second();

    cout << "\n==================\n";
    cout << "\n==================\n";
    cout << "\n==================\n";
    cout << "\n==================\n";
    cout << "\n==================\n";
    cout << "\n==================\n";

    const int num = 100;
    // num = 200;
    cout << num;
    // const int x;
    return 0;
}
