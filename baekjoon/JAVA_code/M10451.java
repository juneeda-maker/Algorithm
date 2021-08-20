package JAVA_code;

import java.util.*;

public class M10451 {

    static boolean visit[];
    static int t;
    static int n;
    static int map[][];
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        int tmp;
        while(t-- > 0)
        {
            n = sc.nextInt();
            
            map = new int[n+1][n+1];
            for(int i = 1; i <= n; i++)
            {
                tmp = sc.nextInt();
                map[i][tmp] = 1;
            }

            visit = new boolean[n+1];
            int cnt = 0;

            for(int i = 1; i <= n; i++)
            {
                if(visit[i] == false)
                {
                    dfs(i);
                    cnt++;
                }
            }
            System.out.println(cnt);
        }
    }

    public static void dfs(int v)
    {
        for(int i = 1; i <= n; i++)
        {
            if(!visit[v] && map[v][i] == 1)
            {
                visit[v] = true;
                dfs(i);
            }
        }
    }
}
