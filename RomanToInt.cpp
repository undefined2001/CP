#include <bits/stdc++.h>
int romanToInt(std::string s)
{
    std::map<char, int> mymap;
    mymap['I'] = 1;
    mymap['V'] = 5;
    mymap['X'] = 10;
    mymap['L'] = 50;
    mymap['C'] = 100;
    mymap['D'] = 500;
    mymap['M'] = 1000;

    int result = mymap.at(s.at(s.length() - 1));
    for (int i = s.length() - 1; i > 0; i--)
    {
        std::cout << s.at(i-1) << std::endl;
        if (mymap.at(s.at(i)) > mymap.at(s.at(i - 1)))
        {
            result -= mymap.at(s.at(i-1));
        }
        else
        {
            result += mymap.at(s.at(i-1));
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