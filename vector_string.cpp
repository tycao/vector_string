#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //vector<string> vstr{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p"};
    string vstr = "abcdefghijklmnopqrstuvwxyz";
    char sought = 'm';
    auto beg = vstr.begin(), end = vstr.end();
    auto mid = vstr.begin() + (end - beg) / 2;
    while (mid != end && *mid != sought)
    {
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }
    if (mid == end)
        cout << sought << " not found." << endl;
    if (*mid == sought)
        cout << sought << " found." << endl;
    return 0;
}
