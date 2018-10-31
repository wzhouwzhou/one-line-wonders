class ValidAnagram {
    
    public static boolean isAnagram(String s, String t) {
        char[] x = s.toCharArray();
        char[] y = s.toCharArray();
        
        Arrays.sort(x);
        Arrays.sort(y);
        
        return Arrays.equals(x,y);
    }
    
    public static void main(String[] args) {
        System.out.println(isAnagram("car","rat"));
    }
}