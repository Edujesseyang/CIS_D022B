#include <iostream>
#include <vector>
using std::cout;

// Below is the sample of the template using.
// Here, we make an "imagine" type called "Type".
// Then we use that type for input and output.
// Then we can use this function to pass any kind of input and get same type of output.
template <typename Type>
Type findTheMax(std::vector<Type> &nums)
{
    size_t i = 0;
    Type max = nums[i];
    for (; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
};

int main()
{
    // test 1
    std::vector<int> test1 = {0, 1, 2, 3, 4, 5, 6, 7};
    int max1 = findTheMax(test1);
    cout << "The largest num in the list is : " << max1 << '\n';

    // test 2
    cout << '\n';
    std::vector<double> test2 = {3.5,
                                 5.5,
                                 575.3,
                                 632.6,
                                 76.564,
                                 32.66,
                                 542.699};
    double max2 = findTheMax(test2);
    cout << "The largest num in the list is : " << max2 << '\n';

    // test 3
    // In this test, we input a vector<char> and get an output then store it into an int var.
    cout << '\n';
    std::vector<char> test3 = {'a',
                               'b',
                               'c',
                               'd',
                               'e',
                               'f',
                               'g'};
    int max3 = findTheMax(test3);
    char max3_char = findTheMax(test3);
    cout << "The largest num in the list is : " << max3 << '\n';
    cout << "The largest num in the list is : " << max3_char << '\n';

    return 0;
}