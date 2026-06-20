#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int longest_substring(const string &s, int k)
{
    if (k <= 0 || s.empty())
        return 0;

    unordered_map<char, int> freq;
    int low = 0;
    int res = 0;

    for (int high = 0; high < static_cast<int>(s.size()); high++)
    {
        freq[s[high]]++;

        while (static_cast<int>(freq.size()) > k)
        {
            char left_char = s[low];
            freq[left_char]--;
            if (freq[left_char] == 0)
            {
                freq.erase(left_char);
            }
            low++;
        }

        if (static_cast<int>(freq.size()) == k)
        {
            res = max(res, high - low + 1);
        }
    }

    return res;
}

int main()
{
    string s;
    int k;

    if (!(cin >> s >> k))
    {
        cerr << "Usage: enter a string and an integer k\n";
        return 1;
    }

    cout << longest_substring(s, k) << '\n';
    return 0;
}
