public class DigitsSum {
    private static int sumDigits(int number) { return (number != 0) ? sumDigits(number / 10) + Math.abs(number % 10) : 0; }

    public static void main(String[] args) {
        System.out.println(sumDigits(1982375));
    }
}
