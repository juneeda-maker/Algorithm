package JAVA_code;

import java.util.*;

public class M1260 {

    public static int[][] graph;
    public static int n, m, v;
    public static boolean[] check;


    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        v = sc.nextInt();

        graph = new int[n+1][n+1];
        check = new boolean[n+1];

        for(int i = 1; i <= m; i++)
        {
            int x = sc.nextInt();
            int y = sc.nextInt();

            graph[x][y] = 1;
            graph[y][x] = 1;
        }
        
        dfs(v);

        Arrays.fill(check, false);

        bfs(v);
    }

    static void dfs(int v)
    {
        check[v] = true;
        System.out.println(v);
        
        for(int i = 1; i <= n; i++)
        {
            if(graph[v][i] == 1 && check[i] == false)
            {
                dfs(i);
            }
        }
    }

    static void bfs(int v)
    {
        Queue<Integer> q = new LinkedList<Integer>();
        q.add(v);
        check[v] = true;

        while(!q.isEmpty())
        {
            int tmp = q.peek();
            q.poll();

            System.out.println(tmp);

            for(int i = 1; i <= n; i++)
            {
                if(graph[tmp][i] == 1 && check[i] == false)
                {
                    q.add(i);
                    check[i] = true;
                }
            }
        }
    }
}
