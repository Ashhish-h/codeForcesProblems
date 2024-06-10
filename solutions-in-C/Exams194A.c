//                                         A. Exams
//                                 time limit per test 2 seconds
//                                 memory limit per 256 megabytes
//                                     input standard input
//                                     output standard output

// One day the Codeforces round author sat exams. He had n exams and he needed to get an integer from 2 to 5 for each exam. He will have to re-sit each failed exam, i.e. the exam that gets mark 2.

// The author would need to spend too much time and effort to make the sum of his marks strictly more than k. That could have spoilt the Codeforces round. On the other hand, if the sum of his marks is strictly less than k, the author's mum won't be pleased at all.

// The Codeforces authors are very smart and they always get the mark they choose themselves. Also, the Codeforces authors just hate re-sitting exams.

// Help the author and find the minimum number of exams he will have to re-sit if he passes the exams in the way that makes the sum of marks for all n exams equal exactly k.
// Input

// The single input line contains space-separated integers n and k (1 ≤ n ≤ 50, 1 ≤ k ≤ 250) — the number of exams and the required sum of marks.

// It is guaranteed that there exists a way to pass n exams in the way that makes the sum of marks equal exactly k.
// Output

// Print the single number — the minimum number of exams that the author will get a 2 for, considering that the sum of marks for all exams must equal k.
// Examples
// Input
// 4 8

// Output
// 4

// Input
// 4 10

// Output
// 2

// Input
// 1 3

// Output
// 0

// Note:
// In the first sample the author has to get a 2 for all his exams.
// In the second sample he should get a 3 for two exams and a 2 for two more.
// In the third sample he should get a 3 for one exam.

//solutions-

    #include<stdio.h>
    int main(){
        int n, k;
        scanf("%d %d", &n, &k);
        int reSit = (n * 3) - k;
        if(reSit < 0){
            printf("%d", 0);
        } else{
            printf("%d", reSit);
        }
        return 0;
    }