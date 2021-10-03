#include <iostream>
#include <string>

bool isPalindrome(std::string input)	{	return input == std::string(input.rbegin(), input.rend());	}

int main()
{
  std::string input = "able was I ere I saw elba" ;
  //std::cout << "Input : ";
  //getline (std::cin, input);
  std::cout << "It is " << (isPalindrome(input) ? "" : "not ") << "a palindrome";
}

