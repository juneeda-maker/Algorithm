package JAVA_code;

import java.util.*;

public class M10844 {

    static long mod = 1000000000;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long res = 0;

        long[][] dp = new long [n+1][10];

        for(int i = 1; i <= 9; i++)
        {
            dp[1][i] = 1;
        }

        for(int i = 2; i <= n; i++)
        {
            for(int j = 0; j <= 9; j++)
            {
                if(j == 0)
                {
                    dp[i][0] = dp[i-1][1] % mod;
                }
                else if(j == 9)
                {
                    dp[i][9] = dp[i-1][8] % mod;
                }
                else 
                {
                    dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % mod;
                }
            }
        }
        for(int i = 0; i <= 9; i++)
        {
            res += dp[n][i];
        }

        System.out.println(res % mod);
        sc.close();
    }
}
