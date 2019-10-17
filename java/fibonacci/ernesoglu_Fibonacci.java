public class Fibonacci {

    private static int fibonacci(int num) { return num <= 1 ? num : fibonacci(num - 1) + fibonacci(num - 2); }

    public static void main(String[] args) {
        System.out.println(fibonacci(12));
    }
}
