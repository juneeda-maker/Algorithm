package JAVA_code;

import java.util.*;

public class M1707 {
    static Scanner scanner =  new Scanner(System.in);
    static ArrayList<ArrayList<Integer>> arrayList;
    static int[] colors;
    static boolean check;

    static final int RED = 1;
    static final int BLUE = -1;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int k = sc.nextInt();

        while(k-- > 0)
        {
            int v = sc.nextInt();
            int e = sc.nextInt();

            arrayList = new ArrayList<>();
            colors = new int[v+1];
            check = true;

            for(int i = 1; i <= v; i++)
            {
                arrayList.add(new ArrayList<Integer>());
                colors[i] = 0;
            }

            while(e-- > 0)
            {
                int v1 = sc.nextInt();
                int v2 = sc.nextInt();

                arrayList.get(v1).add(v2);
                arrayList.get(v2).add(v1);
            }

            for(int i = 1; i <= v ; i++)
            {
                if(!check)
                    break;

                if(colors[i] == 0)
                {
                    bfs(i, RED);
                }
            }

            System.out.println(check ? "YES" : "NO");
        }
    }

    static void bfs(int start, int color)
    {
        Queue<Integer> q = new LinkedList<>();

        q.add(start);
        colors[start] = color;

        while(!q.isEmpty() && check)
        {
            int v = q.poll();

            for(int advj : arrayList.get(v))
            {
                if(colors[advj] == 0)
                {
                    q.add(advj);
                    colors[advj] = colors[v] * -1;
                }
                else if(colors[v] + colors[advj] != 0)
                {
                    check = false;
                    return;
                }
            }
        }
    }
}
