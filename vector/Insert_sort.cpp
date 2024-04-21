#include <iostream>
#include <vector>

void insert_num(std::vector<int> &vec, int num);
void print(std::vector<int> &vec);

int main()
{
    std::vector<int> num_list = {0, 1, 2, 3, 4, 6, 7, 8, 9};
    int number = 5;
    insert_num(num_list, number);

    print(num_list);

    return 0;
}

void insert_num(std::vector<int> &sorted_vec, int num)
{
    int len = sorted_vec.size();
    for (size_t i = 0; i < len; i++)
    {
        if (num < sorted_vec[i])
        {
            sorted_vec.insert(sorted_vec.begin() + i, num);
            break;
        }
        if (num >= sorted_vec[len - 1])
        {
            sorted_vec.push_back(num);
        }
    }
}

void print(std::vector<int> &vec)
{
    for(int num : vec)
    {
        std::cout << num << '\t';
    }
    std::cout << '\n';
}