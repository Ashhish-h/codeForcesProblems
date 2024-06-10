//                                A. Insomnia cure
//                         time limit per test 2 seconds
//                         memory limit per test 256 megabytes
//                             input standard input
//                             output standard output

// «One dragon. Two dragon. Three dragon», — the princess was counting. She had trouble falling asleep, and she got bored of counting lambs when she was nine.

// However, just counting dragons was boring as well, so she entertained herself at best she could. Tonight she imagined that all dragons were here to steal her, and she was fighting them off. Every k-th dragon got punched in the face with a frying pan. Every l-th dragon got his tail shut into the balcony door. Every m-th dragon got his paws trampled with sharp heels. Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.

// How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?
// Input

// Input data contains integer numbers k, l, m, n and d, each number in a separate line (1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 105).
// Output

// Output the number of damaged dragons.
// Examples
// Input
// 1
// 2
// 3
// 4
// 12

// Output
// 12

// Input
// 2
// 3
// 4
// 5
// 24

// Output
// 17

// Note:
// In the first case every first dragon got punched with a frying pan. Some of the dragons suffered from other reasons as well, but the pan alone would be enough.
// In the second case dragons 1, 7, 11, 13, 17, 19 and 23 escaped unharmed.


package solutionsinJava;

import java.util.Scanner;

public class InsomniaCure148A {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        int l = in.nextInt();
        int m = in.nextInt();
        int n = in.nextInt();
        int d = in.nextInt();
        int count = 0;
        for(int i = 1; i <= d; i++){
            if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
                count++;
            }
        }
        in.close();
        System.out.println(count);
    } 
}
