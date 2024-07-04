package solutionsinJava;

import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.Collectors;

// A. Helpful Maths
                            // time limit per test2 seconds
                            // memory limit per test256 megabytes
                            // inputstandard input
                            // outputstandard output
// Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

// The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

// You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

// Input
// The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

// Output
// Print the new sum that Xenia can count.

// Examples
// input
// 3+2+1
// output
// 1+2+3
// input
// 1+1+3+1+3
// output
// 1+1+1+3+3
// input
// 2
// output
// 2

public class HelpfulMath339A {
     public static String arrangeSummans(int[] arr){
        Arrays.sort(arr);
        String resStr = Arrays.stream(arr).mapToObj(String::valueOf).collect(Collectors.joining("+"));
        return resStr;
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int[] arr = new int[(str.length() / 2) + 1];
        int j = 0;
        for(int i = 0; i < str.length(); i += 2){
            arr[j] = Integer.parseInt(String.valueOf(str.charAt(i)));
            j++;
        }
        String resStr = arrangeSummans(arr);
        System.out.println(resStr);
        // System.out.println(Arrays.toString(arr));
        sc.close();
    }
}
