import java.util.Scanner;

public class beecrowd_2388 {

    public static void main(String[] args) {
        int t, s = 0;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int x, y;
            x = sc.nextInt();
            y = sc.nextInt();
            s += sum(x, y);

        }
        System.out.println(s);
    }

    public static int sum(int x, int y) {
        return x * y;
    }
}