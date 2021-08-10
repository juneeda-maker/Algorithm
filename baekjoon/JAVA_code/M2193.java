package JAVA_code;

import java.util.*;

public class M2193 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        long[] dp = new long[n+1];

        dp[0] = 0;
        dp[1] = 1;

        for(int i = 2; i <= n; i++)
        {
            dp[i] = dp[i-1]  + dp[i -2];
        }

        System.out.println(dp[n]);
        sc.close();
    }
}
