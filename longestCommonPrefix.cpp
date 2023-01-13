#include <bits/stdc++.h>

std::string longestCommonPrefix(std::vector<std::string> &vec)
{
    std::string result;

    for (int i = 0; i < vec[0].length(); i++)
    {
        for(int j = 1; j < vec.size(); j++){
            if(i == vec[j].length() || vec[0][i] != vec[j][i]){
                return result;
            }
        }
        result += vec[0][i];
        
    }
    return result;
}

int main()
{
    std::vector<std::string> strs = {"flower", "flow", "flight"};
    std::cout<<longestCommonPrefix(strs)<<"\n";

    return 0;
}