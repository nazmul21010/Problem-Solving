import java.util.Scanner;

public class beecrowd_2679 {
    public static void main(String[] args) {
        int e;
        Scanner sc = new Scanner(System.in);
        e = sc.nextInt();
        if (e % 2 == 0) {
            System.out.printf("%d\n", e + 2);
        } else {
            System.out.printf("%d\n", e + 1);
        }
    }
}
