#include <iostream>
// Get-Content test.txt | .\main > result.txt  
// use this in terminal to get input from test.txt, then output the result into result.txt.
int main ()
{
    int num = 0, sum = 0;
    // while(std::cin >> num) // use this syntax only if you want to get input from file. for input from user keyboard. DO NOT DO THIS. 
    // {
    //     sum += num;    
    // }

    // anther way to do same thing.
    // get a bool to check if there in more input.
    std::istream& instream = std::cin >> num; 
    bool more_input = static_cast<bool>(instream);

    // if there is more, do the loop.
    while(more_input)
    {
        sum += num;
        std::cin >> num;
    }

    std::cout << sum << '\n';
    return 0;
}