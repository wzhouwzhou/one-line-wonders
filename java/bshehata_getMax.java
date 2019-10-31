import java.util.ArrayList;
import java.util.Arrays;
import java.util.stream.Collectors;

/**
 * Get largest element from array of Integers
 */
public class getMax {

    /**
     *  Get Statistical Max.
     */
    static Integer getMax(ArrayList<Integer> toGetMaxOf) {
        return toGetMaxOf.stream().collect(Collectors.summarizingInt(Integer::intValue)).getMax();
    }

    public static void main(String[] args) {
        Integer[] toGetMaxOf = {1, 3, 2, 4, 5, 6, 2};
        System.out.printf(getMax(new ArrayList<>(Arrays.asList(toGetMaxOf))).toString());
    }

}
