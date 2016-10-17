import java.util.*;
public class Solution {
    static List <Integer >list  =  new ArrayList<Integer>();
    public static List<Integer> lexicalOrder(int n) {
      generateLexicographical(1,n);
      return list;
    }
    public static void generateLexicographical(int lower, int upper){
      for (int i = 1; i < 10; i++)
        generateLexicographical(lower, upper, i);
    }
    public static void generateLexicographical(int lower, int upper, int current){
      if (lower <= current && current <= upper)
        list.add(current);

      if (current > upper)
        return;
      for (int i = 0; i < 10; i++)
        generateLexicographical(lower, upper, 10*current + i);
    }

    public static void main(String[] args) {
      //generateLexicographical(1, 105);
      Scanner scanner = new Scanner(System.in);
      int n = scanner.nextInt();
      lexicalOrder(n);
      for(Integer i: list){
        System.out.println(i);
      }
    }
}
