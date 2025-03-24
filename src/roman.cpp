#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public: 
    int romanToInt(string chaine)
    {
        int tmp = 0;
        // prendre un string vide
        char letter = ' ';
        // simple solution
        for (char s : chaine)
        {
            if (s == 'I')
            {
                tmp += 1;
            }
            else if (s == 'V')
            {
                // if I before V
                if (tmp != 0 && letter == 'I')
                {
                    tmp += 3;
                }
                else
                {
                    tmp += 5;
                }
            }
            else if (s == 'X')
            {
                if (tmp != 0 && letter == 'I')
                {
                    tmp += 8;
                }
                else
                {
                    tmp += 10;
                }
            }
            else if (s == 'L')
            {
                if (tmp != 0 && letter == 'X')
                {
                    tmp += 30;
                }
                else
                {
                    tmp += 50;
                }
            }
            else if (s == 'C')
            {
                if (tmp != 0 && letter == 'X')
                {
                    tmp += 80;
                }
                else
                {
                    tmp += 100;
                }
            }
            else if (s == 'D')
            {
                if (tmp != 0 && letter == 'C')
                {
                    tmp += 300;
                }
                else
                {
                    tmp += 500;
                }
            }
            else if (s == 'M')
            {
                if (tmp != 0 && letter == 'C')
                {
                    tmp += 800;
                }
                else
                {
                    tmp += 1000;
                }
            }
            // update letter
            letter = s;
        }
        return tmp;

    }
};

int main()
{
    Solution s;
    std::cout << s.romanToInt("III") << std::endl;   // Devrait afficher 3
    std::cout << s.romanToInt("IV") << std::endl;    // Devrait afficher 4
    std::cout << s.romanToInt("IX") << std::endl;    // Devrait afficher 9
    std::cout << s.romanToInt("LVIII") << std::endl; // Devrait afficher 58
    std::cout << s.romanToInt("MCMXCIV") << std::endl; // Devrait afficher 1994
    return 0;
}