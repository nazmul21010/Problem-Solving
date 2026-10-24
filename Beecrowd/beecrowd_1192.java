import java.util.Scanner;

public class beecrowd_1192 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < t; i++) {
            String s = scanner.nextLine();
            int a = Character.getNumericValue(s.charAt(0));
            int b = Character.getNumericValue(s.charAt(2));

            if (Character.isUpperCase(s.charAt(1)) && a != b) {
                System.out.println(b - a);
            } else if (a == b) {
                System.out.println(b * a);
            } else if (Character.isLowerCase(s.charAt(1))) {
                System.out.println(b + a);
            }
        }

        scanner.close();
    }
}
