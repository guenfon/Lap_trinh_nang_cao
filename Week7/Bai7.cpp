int** inputMatrix(int nRows, int nCols)
{
    int** Arr = new int*[nRows];
    for (int i = 0; i < nRows; ++i) 
    {
        Arr[i] = new int[nCols];
        for (int j = 0; j < nCols; ++j) cin >> Arr[i][j];
    }
    return Arr;
}

void printMatrix(int** Arr, int nRows, int nCols)
{
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nCols; ++j) cout << Arr[i][j] << ' ';
        cout << '\n';
    }
}