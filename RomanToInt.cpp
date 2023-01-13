#include <bits/stdc++.h>
int romanToInt(std::string s)
{
    // taking a map to keep the item as key, value pair
    std::map<char, int> mymap;
    mymap['I'] = 1;
    mymap['V'] = 5;
    mymap['X'] = 10;
    mymap['L'] = 50;
    mymap['C'] = 100;
    mymap['D'] = 500;
    mymap['M'] = 1000;

    // Taking the last value in Result
    int result = mymap.at(s.at(s.length() - 1));
    for (int i = s.length() - 1; i > 0; i--)
    {
        std::cout << s.at(i - 1) << std::endl;
        // checking if the current value is greater than the previous value
        if (mymap.at(s.at(i)) > mymap.at(s.at(i - 1)))
        {
            // subtracting the value in result
            result -= mymap.at(s.at(i - 1));
        }
        else
        {
            // adding the value in result
            result += mymap.at(s.at(i - 1));
        }
    }
    return result;
}

int main()
{
    std::string a = "MCMXCIV";
    std::cout << romanToInt(a) << std::endl;
    return 0;
}