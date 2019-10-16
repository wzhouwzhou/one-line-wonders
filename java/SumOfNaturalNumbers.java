/*
 @author : Priti Chattopadhyay
 */

//importing necessary packages
import java.util.*;

public class SumOfNaturalNumbers{

	//one line to find sum of N natural numbers
	int findSum(int N){ return (N*(N + 1))/2;}

	//Driver code to test the function
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		SumOfNaturalNumbers obj = new SumOfNaturalNumbers();
		int N;
		N = sc.nextInt();
		System.out.println(obj.findSum(N));
	}
}	
