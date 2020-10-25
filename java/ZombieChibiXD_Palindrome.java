import java.lang.StringBuffer;

public class Palindrome 
{
  public static void main(String[] args)
  {
    String a = "coc";
    System.out.println("isPalindrome : " + a.equalsIgnoreCase(new StringBuffer(a).reverse().toString()));
  }
}