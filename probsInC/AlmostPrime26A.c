//                                       A. Almost Prime
//                                 time limit per test 2 seconds
//                                 memory limit per test256 megabytes
//                                      input standard input
//                                      output standard output
// A number is called almost prime if it has exactly two distinct prime divisors. For example, numbers 6, 18, 24 are almost prime, while 4, 8, 9, 42 are not. Find the amount of almost prime numbers which are between 1 and n, inclusive.

// Input
// Input contains one integer number n (1 ≤ n ≤ 3000).

// Output
// Output the amount of almost prime numbers between 1 and n, inclusive.

// Examples
// input
// 10
// output
// 2
// input
// 21
// output
// 8


// Solution

#include <stdio.h>
 
int is_prime(int x) {
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
 
int count_almost_prime_numbers(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int divisors[2] = {0};
        int divisors_count = 0;
        for (int j = 2; j <= i; j++) {
            if (i % j == 0 && is_prime(j)) {
                divisors[divisors_count++] = j;
                if (divisors_count > 2)
                    break;
            }
        }
        if (divisors_count == 2)
            count++;
    }
    return count;
}
 
int main() {
    int n;
    scanf("%d", &n);
    int result = count_almost_prime_numbers(n);
    printf("%d\n", result);
    return 0;
}