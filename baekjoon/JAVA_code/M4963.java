package JAVA_code;

import java.util.*;

public class M4963 {

    static int dx[] = {0,1,0,-1,1,-1,1,-1};
    static int dy[] = {1,0,-1,0,1,-1,-1,1};
    static boolean visit[][];
    static int island[][];
    static int count;
    static int w, h;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);      

        while(true)
        {
            w = sc.nextInt();
            h = sc.nextInt();

            island = new int[w+1][h+1];
            visit = new boolean[w+1][h+1];

            count = 0;

            if(w == 0 && h == 0)
                break;
            
            for(int i = 0; i < w; i++)
            {
                for(int j = 0; j < h; j++)
                {
                    island[i][j] = sc.nextInt();
                }
            }

            for(int i = 0; i < w; i++)
            {
                for(int j = 0; j < h; j++)
                {
                    if(island[i][j] == 1 && !visit[i][j])
                    {
                        dfs(i, j);
                        count++;
                    }
                }
            }

            System.out.println(count);
        }
    }

    static void dfs(int x, int y)
    {
        visit[x][y] = true;
        for(int k = 0; k < 8; k++)
        {
            int xx = x + dx[k];
            int yy = y + dy[k];

            if(xx >= 0 && yy >= 0 && xx < w && yy < h)
            {
                if(island[xx][yy] == 1 && !visit[xx][yy])
                {
                    dfs(xx, yy);
                }
            }
        }
    }
}
