package JAVA_code;

import java.util.*;

class board{
    int x;
    int y;
    board(int x , int y)
    {
        this.x = x;
        this.y = y;
    }
}

public class M2178 {
    static int n;
    static int m;
    static int map[][];
    static boolean visit[][];
    static int dx[] = {0, -1, 0, 1};
    static int dy[] = {-1, 0, 1, 0};
    static Queue<board> q;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();

        q = new LinkedList<board>();
        map = new int[n+1][m+1];
        visit = new boolean[n+1][m+1];

        for(int i = 1; i <= n; i++)
        {
            String s = sc.next();
            for(int j = 1; j <= m; j++)
            {
                map[i][j] = s.charAt(j-1) - '0';
            }
        }

        q.add(new board(1,1));
        visit[1][1] = true;
        BFS();
        System.out.println(map[n][m]);

    }

    public static void BFS()
    {
        while(!q.isEmpty())
        {
            board b = q.remove();

            int x = b.x;
            int y = b.y;

            for(int i = 0; i < 4; i++)
            {
                int xx = x + dx[i];
                int yy = y + dy[i];
                
                if(xx > 0 && yy > 0 && xx <= n && yy <= m)
                    if(map[xx][yy] != 0 && !visit[xx][yy])
                    {
                        q.add(new board(xx, yy));
                        visit[xx][yy] = true;
                        map[xx][yy] = map[x][y] +1;
                    }
                
            }
        }
        
    }
}
