package solutionsinJava;
                            // A. Way Too Long Words
                            // time limit per test1 second
                            // memory limit per test256 megabytes
                            // inputstandard input
                            // outputstandard output
// Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

import java.util.Scanner;

// Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

// This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

// Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

// You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

// Input
// The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.

// Output
// Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.

// Examples
// input
// 4
// word
// localization
// internationalization
// pneumonoultramicroscopicsilicovolcanoconiosis

// output
// word
// l10n
// i18n
// p43s


public class WayToLongWords71A {
     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] input = new String[n];
        String[] res = new String[n];
        for (int i = 0; i < n; i++) {
            input[i] = sc.next();
        }
        for (int index = 0; index < input.length; index++) {
            if (input[index].length() <= 10) {
                res[index] = input[index];
            } else {
                String subStringLength = Integer.toString(input[index].length() - 2);
                res[index] = input[index].charAt(0) + subStringLength + input[index].charAt(input[index].length() - 1);
            }
        }
 
        for (int index = 0; index < res.length; index++) {
            System.out.println(res[index]);
        }
        sc.close();
    }
}
