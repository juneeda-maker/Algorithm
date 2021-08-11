package JAVA_code;

import java.util.*;

public class M11722 {
   public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] a = new int[n+1];
        int[] d = new int[n+1];

        for(int i = 1; i <= n; i++)
        {
            a[i] = sc.nextInt();
        }
        
        d[1] = 1;

        for(int i = 2; i <= n; i++)
        {
            d[i] = 1;
            for(int j = 1; j < i; j++)
            {
                if(a[i] < a[j])
                {
                    d[i] = Math.max(d[i], d[j] + 1);
                }
            }
        }

        int max = 0;

        for(int i = 1; i <= n; i++)
        {
            if(max < d[i])
                max = d[i];
        }
        sc.close();
        System.out.println(max);
    }
}
