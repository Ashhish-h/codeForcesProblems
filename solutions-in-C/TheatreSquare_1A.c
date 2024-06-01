//                                       A. Theatre Square
//                                       time limit per test 1 second
//                                       memory limit per test 256 megabytes
//                                       input: standard input
//                                       output: standard output
// Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

// What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

// Input
// The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

// Output
// Write the needed number of flagstones.

// Examples
// input
// 6 6 4
// output
// 4


SOLUTION-

#include<stdio.h>
int main(){
    long long int length, breadth, flagstoneSize;
    scanf("%lld %lld %lld",&length, &breadth, &flagstoneSize);
    long long int div1 = length/flagstoneSize; 
    long long int div2 = breadth/flagstoneSize;
    if(length % flagstoneSize != 0){
        div1++;
    }
    if(breadth % flagstoneSize != 0){
        div2++;
    }
    printf("%lld", div1 * div2);
    return 0;
}