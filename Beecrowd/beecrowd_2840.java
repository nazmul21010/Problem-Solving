import java.util.Scanner;

public class beecrowd_2840 {
    public static void main(String[] args) {
        long R, L;

        Scanner sc = new Scanner(System.in);
        R = sc.nextLong();
        L = sc.nextLong();

        double volume_of_balloon = (4.0 / 3.0) * Math.PI * Math.pow(R, 3);

        long number_of_balloons = (long) (L / volume_of_balloon);
        System.out.println(number_of_balloons);

    }
}