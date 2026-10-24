import java.util.Scanner;

public class beecrowd_1754 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            double a, b;
            a = sc.nextDouble();
            b = sc.nextDouble();
            double res = Math.ceil(a / b);
            if (res == 1) {
                System.out.printf("%.0f\n", res + 1);
            } else {
                System.out.printf("%.0f\n", res);
            }

        }
    }
}