import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int z;
            for(int j=0;j<n;j++){
                z=1;
                for(int x=1;x<=j;x++){
                         z*=2;
                }
                a+=z*b;
                System.out.print(a+" ");
            }
            System.out.println("");
        }
        in.close();
    }
}
