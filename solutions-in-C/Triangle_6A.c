//                                             A. Triangle
//                                        time limit per test 2 seconds
//                                        memory limit per test 64 megabytes
//                                        input: standard input
//                                        output: standard output
// Johnny has a younger sister Anne, who is very clever and smart. As she came home from the kindergarten, she told his brother about the task that her kindergartener asked her to solve. The task was just to construct a triangle out of four sticks of different colours. Naturally, one of the sticks is extra. It is not allowed to break the sticks or use their partial length. Anne has perfectly solved this task, now she is asking Johnny to do the same.

// The boy answered that he would cope with it without any difficulty. However, after a while he found out that different tricky things can occur. It can happen that it is impossible to construct a triangle of a positive area, but it is possible to construct a degenerate triangle. It can be so, that it is impossible to construct a degenerate triangle even. As Johnny is very lazy, he does not want to consider such a big amount of cases, he asks you to help him.

// Input
// The first line of the input contains four space-separated positive integer numbers not exceeding 100 — lengthes of the sticks.

// Output
// Output TRIANGLE if it is possible to construct a non-degenerate triangle. Output SEGMENT if the first case cannot take place and it is possible to construct a degenerate triangle. Output IMPOSSIBLE if it is impossible to construct any triangle. Remember that you are to use three sticks. It is not allowed to break the sticks or use their partial length.

// Examples
// input
// 4 2 1 3
// output
// TRIANGLE
// input
// 7 2 2 4
// output
// SEGMENT
// input
// 3 5 9 1
// output
// IMPOSSIBLE

// solution-

#include<stdio.h>
int main(){
    int line[4];
    for(int i = 0; i < 4; i++){
        scanf("%d", &line[i]);
    }
    
    for(int i = 0; i < sizeof(line[0]) - 1; i++){
        for(int j = i + 1; j > 0; j --){
            if(line[j] < line[j - 1]){
                int temp = line[j];
                line[j] = line[j - 1];
                line[j - 1] = temp;
            } else {
                break;
            }
        }
    }
        // for(int i = 0; i < sizeof(line[0]); i++){
        //     printf("%d", line[i]);
        // }
        if(line[0] + line[1] > line[2] || line[1] + line[2] > line[3]){
            printf("TRIANGLE");
        
        } else if(line[0] + line[1] == line[2] || line[1] + line[2] == line[3]){
            printf("SEGMENT");
        } else{
            printf("IMPOSSIBLE");
        }
    return 0;
}