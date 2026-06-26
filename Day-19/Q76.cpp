#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter order of square matrix: ";
    cin >> n;

    if(n <= 0)
    {
        cout << "Matrix is empty";
        return 0;
    }

    vector<vector<int> > mat(n, vector<int>(n));
    cout << "Enter matrix:" << endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if(i == j)
                sum += mat[i][j];
        }

    cout << "Diagonal sum = " << sum;
    return 0;
}
