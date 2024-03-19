#include <bits/stdc++.h>

using namespace std;

int matrix[101][101];
int target[5][5] = {{1, 0, 0, 0, 1}, {0, 1, 0, 1, 0}, {0, 0, 0, 0, 0}, {0, 1, 0, 1, 0}, {1, 0, 0, 0, 1}};

int main()
{
    int R, C;
    cin >> R >> C;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            char c;
            cin >> c;
            matrix[i][j] = c - '0';
        }
    }
    // go down
    for (int x = 0; x <= R - 5; x++)
    {
        for (int y = 0; y <= C - 5; y++)
        {
            bool ok = true;
            int a = 0, b = 0;
            for (int i = x; i < x + 5; i++)
            {
                b = 0;
                for (int j = y; j < y + 5; j++)
                {
                    if (matrix[i][j] != target[a][b])
                    {
                        ok = false;
                    }
                    b++;
                }
                a++;
            }
            if (ok)
            {
                cout << y << " " << x << "\n";
                return 0;
            }
        }
    }
    cout << "Not Found\n";
    return 0;
}
