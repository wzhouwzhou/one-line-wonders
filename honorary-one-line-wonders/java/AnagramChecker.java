import java.util.*;
public class AnagramChecker
{
   public static void main(String[] args)
   {
      Scanner input = new Scanner(System.in);
      System.out.println("First word?");
      String word1 = input.next();
      System.out.println("Second word?");
      String word2 = input.next();
      if(isAnagram(word1,word2))
         System.out.println("true");
      else
         System.out.println("false");
   }
   public static boolean isAnagram(String s1, String s2)
   {
      ArrayList<String> composition = new ArrayList();
      ArrayList<Integer> tally = new ArrayList();
      contents(composition,tally,s1);
      ArrayList<String> composition2 = new ArrayList();
      ArrayList<Integer> tally2 = new ArrayList();
      contents(composition2,tally2,s2);
      for(int x=0; x<composition2.size(); x++) {
         if(!composition.contains(composition2.get(x)))
            return false;
         else {
            int k = composition.indexOf(composition2.get(x));
            if(tally.get(k)!=tally2.get(x))
               return false;
         }
      }
      return true;
   }
   public static void contents(ArrayList<String> a, ArrayList<Integer> b, String s)
   {
      for(int x=0; x<s.length(); x++) {
            if(a.contains(s.substring(x,x+1)))
               b.set(a.indexOf(s.substring(x,x+1)),b.get(a.indexOf(s.substring(x,x+1)))+1);
            else {
               a.add(s.substring(x,x+1));
               b.add(1);
            }
      }
   }
}
