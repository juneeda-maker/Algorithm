package JAVA_code;

import java.util.ArrayList;


public class Test {
        // public int sum(int a, int b) {
        //     return a+b;
        // }
    
        // public static void main(String[] args) {
        //     int a = 3;
        //     int b = 4;
    
        //     Test myTest = new Test();
        //     int c = myTest.sum(a, b);
    
        //     System.out.println(c);
        // }

        public static void main(String[] args)
        {
            ArrayList<Integer> list  = new ArrayList<Integer>();

            list.add(0, 1);
            list.add(0, 3);
            System.out.println(list.get(0));
        }
    }

