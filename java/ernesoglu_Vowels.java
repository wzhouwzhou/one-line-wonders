public class Vowels {
    private static void vowels(String str) { for (char ch : str.toCharArray()) for (char vovel : "aeiouy".toCharArray())  if (vovel == ch) System.out.print(vovel); }

    public static void main(String[] args) {
        vowels("Travelling alteration impression six all uncommonly");
    }
}
