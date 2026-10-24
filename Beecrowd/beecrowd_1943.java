import java.util.Scanner;

public class beecrowd_1943 {
    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        if (a == 1) {
            System.out.printf("Top 1\n");
        } else if (a > 1 && a <= 3) {
            System.out.printf("Top 3\n");
        } else if (a > 3 && a <= 5) {
            System.out.printf("Top 5\n");
        } else if (a > 5 && a <= 10) {
            System.out.printf("Top 10\n");
        } else if (a > 10 && a <= 25) {
            System.out.printf("Top 25\n");
        } else if (a > 25 && a <= 50) {
            System.out.printf("Top 50\n");
        } else if (a > 50 && a <= 100) {
            System.out.printf("Top 100\n");
        }
    }
}