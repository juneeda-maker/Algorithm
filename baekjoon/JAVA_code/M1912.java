package JAVA_code;
import java.util.*;

public class M1912 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] a = new int[n+1];
        int[] d = new int[n+1];

        for(int i = 1; i <= n; i++)
        {
            a[i] = sc.nextInt();
        }

        int res = a[1];
        d[1] = a[1];

        for(int i = 2; i <= n; i++)
        {
            d[i] = Math.max(a[i], a[i] + d[i-1]);
            res = Math.max(res, d[i]);
        }
        sc.close();
        System.out.println(res);
    }    
}
