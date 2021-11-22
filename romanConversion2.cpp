#include <string>

using namespace std;

class Solution
{
    public:
    int romanToInt(string str)
    {
        int res = 0;
     
        // Traverse given input
        for (int i = 0; i < str.length(); i++)
        {
            // Getting value of symbol s[i]
            int s1 = romanValues(str[i]);
     
            if (i + 1 < str.length())
            {
                // Getting value of symbol s[i+1]
                int s2 = romanValues(str[i + 1]);
     
                // Comparing both values
                if (s1 >= s2)
                {
                    // Value of current symbol
                    // is greater or equal to
                    // the next symbol
                    res = res + s1;
                }
                else
                {
                    // Value of current symbol is
                    // less than the next symbol
                    res = res + s2 - s1;
                    i++;
                }
            }
            else {
                res = res + s1;
            }
        }
        return res;
    }
    
    int romanValues(char s)
    {
        if (s == 'I')
            return 1;
        else if (s == 'V')
            return 5;
        else if (s == 'X')
            return 10;
        else if (s == 'L')
            return 50;
        else if (s == 'C')
            return 100;
        else if (s == 'D')
            return 500;
        else if (s == 'M')
            return 1000;
        else
            return 0;
    }
};
