#include <iostream>
using namespace std;
const short MAX = 100;
char board[MAX][MAX + 1];
int main() {
    int n;
    int rowCount = 0, colCount = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> board[i];
    for (int i = 0; i < n; i++) { int count = 0; for (int j = 0; j < n; j++) { if (board[i][j] == '.') count++; else { if (count > 1) rowCount++; count = 0; } } if (count > 1) rowCount++; } for (int i = 0; i < n; i++) { int count = 0; for (int j = 0; j < n; j++) { if (board[j][i] == '.') count++; else { if (count > 1) colCount++; count = 0; } } if (count > 1) colCount++; } cout << rowCount << ' ' << colCount; return 0; }
