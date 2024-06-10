//                                     A. Nearly Lucky Number
//                                 time limit per test 2 seconds
//                                 memory limit per test 256 megabytes
//                                     input standard input
//                                     output standard output

// Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

// Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.
// Input

// The only line contains an integer n (1 ≤ n ≤ 1018).

// Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.
// Output

// Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).
// Examples
// Input
// 40047

// Output
// NO

// Input
// 7747774

// Output
// YES

// Input
// 1000000000000000000

// Output
// NO

// Note:
// In the first sample there are 3 lucky digits (first one and last two), so the answer is "NO".

// solution-

    #include<stdio.h>
    #include<string.h>
    int main(){
        char str[1001];
        scanf("%s", str);
        int count = 0;
        for(int i = 0; i < strlen(str); i++){
            if(str[i] == '4' || str[i] == '7')
            count++;
        }
        if(count == 4 || count == 7){
            printf("YES");
        }else{
            printf("NO");
        }
    }

