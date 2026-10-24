import java.util.Scanner;

public class beecrowd_1140 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String test;
        while (true) {
            test = sc.nextLine();
            if (test.equals("*")) {
                break;
            } else {
                String result = getUpper(test);

                char temp = result.charAt(0);
                int c = 1;
                for (int i = 0; i < result.length(); i++) {
                    if (result.charAt(i) == ' ') {
                        if (result.charAt(i + 1) != temp)
                            c++;
                    }
                }
                if (c == 1) {
                    System.out.printf("Y\n");
                } else {
                    System.out.printf("N\n");
                }

            }
        }

    }

    public static String getUpper(String str) {
        StringBuilder result = new StringBuilder();

        int len = str.length();
        for (int i = 0; i < len; i++) {
            if (str.charAt(i) >= 'a' && str.charAt(i) <= 'z') {
                result.append((char) (str.charAt(i) - ('a' - 'A')));
            } else {
                result.append(str.charAt(i));
            }
        }

        return result.toString();
    }
}
