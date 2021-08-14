package JAVA_code;

import java.util.*;

public class M2331 {

    public static int[] check = new int[1000000];
    static int get_Num(int a, int p)
    {
        int ans = 0;
        while(a > 0)
        {
            ans += Math.pow(a%10, p);
            a = a / 10;
        }
        return ans;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int p = sc.nextInt();

        sc.close();
        System.out.println(dfs(a, p, 1));
    }

    static int dfs(int a, int p, int cnt)
    {
        if(check[a] != 0)
        {
            return check[a] - 1;
        }
        check[a] = cnt;
        int b = get_Num(a, p);
        return dfs(b, p, cnt+1);
    }
}
