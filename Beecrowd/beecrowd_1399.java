import java.util.Scanner;

public class beecrowd_1399 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, m, u, l, r, v, p;
        n = sc.nextInt();
        m = sc.nextInt();
        u = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        l = sc.nextInt();
        r = sc.nextInt();
        v = sc.nextInt();
        p = sc.nextInt();
        int k = 0;
        for (int i = l - 1; i < r; i++) {
            if (arr[i] < v) {
                k++;
            }
        }
        int res = (u * k) / (r - l + 1);
        arr[p - 1] = res;
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
    }
}
