#include <iostream>
using namespace std;

int main()
{
    int m, d, k, c;
    cin >> m >> d >> k >> c;
    int Max1Round, numRepairs;
    // Tính toán số lần giết được quái vật trong 1 lần sử dụng vũ khí chưa sửa đồ (không tính sử dụng đến khi không sửa được)
    d % k != 0 ? Max1Round = d / k : Max1Round = d / k - 1;
    if ((d / k) >= m) // Trường hợp số quái vật ít hơn số lần cần phải sửa đồ => cout = 0
    {
        cout << 0 << endl;
    }
    else if (k >= d) // Trường hợp tiêu hao vũ khí lớn hơn hoặc bằng đơn vị độ bền vũ khí
    {
        cout << -1 << endl;
    }
    else
    {
        // Tính toán số lần lặp lại để sửa đồ
        if (m % Max1Round == 0 && d % k == 0)
        {
            numRepairs = m / Max1Round - 2; // Trừ đi lần đầu chưa sửa đồ và lần cuối (lần hỏng vũ khí)
        }
        else if (m % Max1Round == 0 && d % k != 0) // Trừ đi lần đầu
        {
            numRepairs = m / Max1Round - 1;
        }
        else if (m % Max1Round == 1 && d % k == 0)
        {
            numRepairs = m / Max1Round - 1; // Trừ lần cuối (lần hỏng vũ khí)
        }
        else
        {
            numRepairs = m / Max1Round;
        }
        // Tính toán số gold cần chuẩn bị
        int result = numRepairs * c;
        cout << result << endl;
    }
}
