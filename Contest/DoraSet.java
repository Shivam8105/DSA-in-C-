import java.util.*;
public class DoraSet {

    public static int maxOperations(int l, int r) {
        int range = r - l + 1;
        if (range < 3) {
            return 0;
        }
        if (l == 1 && r == 3) {
            return 1;
        }
        int count = 0;
        for (int i = l; i <= r - 2; i++) {
            if (gcd(i, i + 1) == 1 && gcd(i + 1, i + 2) == 1 && gcd(i, i + 2) == 1) {
                count++;
                i += 2;
            }
        }
        return count;
    }
    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int l = sc.nextInt();
            int r = sc.nextInt();

            System.out.println(maxOperations(l, r));
        }
        sc.close();
    }
}