#include <iostream>
using namespace std;

void generatePyramidPattern(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;

    cout << "Enter the number of rows for the pyramid pattern: ";
    cin >> rows;

    generatePyramidPattern(rows);

    return 0;
}
