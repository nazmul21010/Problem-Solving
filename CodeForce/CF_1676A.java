import java.util.Scanner;

public class CF_1676A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tt = sc.nextInt();

        for (int i = 0; i < tt; i++) {
            String str = sc.next();

            int sum1 = 0, sum2 = 0;
            for (int j = 0; j < 3; j++) {
                sum1 += str.charAt(j) - '0';
                sum2 += str.charAt(j + 3) - '0';
            }

            if (sum1 == sum2) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        sc.close();
    }
}
