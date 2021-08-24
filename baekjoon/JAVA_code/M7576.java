package JAVA_code;

import java.io.*;
import java.util.*;

class tomato{
    int x;
    int y;
    
    tomato(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
}


public class M7576 {

    static int m; //가로
    static int n; //세로
    
    static int dx[] = {0, -1, 0, 1};
    static int dy[] = {-1, 0, 1, 0};
    static int board[][];
    static Queue<tomato> q;

    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        m = sc.nextInt(); //가로
        n = sc.nextInt(); //세로

        board = new int[n][m];

        q = new LinkedList<tomato>();

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                board[i][j] = sc.nextInt();

                if(board[i][j] == 1)
                {
                    q.add(new tomato(i, j));
                }
                    
            }
        }
        System.out.println(BFS());
    }

    public static int BFS()
    {
        while(!q.isEmpty())
        {
            tomato t = q.remove();

            int x = t.x;
            int y = t.y;

            for(int i = 0; i < 4; i++)
            {
                int xx = x + dx[i];
                int yy = y + dy[i];

                if(xx >= 0 && yy >= 0 && xx < n && yy < m)
                {
                    if(board[xx][yy] == 0)
                    {
                        q.add(new tomato(xx, yy));
                        board[xx][yy] = board[x][y] + 1;
                    }
                }
            }

        }

        int day = Integer.MIN_VALUE;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(board[i][j] == 0)
                    return -1;
                day = Math.max(board[i][j], day);
            }
        }

        if(day == 1)
        {
            return 0;
        }

        return day - 1;
    }
}
