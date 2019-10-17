/*
* CODE SUBMITTED BY- SUBHAM SAHU
* GITHUB URL - https://github.com/subhamx
* LINKED URL - https://www.linkedin.com/in/subhamX/
* 
*/


/*
* PROBLEM STATEMENT - 
* You are given an array with random integers. Design an algorithm that returns the array with duplicates removed. 
* This means if the input is [1,10,7,1,4], the output will be [1,10,7,4].
* 
*/

/*

INPUT FORMAT - 
    SIZE OF ARRAY
    ARRAY ELEMENTS

OUTPUT FORMAT - 
    UNIQUE ARRAY

*/

#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    int n, temp;
    n=8; // Size of B
    int B[] = { 1,2,3,4,4,5,9,1};
    set<int> A;
    for(int i=0; i<n; i++){
        if(binary_search(A.begin(), A.end(),B[i])==0){
            A.insert(B[i]);
        }
    }
    set<int>:: iterator it = A.begin();
    for(; it!=A.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}


/*
RUN THE CODE - https://ideone.com/263ng6

ANALYSIS - 
    Insertion in set costs O(log(n)) in average case.
    Thus, For n insertion it will cost O(n * log(n)).

    Insertion in set costs O(n) in worst case.
    Thus, For n insertion it will cost O(n * n).
*/
