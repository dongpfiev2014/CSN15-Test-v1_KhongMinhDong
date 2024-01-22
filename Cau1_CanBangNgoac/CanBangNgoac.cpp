#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool CanBangNgoac(const std::string &str);

int main()
{
    int N;
    cin >> N;
    string str;
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        if (CanBangNgoac(str))
        {
            std::cout << "True" << std::endl;
        }
        else
        {
            std::cout << "False" << std::endl;
        }
    }
    return 0;
}

// Function sử dụng Stack để kiểm tra sự cân bằng ngoặc
bool CanBangNgoac(const string &str)
{
    stack<char> Stack;
    for (char c : str)
    {
        if (c == '[' || c == '{' || c == '(')
        {
            Stack.push(c);
        }
        else if (c == ']' || c == '}' || c == ')')
        {
            if (Stack.empty())
            {
                return false;
            }
            char NgoacMo = Stack.top();
            Stack.pop();
            // Kiểm tra ngoặc mở và ngoặc đóng có cùng 1 cặp trong chuỗi con
            if ((c == ']' && NgoacMo != '[') || (c == '}' && NgoacMo != '{') || (c == ')' && NgoacMo != '('))
            {
                return false;
            }
        }
    }
    return Stack.empty();
}
