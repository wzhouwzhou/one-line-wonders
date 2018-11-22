//I did them one better: put the entire class on one line (on my phone, no less)
public class SumDigits{public static int sumDigits(int num){return (""+num).chars().reduce(0,(x,y) -> x+(y-'0');}public static void main(String[] args){System.out.println(sumDigits(2147483647));}}
