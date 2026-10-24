import java.util.Scanner;

public class beecrowd_2926 {
    public static void main(String[] args) {
        int x;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        print(x);

    }

    public static void print(int x) {
        if (x == 1) {
            System.out.println("Entao eh Natal!");
        } else if (x > 1) {
            String ch = "Entao eh Natal!";
            for (int i = 0; i < ch.length(); i++) {
                System.out.print(ch.charAt(i));
                if (ch.charAt(i) == 'a') {
                    for (int j = 0; j < x - 1; j++) {
                        System.out.print("a");
                    }
                }
            }
            System.out.print("\n");
        }
    }
}
