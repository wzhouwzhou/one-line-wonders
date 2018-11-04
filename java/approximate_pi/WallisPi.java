import java.util.stream.IntStream;

/**
 * Use Wallis method to find pi: https://en.wikipedia.org/wiki/Wallis_product
 * 
 * Need to use streams because simple iteration exits with stack overflow
 * unless huge stack is configured at runtime and Java doesn't do 
 * Tail Call Optimization/Elimination https://en.wikipedia.org/wiki/Tail_call 
 */
public class WallisPi {
	
	// Use Wallis method to find PI
	
	static double pi_wallis_product_stream(int iteration_count) {
		return 4 * IntStream.range(1, iteration_count).mapToDouble(j -> (1-(1/(Math.pow(1+(2*j),2))))).reduce(1, (x,y) -> x*y);
	}	

	public static void main(String [] args) {
		System.out.printf("%.16f\n",pi_wallis_product_stream(100000));
	}
}
