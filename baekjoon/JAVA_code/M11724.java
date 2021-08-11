package JAVA_code;

import java.util.*;

public class M11724 {

    static boolean[] check;
    static int n;
    static int m;
    static int map[][];
    static int res = 0;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();

        map = new int[n+1][n+1];
        check = new boolean[n + 1];
        

        for(int j = 1; j <= m; j++)
        {
            int u = sc.nextInt();
            int v = sc.nextInt();
            map[u][v] = map[v][u] = 1;
        }
    
        for(int i = 1; i <= n; i++)
        {
            if(check[i] == false)
            {
                bfs(i);
                res++;
            }
        }
        sc.close();

        System.out.println(res);
    }

    public static void bfs(int v)
    {
        Queue<Integer> q = new LinkedList<Integer>();
        check[v] = true;
        q.add(v);

        while(!q.isEmpty())
        {
            int x = q.poll();
            for(int i = 1; i <= n; i++)
            {
                if(map[x][i] == 1 && check[i] == false)
                {
                    q.add(i);
                    check[i] = true;
                }
            }
        }
    }
}
