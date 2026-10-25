import java.util.Scanner;

public class cu_contest {

    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        String s;
        s.charAt(t)
        Swap(45,89);
        int counter = 1;
        for (int i = 0; i < t; i++) {
            double a, b;
            a = sc.nextInt();
            b = sc.nextInt();
            printf("Case #%d: %d\n", counter, count(a, b));
        }
    }

    public static int count(int a, int b) {
        double x, y;
        x = a;
        y = b;
        if (a < b) {
            return 1;
        }
        return b;
    }
}