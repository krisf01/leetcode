#include <string>
#include <iostream>
using namespace std;

int romanValues(char s)
{
    if (s == 'I')
        return 1;
    if (s == 'V')
        return 5;
    if (s == 'X')
        return 10;
    if (s == 'L')
        return 50;
    if (s == 'C')
        return 100;
    if (s == 'D')
        return 500;
    if (s == 'M')
        return 1000;
    
    return -1;
    
}

int conversion (string str)
{
    // Initialize result
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
       
int main ()
{
    string str;
    cout << "Enter roman numeral: ";
    cin >> str;
    cout << "Conversion: " << conversion(str) << endl;
}
