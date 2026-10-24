import java.util.Scanner;

public class beecrowd_1612 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();

        double arr[] = new double[t];
        for (int i = 0; i < t; i++) {
            arr[i] = sc.nextDouble();
        }
        for (int i = 0; i < t; i++) {
            System.out.printf("%.0f\n", Math.ceil(arr[i] / 2.0));
        }
    }
}
