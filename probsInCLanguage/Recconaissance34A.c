                                        A. Reconnaissance 2
                                        time limit per test 2 seconds
                                        memory limit per test 256 megabytes
                                        input standard input
                                        output standard output
n soldiers stand in a circle. For each soldier his height ai is known. A reconnaissance unit can be made of such two neighbouring soldiers, whose heights difference is minimal, i.e. |ai - aj| is minimal. So each of them will be less noticeable with the other. Output any pair of soldiers that can form a reconnaissance unit.

Input
The first line contains integer n (2 ≤ n ≤ 100) — amount of soldiers. Then follow the heights of the soldiers in their order in the circle — n space-separated integers a1, a2, ..., an (1 ≤ ai ≤ 1000). The soldier heights are given in clockwise or counterclockwise direction.

Output
Output two integers — indexes of neighbouring soldiers, who should form a reconnaissance unit. If there are many optimum solutions, output any of them. Remember, that the soldiers stand in a circle.

Examples
input
5
10 12 13 15 10
output
5 1
input
4
10 20 30 40
output
1 2


// solution:

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main(){
    int n, height[101], min = 1000, startPoint, endPoint;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &height[i]);
    }
    for(int i = 1; i <= n; i++){
        int j = i + 1;
        if(j > n){
            j = 1;
        }
        if(abs(height[i] - height[j]) < min){
            min = abs(height[i] - height[j]);
            startPoint = i;
            endPoint = j;
        }
    }
    printf("%d %d", startPoint, endPoint);
    return 0;
}
