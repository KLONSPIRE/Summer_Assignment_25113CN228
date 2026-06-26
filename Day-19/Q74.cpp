#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    if(rows <= 0 || cols <= 0)
    {
        cout << "Matrix is empty";
        return 0;
    }

    vector<vector<int> > a(rows, vector<int>(cols)), b(rows, vector<int>(cols)), sum(rows, vector<int>(cols));

    cout << "Enter first matrix:" << endl;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:" << endl;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> b[i][j];

    cout << "Difference matrix:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] - b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
