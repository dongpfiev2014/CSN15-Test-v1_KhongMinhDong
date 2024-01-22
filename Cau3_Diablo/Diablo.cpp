#include <iostream>
using namespace std;

int main()
{
    int m, d, k, c;
    cin >> m >> d >> k >> c;
    // Tính toán tổng độ bền mất đi sau khi giết hết quái vật
    int Damage = m * k;
    // Tính toán số lần cần sửa đồ
    int numRepairs = (Damage + d - 1) / d;
    // Tính toán số gold cần chuẩn bị
    int result = numRepairs * c;

    if ((m - 1) * k > d * (m - 1))
    {
        cout << -1 << endl;
    }
    else
    {
        cout << result << endl;
    }

    return 0;
}
