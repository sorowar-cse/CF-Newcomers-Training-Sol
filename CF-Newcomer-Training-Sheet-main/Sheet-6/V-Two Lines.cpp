#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    if ((x1 == x2 && y1 != y2 && x3 == x4 && y3 != y4 && x1 != x3) || (y1 != y3 && y1 == y2 && y3 == y4 && x1 != x2 && x3 != x4))
        cout << "YES" << endl;
    else if (((double)(y2 - y1) / (double)(x2 - x1)) == ((double)(y4 - y3) / (double)(x4 - x3)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
