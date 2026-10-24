import java.util.Scanner;

public class beecrowd3126 {

    public static void main(String[] args) {
        int t, sum = 0;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        int arr[] = new int[t];
        for (int i = 0; i < t; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < t; i++) {
            if (arr[i] == 0) {
                sum++;
            }
        }
        System.out.printf("%d\n", t - sum);
    }
}