package solutionsinJava;
                                // A. Bear and Big Brother
                                // time limit per test
                                // 1 second
                                // memory limit per test
                                // 256 megabytes
                                // input
                                // standard input
                                // output
                                // standard output

// Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

// Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

// Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

// After how many full years will Limak become strictly larger (strictly heavier) than Bob?
// Input

// The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.
// Output

// Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob.
// Examples
// Input
// Copy

// 4 7

// Output
// Copy

// 2

// Input
// Copy

// 4 9

// Output
// Copy

// 3

// Input
// Copy

// 1 1

// Output
// Copy

// 1

// Note

// In the first sample, Limak weighs 4 and Bob weighs 7 initially. After one year their weights are 4·3 = 12 and 7·2 = 14 respectively (one weight is tripled while the other one is doubled). Limak isn't larger than Bob yet. After the second year weights are 36 and 28, so the first weight is greater than the second one. Limak became larger than Bob after two years so you should print 2.

// In the second sample, Limak's and Bob's weights in next years are: 12 and 18, then 36 and 36, and finally 108 and 72 (after three years). The answer is 3. Remember that Limak wants to be larger than Bob and he won't be satisfied with equal weights.

// In the third sample, Limak becomes larger than Bob after the first year. Their weights will be 3 and 2 then.


import java.util.Scanner;
     
class BearAndBigBrother791{
    public static int countYears(int limak, int bob){
        int years = 0;
        while(limak <= bob){
            limak = limak * 3;
            bob = bob *2;
            years++;
        }
        
        return years;
    }
    public static void main(String[] arhs){
        Scanner sc = new Scanner(System.in);
            int limak = sc.nextInt();
            int bob = sc.nextInt();
            
            int years = countYears(limak, bob);
            System.out.println(years);
            sc.close();
    }
}