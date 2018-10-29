#include <iostream>
#include <algorithm>
int main()
{
    int n;
    std::string s;std::cin>>n>>s;
    std::transform(s.begin(),s.end(),s.begin(),[n](char c){return (c-'a'+n+26)%26+'a';});
    std::cout<<s;
}
