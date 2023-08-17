import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner input = new Scanner(System.in);
        int n= input.nextInt();
        int [] arr = new int [n];
        for (int i = 0; i < n; i++) {
            arr[i]=input.nextInt();
        }
        int count= 0, total=0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j <= arr.length; j++) {
                total = 0;
                for (int x : Arrays.copyOfRange(arr, i, j)) {
                    total+=x;
                }
                if(total<0)
                    count++;
            }
        }
        System.out.println(count);
    }
}
