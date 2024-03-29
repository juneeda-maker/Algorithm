package JAVA_code;

import java.util.*;

public class M9465 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for(int i = 0; i < t; i++)
        {
            int n = sc.nextInt();
            int[][] dp = new int[2][n+1];
            int[][] s= new int[2][n+1];

            for(int j = 0; j < 2; j++)
            {
                for(int k = 1; k <= n; k++)
                    s[j][k] = sc.nextInt();
            }
            
            dp[0][1] = s[0][1];
            dp[1][1] = s[1][1];

            for(int a = 2; a <= n; a++)
            {
                dp[0][a] = Math.max(dp[1][a-1] , dp[1][a-2]) + s[0][a];
                dp[1][a] = Math.max(dp[0][a-1] , dp[0][a-2]) + s[1][a];
            }

            System.out.println(Math.max(dp[0][n], dp[1][n]));
        }
    }
}
