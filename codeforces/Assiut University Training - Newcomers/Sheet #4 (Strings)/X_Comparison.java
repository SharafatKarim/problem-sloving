/**
 * X_Comparison
 */

import java.util.Arrays;
import java.util.Scanner;

public class X_Comparison {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.next();
        sc.close();

        if (str1.length() == 1) {
            System.out.println(str1);
            return;
        }

        String[] arr = new String[str1.length()];

        for (int i = 0; i < str1.length(); i++) {
            String one = str1.substring(0,i);
            String two = str1.substring(i, str1.length());

            char arr1[] = new char[one.length()];
            char arr2[] = new char[two.length()];

            for (int j = 0; j < one.length(); j++) {
                arr1[j] = one.charAt(j);
            }
            for (int j = 0; j < two.length(); j++) {
                arr2[j] = two.charAt(j);
            }

            
            Arrays.sort(arr1);
            Arrays.sort(arr2);
            
            System.out.println(one + " " + two);
            
            one = "";
            two = "";

            for (int j = 0; j < arr1.length; j++) {
                one += arr1[j];
            }
            for (int j = 0; j < arr2.length; j++) {
                two += arr2[j];
            }

            arr[i] = one+two;
        }
        
        Arrays.sort(arr);
        
        // System.out.println(arr[arr.length-0]);
        
        // for (int i = 0; i < arr.length; i++) {
        //     System.out.println(arr[i]);
        // }

        // char arr[] = new char[str1.length()];
        // for (int i = 0; i < str1.length(); i++) {
        //     arr[i] = str1.charAt(i);
        // }
        // Arrays.sort(arr);
        // System.out.println(arr);
    }
}