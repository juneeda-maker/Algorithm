package JAVA_code;

import java.util.Scanner;

public class M9095 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        int n;

        int[] dp = new int[12];
        
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;

        for(int i = 1; i <= t; i++)
        {
            n = sc.nextInt();

            for(int j = 4; j <= n; j++)
            {
                dp[j] = dp[j-3] + dp[j-2] + dp[j-1];
            }
            System.out.println(dp[n]);
        }
            
        sc.close();
    }
}
