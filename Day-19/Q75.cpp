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

    vector<vector<int> > mat(rows, vector<int>(cols));
    cout << "Enter matrix:" << endl;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> mat[i][j];

    cout << "Transpose matrix:" << endl;
    for(int j = 0; j < cols; j++)
    {
        for(int i = 0; i < rows; i++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}
