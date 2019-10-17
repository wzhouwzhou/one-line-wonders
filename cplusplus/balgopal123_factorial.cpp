//g++  5.4.0
//For run this programme You should have to pass the number n as ./a.out n (comandline argument)
//For compailation run " g++ balgopal123_factorial.cpp "
//For Excution run " ./a.out n " n is a positive whole number
//It will give the factorial of n as output.
#include <iostream>
using namespace std;

long long int fact(int n){ return (n == 0 || n == 1)? 1 : (n*fact(n-1)) ; }

int main(int argc, char *argv[])
{
    std::cout << "Factorial of "<< (int) *argv[1] - '0' <<" is : "<< fact( (int) *argv[1] - '0' );
}
