#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string a,b;
    std::cin>>a>>b;
    std::cout<<(std::is_permutation(a.begin(),a.end(),b.begin())?"True":"False");
}
