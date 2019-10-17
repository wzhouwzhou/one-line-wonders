import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;
import java.util.stream.Collectors;

public class StreamExample{
    public static void main(String[] args)
    {

        List<String> animals = new ArrayList<String>(Arrays.asList("Hairy dog", "Shorty dog", "Grumpy cat", "Shiba Inu dog", "Lion dog", "Kitty cat"));

//        Collect strings that contain "dog" to a list
        List<String> dogs = animals.stream().filter(o->o.contains("dog")).collect(Collectors.toList());;

        System.out.println(dogs);

    }
}
