#include <bits/stdc++.h>
#include <iostream>

int main()
{
    // Expected return of [1, 4, 2, 50, 3, 70, 14]
    int duplicates[10] = {1, 4, 2, 1, 50, 50, 3, 2, 70, 14};
    std::set<int> nonDuplicates;
    std::set<int>::iterator it;
    //Spaghetti code BUT it is one line
    for (int i = 0; i < 10; i++){ nonDuplicates.insert(duplicates[i]);} for (it = nonDuplicates.begin(); it != nonDuplicates.end(); it++){std::cout << *it << ", ";}
}