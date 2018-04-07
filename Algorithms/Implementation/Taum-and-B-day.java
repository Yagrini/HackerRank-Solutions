import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long b = in.nextLong();
            long w = in.nextLong();
            long x = in.nextLong();
            long y = in.nextLong();
            long z = in.nextLong();
            BigInteger amount = BigInteger.valueOf(100000L);
            if(x<y && x+z<y) amount = (BigInteger.valueOf(b).multiply(BigInteger.valueOf(x))).add(BigInteger.valueOf(w).multiply(BigInteger.valueOf(x).add(BigInteger.valueOf(z))));
	        else if(y<x && y+z<x) amount = (BigInteger.valueOf(w).multiply(BigInteger.valueOf(y))).add(BigInteger.valueOf(b).multiply(BigInteger.valueOf(y).add(BigInteger.valueOf(z))));
	        else amount = (BigInteger.valueOf(b).multiply(BigInteger.valueOf(x))).add(BigInteger.valueOf(w).multiply(BigInteger.valueOf(y)));
	        System.out.println(amount);
        }
    }
}


