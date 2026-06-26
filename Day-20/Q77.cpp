#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if(r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0)
    {
        cout << "Matrix is empty";
        return 0;
    }

    if(c1 != r2)
    {
        cout << "Matrix multiplication is not possible";
        return 0;
    }

    vector<vector<int> > a(r1, vector<int>(c1)), b(r2, vector<int>(c2)), result(r1, vector<int>(c2, 0));
    cout << "Enter first matrix:" << endl;
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:" << endl;
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> b[i][j];

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            for(int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];

    cout << "Product matrix:" << endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}
