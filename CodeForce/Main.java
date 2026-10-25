import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int x = sc.nextInt();
            int c = 1;
            int temp = x;
            List<String> v = new ArrayList<>();
            String str, str2 = "";
            for (int i = 0; i < x; i++) {
                str = sc.next();
                v.add(str);
            }
            if (x == 1) {
                System.out.println(v.get(0));
                v.clear();
            } else {
                for (int i = 0; i < v.size() - 1; i++) {
                    if (v.get(i).equals(v.get(i + 1))) {
                        str2 = v.get(i);
                        c++;
                    }
                }
                if (temp != c) {
                    System.out.println("ingles");
                } else if (c == temp) {
                    System.out.println(str2);
                }
                v.clear();
            }
        }
        sc.close();
    }
}
