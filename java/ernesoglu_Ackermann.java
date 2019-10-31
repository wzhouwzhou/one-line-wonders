public class Ackermann {
    private static int ackermann(int m, int n) { return m == 0 ? n + 1 : (m > 0 && n == 0) ? ackermann(m - 1, 1) : ackermann(m - 1, ackermann(m, n - 1)); }

    public static void main(String[] args) {
        System.out.println(ackermann(3,4));
    }
}