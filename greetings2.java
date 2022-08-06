import java.util.Scanner;
import java.util.Vector;

public class greetings2 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String str = scn.next();
        int count = 0;
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)=='e')count++;
        }
        Vector<Character>v=new Vector<Character>();
        v.add(0,'h');
        for(int i=0;i<count*2;i++)
        {
            v.add('e');
        }
        v.add('y');
        for(int i=0;i<v.size();i++)
        {
            System.out.print(v.get(i));
        }

    }
}