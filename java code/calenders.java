import java.util.*;

/**
 * 
 * java docs ka leya / or double **
 */
/**
 * description of class calenders 
 *
 * @author Ishu
 * @version 0.1
 * @see Java Docs
 */
public class calenders {

  public static void main(String[] args) {
    Calendar cal = Calendar.getInstance();
    Calender c1 = new Calender();

    System.out.println(c1);
    // System.out.println(c1.getInstance);
    System.out.println(cal);
    System.out.println(cal.getInstance());
    System.out.println(cal.getCalendarType());
    System.out.println(cal.getTimeInMillis());
    // function ma concurate kar ka 2 times ka operations karta ha
    System.out.println(/* first value in function */cal.getTime() + ":" + cal.getCalendarType());

  }

}
