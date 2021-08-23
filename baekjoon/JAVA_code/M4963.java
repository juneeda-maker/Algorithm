package JAVA_code;

import java.util.*;

public class M4963 {

    static int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
    static int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
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

            island = new int[h][w];
            visit = new boolean[h][w];

            count = 0;

            if(w == 0 && h == 0)
                break;
            
            for(int i = 0; i < h; i++)
            {
                for(int j = 0; j < w; j++)
                {
                    island[i][j] = sc.nextInt();
                }
            }

            for(int i = 0; i < h; i++)
            {
                for(int j = 0; j < w; j++)
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

            
            if(xx >= 0 && yy >= 0 && xx < h && yy < w)
            {
                if(island[xx][yy] == 1 && !visit[xx][yy])
                {
                    dfs(xx, yy);
                }
            }
        }
    }
}
