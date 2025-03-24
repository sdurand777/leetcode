#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public: 
    string prefix(vector<string>& strs)
    {
        // nombre de strings
        int n = strs.size();
        string prefix = "";
        // loop over all strings
        for (int i = 0; i < n; i++)
        {
            // check first letter of each string
            // si on a un string vide on stop
            if (strs[i].size() == 0)
            {
                prefix = "";
                return prefix;
            }
            // if c empty, c = first letter of first string
            if (prefix == "")
            {
                prefix += strs[i][0];
                continue;
            } 
            // si un autre string commence par une autre lettre
            if (strs[i][0] != prefix[0])
            {
                prefix = "";
                return prefix;
            }
        }
        // donc il existe un prefix
        // loop over premier mot 
        for (int j = 1; j < strs[0].size(); j++)
        {
            char l = strs[0][j];
            // loop over all strings
            for (int i = 1; i < n; i++)
            {
                // si on a un string vide on stop
                if (strs[i].size() == 0)
                {
                    return prefix;
                }
                // si on a un string plus petit que le prefix
                if (strs[i].size() <= j)
                {
                    return prefix;
                }
                // si on a un string qui ne commence pas par le prefix
                if (strs[i][j] != l)
                {
                    return prefix;
                }
            }
            prefix += l;
        }
        return prefix;
    }
};

int main()
{
    Solution s;
    vector<string> strs = {"flower", "flow", "flight"};
    cout << s.prefix(strs) << endl;
    return 0;
}