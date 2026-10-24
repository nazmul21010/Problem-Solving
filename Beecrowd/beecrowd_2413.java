import java.util.Scanner;

public class beecrowd_2413 {
    public static void main(String[] args) {
        String str, str2;
        Scanner sc = new Scanner(System.in);
        str = sc.next();
        str2 = sc.next();
        long x = Integer.parseInt(str);
        long y = Integer.parseInt(str2);
        long z = x + y;
        String s = String.valueOf(z);
        System.out.println(s);
    }
}