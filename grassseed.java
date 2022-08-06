import java.util.Scanner;
public class grassseed {
    public static void main(String[] args) {
        float Cost;
        int Lawn;
        Scanner scn = new Scanner(System.in);
        Cost = scn.nextFloat();
        Lawn = scn.nextInt();
        double answer = 0.0;
        for(int i=0;i<Lawn;i++)
        {
            double Length;
            double Width;
            Length = scn.nextDouble();
            Width = scn.nextDouble();
            answer+=Length*Width;
        }
        System.out.println(answer*Cost);
    }
}
