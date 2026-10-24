import java.util.Scanner;

public class beecrowd_3128 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;
        a = sc.nextInt();
        b = sc.nextInt();
        if (a < 6 || b < 6) {
            System.out.println("NO");
        } else {
            if (a >= 18 || b >= 18 || (a >= 14 && b >= 14)) {
                System.out.println("YES");
                ;
            } else {
                System.out.println("NO");
            }
        }
    }
}