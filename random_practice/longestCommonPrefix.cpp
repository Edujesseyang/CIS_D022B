#include <iostream>
#include <vector>
#include <string>

std::string longestCommonPrefix(std::vector<std::string> &strs)
{
    // Check if the vector is empty
    std::string result;
    if (strs.empty())
    {
        result = "";
        return result;
    }

    // Get the size of the vector
    int size = strs.size();

    size_t c_i = 0;

    // Loop through the vector out side
    for (size_t i = 0; i < size; i++)
    {
        char temp = strs[0][c_i]; // reset the temp

        // Loop through the vector in side

        for (size_t j = 1; j < size; j++)
        {
            // Check if the characters are the same
            if (strs[j][c_i] != temp)
            {
                temp = 
                break;
            }
            if (j == size - 1)
            {
                result += temp;
            }
        }
        c_i++;
    }

    return result;
}

int main()
{
    std::vector<std::string> strs = {"flower", "flow", "flight"};
    std::cout << "result: \n";
    std::cout << longestCommonPrefix(strs) << std::endl;

    strs = {"dog", "racecar", "car"};
    std::cout << "result: \n";
    std::cout << longestCommonPrefix(strs) << std::endl;

    strs = {"aseg", "aegec", "ageg"};
    std::cout << "result: \n";
    std::cout << longestCommonPrefix(strs) << std::endl;

    strs = {"fesd", "yrty", "vfds"};
    std::cout << "result: \n";
    std::cout << longestCommonPrefix(strs) << std::endl;

    strs = {"dmm", "dmma", "dmmmaa"};
    std::cout << "result: \n";
    std::cout << longestCommonPrefix(strs) << std::endl;
    return 0;
}
