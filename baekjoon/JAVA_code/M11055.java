package JAVA_code;

import java.util.*;

public class M11055 {
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

        d[1] = a[1];

        for(int i = 2; i <= n; i++)
        {
            d[i] = a[i];
            for(int j = 1; j < i; j++)
            {
                if(a[i] > a[j])
                {
                    d[i] = Math.max(d[i], d[j] + a[i]);
                }
            }
        }

        int max = 0;

        for(int i = 1; i <= n; i++)
        {
            if(d[i] > max)    
                max = d[i];
        }

        sc.close();
        System.out.println(max);
    }
}
