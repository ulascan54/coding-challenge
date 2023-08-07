import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner input = new Scanner(System.in);
        boolean ifPresentInput = true;
        int i=1;
        while(ifPresentInput){
        String a = input.nextLine();
        System.out.println(i+" "+a);
        if(!input.hasNext()){
            ifPresentInput=false;
        }
        i++;
        }
        input.close();
        
    }
}
