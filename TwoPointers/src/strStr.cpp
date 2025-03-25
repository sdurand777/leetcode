#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <stack>

using namespace std;

class Solution {
    public:
        int strStr(string haystack, string needle) {
            return haystack.find(needle);
        }
    };


int main()
{
    string s1 = "leetcode";
    string s2 = "eetc";

    auto res = s1.find(s2);


    cout << res << endl;



    return 0;
}