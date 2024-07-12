package solutionsinJava;

import java.util.Scanner;

// A. Translation
                            // time limit per test
                            // 2 seconds
                            // memory limit per test
                            // 256 megabytes
                            // input
                            // standard input
                            // output
                            // standard output

// The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (  and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.
// Input

// The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.
// Output

// If the word t is a word s, written reversely, print YES, otherwise print NO.
// Examples
// Input
// code
// edoc

// Output
// YES

// Input
// abb
// aba

// Output
// NO

// Input
// code
// code

// Output
// NO



public class Translation {
        public static String translatedCode(String s, String t){
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) != t.charAt(t.length() - 1 - i)){
                return "NO";
            }
        }
        return "YES";
    }
    
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        String s = scn.next();
        String t = scn.next();
        String translation = translatedCode(s, t);
        System.out.println(translation);
        scn.close();
        
    }
}
    