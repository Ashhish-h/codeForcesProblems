//                                                  A. Army
//                                        time limit per test 2 seconds
//                                        memory limit per test 256 megabytes
//                                        input standard input
//                                        output standard output
// The Berland Armed Forces System consists of n ranks that are numbered using natural numbers from 1 to n, where 1 is the lowest rank and n is the highest rank.

// One needs exactly di years to rise from rank i to rank i + 1. Reaching a certain rank i having not reached all the previous i - 1 ranks is impossible.

// Vasya has just reached a new rank of a, but he dreams of holding the rank of b. Find for how many more years Vasya should serve in the army until he can finally realize his dream.

// Input
// The first input line contains an integer n (2 ≤ n ≤ 100). The second line contains n - 1 integers di (1 ≤ di ≤ 100). The third input line contains two integers a and b (1 ≤ a < b ≤ n). The numbers on the lines are space-separated.

// Output
// Print the single number which is the number of years that Vasya needs to rise from rank a to rank b.

// Examples
// inputCopy
// 3
// 5 6
// 1 2
// output
// 5
// input
// 3
// 5 6
// 1 3
// output
// 11

// solution

#include<stdio.h>
int main(){
    int n, arr[101], year = 0, currentRank, dreamRank;
    scanf("%d", &n);
    for(int i = 1; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &currentRank, &dreamRank);
    for(int i = currentRank; i < dreamRank; i++){
        year += arr[i];
    }
    printf("%d", year);
    return 0;
}