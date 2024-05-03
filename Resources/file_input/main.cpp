#include <iostream>
// Get-Content test.txt | .\main > result.txt  
// use this in terminal to get input from test.txt, then output the result into result.txt.
int main ()
{
    int num = 0, sum = 0;
    while(std::cin >> num) // use this syntax only if you want to get input from file. for input from user keyboard. DO NOT DO THIS. 
    {
        sum += num;
              
    }
    std::cout << sum << '\n';
    return 0;
}