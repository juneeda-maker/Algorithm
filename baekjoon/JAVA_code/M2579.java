package JAVA_code;

import java.util.*;

public class M2579 {

    static int arr[];
    static int n;
    static int dp[];
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        arr = new int[n+1];

        for(int i = 1; i <= n; i++)
        {
            arr[i] = sc.nextInt();
        }

        dp = new int[n+1];

        dp[0] = 0;
        System.out.println(s(n));
        sc.close();
    }

    static int s(int n)
    {
        if(dp[n] != 0)
        {
            return dp[n];
        }
        if(n == 1 || n == 0) return arr[n];
        if(n == 2) return arr[1] + arr[2];

        return dp[n] = Math.max(s(n-3) + arr[n-1] + arr[n], s(n-2) + arr[n]);
    }
}
