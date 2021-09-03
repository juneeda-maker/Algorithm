package JAVA_code;

import java.util.*;

public class M1325 {
    static int n, m, max;
    static int cnt;
    static int index = 0;
    static ArrayList<ArrayList<Integer>> gr;
    static boolean visit[];
    static int ans[];
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();

        int a,b;

        gr = new ArrayList<ArrayList<Integer>>(n+1);
        ans = new int[n+1];

        for (int i = 0; i <= n; i++) {
            gr.add(new ArrayList<Integer>());
        }

        for(int i = 1; i <= m; i++)
        {
            a = sc.nextInt();
            b = sc.nextInt();

            gr.get(a).add(b);
        }
        
        max = 0;

        for(int i = 1; i <= n; i++)
        {
            visit = new boolean[n+1];
            bfs(i);
        }
        
        for(int i = 1; i <= n; i++)
        {
            max = Math.max(max, ans[i]);
        }

        for(int i = 1; i <= n; i++)
        {
            if(ans[i] == max)   
                System.out.print(i + " ");
        }
    }

    static void bfs(int v)
    {
        Queue<Integer> q = new LinkedList<Integer>();
        q.add(v);
        visit[v] = true;

        while(!q.isEmpty())
        {
            int x = q.poll();
            for(int i = 0; i < gr.get(x).size(); i++)
            {
                int y = gr.get(x).get(i);
                if(!visit[y]) 
                {  
                    q.add(y);
                    visit[y] = true;
                    ans[y]++;
                }
            }
        }
    }

}
