package JAVA_code;

import java.util.*;

public class M9466 {
    
    static int[] student;
    static boolean[] visit, teamed;
    static int cnt;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int t;
        t = sc.nextInt();

        while(t-- > 0)
        {
            int n;
            n = sc.nextInt();

            cnt = 0;

            student = new int[n+1];
            visit = new boolean[n+1];
            teamed = new boolean[n+1];

            for(int i = 1; i <= n; i++)
            {
                student[i] = sc.nextInt();
            }

            for(int i = 1; i <= n; i++)
            {
                if(!teamed[i])
                {
                    dfs(i);
                }
                
            }
            System.out.println(n - cnt);
        }
    }

    static void dfs(int v)
    {
        if(visit[v])
        {
            teamed[v] = true;
            cnt++;
        }
        else
        {
            visit[v] = true;
        }
        if(!teamed[student[v]])
            dfs(student[v]);
        teamed[v] = true;
    }
}
