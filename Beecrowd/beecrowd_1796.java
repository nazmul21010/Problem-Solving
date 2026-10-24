import java.util.Scanner;

public class beecrowd_1796 {
    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();

        int arr[] = new int[t];

        int sum = 0;
        for (int i = 0; i < t; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < t; i++) {
            if (arr[i] == 0) {
                sum++;
            }
        }
        int x = Math.abs(sum - t);
        if (sum > x) {
            System.out.printf("Y\n");
        } else {
            System.out.printf("N\n");
        }
    }
}
