package JAVA_code;

import java.util.*;

public class M2667 {

    static int dx[] = {0,0,1,-1};
    static int dy[] = {1, -1, 0, 0};
    static int a[][];
    static int n;
    static int apart[] = new int[25*25];
    static int num = 0;
    static boolean visit[][];
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        a = new int[n+1][n+1];
        visit = new boolean[n+1][n+1];
        for(int i = 0; i < n; i++)
        {
            String tmp = sc.next();
            for(int j = 0; j < n; j++)
            {
                a[i][j] = tmp.charAt(j) - '0';
            }
        }
  
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[i][j] == 1 && !visit[i][j])
                { 
                    num++;
                    dfs(i, j);
                }
            }
        }

        Arrays.sort(apart);
        System.out.println(num);
        for(int i = 0; i < apart.length; i++)
        {
            if(apart[i] == 0){
                
            }
            else
            {
                System.out.println(apart[i]);
            }
        }

    }

    static void dfs(int x, int y)
    {
        visit[x][y] = true;
        apart[num]++;
        for(int i = 0; i < 4; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];

            if(xx >= 0 && yy >= 0 && xx < n && yy < n)
            {
                if(a[xx][yy] == 1 && !visit[xx][yy])
                    dfs(xx, yy);
            }
        }
    }   
}
