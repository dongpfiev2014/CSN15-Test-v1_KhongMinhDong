#include <iostream>
using namespace std;

int Fac(int n);
int result(int x, int y);

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << result(x, y) << endl;
    }
    return 0;
}

// Function tính giai thừa
int Fac(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * Fac(n - 1);
    }
}
// Function để tính số cách ra được kết quả BĐ hiện tại
// Theo môn học xác suất thống kê, tổng cách ra tỷ số bóng đá hiện tại là:
// S(x,y) = ((x+y)!)/(x!*y!)

int result(int x, int y)
{
    return Fac(x + y) / (Fac(x) * Fac(y));
}