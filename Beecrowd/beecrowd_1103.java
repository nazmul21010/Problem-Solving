import java.util.Scanner;

public class beecrowd_1103 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h1, h2, m1, m2;
        while (true) {
            h1 = sc.nextInt();
            m1 = sc.nextInt();
            h2 = sc.nextInt();
            m2 = sc.nextInt();

            if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
                break;
            } else {
                int minute1 = h1 * 60 + m1;
                int minite2 = (h2 * 60 + m2);

                if (minute1 > minite2) {
                    minite2 += 24 * 60;
                }

                int final_minite = minite2 - minute1;
                System.out.printf("%d\n", final_minite);
            }
        }

    }
}