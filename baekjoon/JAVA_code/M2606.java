package JAVA_code;

import java.util.*;

public class M2606 {
    static int map[][];
    static boolean visit[];
    static int n;
    static int m;
    static int cnt = 0;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();

        map = new int[n+1][n+1];
        visit = new boolean[n+1];

        for(int i = 1; i <= m; i++)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            map[a][b] = 1;
            map[b][a] = 1;
        }

        dfs(1);

        System.out.println(cnt);
    }

    static int dfs(int v)
    {
        visit[v] = true;
        
            for(int i = 1; i <= n; i++)
            {
                if(map[v][i] == 1 && !visit[i])
                {
                    cnt++;
                    visit[v] = true;
                    dfs(i);
                }
            }
        return cnt;
    }
}
