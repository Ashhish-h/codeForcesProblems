//                                     A. Increasing Sequence
//                                  time limit per test1 second
//                                  memory limit per test64 megabytes
//                                  inputstandard input
//                                  outputstandard output
// A sequence a0, a1, ..., at - 1 is called increasing if ai - 1 < ai for each i: 0 < i < t.

// You are given a sequence b0, b1, ..., bn - 1 and a positive integer d. In each move you may choose one element of the given sequence and add d to it. What is the least number of moves required to make the given sequence increasing?

// Input
// The first line of the input contains two integer numbers n and d (2 ≤ n ≤ 2000, 1 ≤ d ≤ 106). The second line contains space separated sequence b0, b1, ..., bn - 1 (1 ≤ bi ≤ 106).

// Output
// Output the minimal number of moves needed to make the sequence increasing.

// Examples
// inputCopy
// 4 2
// 1 3 3 2
// outputCopy
// 3


// solution


#include <stdio.h>
 
int main() {
    int n, d;
    scanf("%d %d", &n, &d);
 
    int b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
 
    int moves = 0;
    for (int i = 1; i < n; i++) {
        if (b[i] <= b[i - 1]) {
            int diff = b[i - 1] - b[i];
            int steps = (diff / d) + 1;
            moves += steps;
            b[i] += steps * d;
        }
    }
 
    printf("%d\n", moves);
 
    return 0;
}
