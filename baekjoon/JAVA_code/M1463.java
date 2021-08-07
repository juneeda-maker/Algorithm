package JAVA_code;

import java.util.*;
import java.lang.Math;

public class M1463 {

    public static int[] dp;
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        
        int x = in.nextInt();
        
        dp = new int[x+1];
        dp[0] = dp[1] = 0;
        
        for(int i = 2; i <= x; i++)
        {
            dp[i] = dp[i-1] + 1;
            if(i % 2 == 0)
                dp[i] = Math.min(dp[i], dp[i/2] + 1);
            if(i % 3 == 0)
                dp[i] = Math.min(dp[i], dp[i/3] + 1);
        }

        System.out.println(dp[x]);
        in.close();
    }
}
