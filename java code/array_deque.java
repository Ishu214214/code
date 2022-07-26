import java.util.*;
public class array_deque
{
    
    /** 
     * @param args
     */
    public static void main(String[] args) {
        ArrayDeque<Integer> l1 = new ArrayDeque<>();
        l1.add(4);
        l1.addLast(1);
        System.out.println(l1);
        System.out.println(l1.getLast());

        System.out.println(l1.getFirst());
    }
    
}
