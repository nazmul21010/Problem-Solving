import java.util.Random;

public class random {

    public static void main(String[] args) {
        Random r = new Random();
        int rr = r.nextInt(50);
        if (rr != 0) {
            int x = 1805 / rr;
            System.out.println(x);
        }
        if (rr == 0) {

            System.out.println(rr);
        }
    }
}