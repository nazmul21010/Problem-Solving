import java.util.Scanner;

public class beecrowd_2516 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {

            double s, va, vb;
            s = sc.nextDouble();
            va = sc.nextDouble();
            vb = sc.nextDouble();

            double x = va - vb;
            if (x <= 0) {
                System.out.println("impossivel");
            } else {
                double res = s / x;

                System.out.printf("%.2f\n", res);
            }
        }
        sc.close();
    }
}
