package JAVA_code;

import java.util.*;

public class M2644 {
    static int map[][];
    static boolean visit[];
    static int n;
    static int cnt[];
    static int m, a, b;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        a = sc.nextInt();
        b = sc.nextInt();

        m = sc.nextInt();

        map = new int[n+1][n+1];
        visit = new boolean[n+1];
        cnt = new int[n+1];

        for(int i = 1; i <= m; i++)
        {
            int x = sc.nextInt();
            int y = sc.nextInt();
            map[x][y] = 1;
            map[y][x] = 1;
        }

        dfs(a);

        if(!visit[b])
        {
            System.out.println("-1");
        }
        else
        {
            System.out.println(cnt[b]);
        }
    }

    static void dfs(int v)
    {
        visit[v] = true;
        if(v == b)
        {
            return;
        }
        else
        {
            for(int i = 1; i <= n; i++)
            {
                if(map[v][i] == 1 && !visit[i])
                {
                    visit[i] = true;
                    cnt[i] = cnt[v] +1;
                    dfs(i);
                }
            }
        }
    }
    
}
