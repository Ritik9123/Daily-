#include <iostream>
using namespace std;
void reverse(string &s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
}

int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;
    string s;
    for (; num != 0;)
    {
        s.push_back(num % 2);
        num = num / 2;
    }
    reverse(s);
    for (int i : s)
    {
        cout << i << " ";
    }
}