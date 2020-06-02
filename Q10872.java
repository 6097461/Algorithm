import java.util.Scanner;

public class Q10872 {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
       Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();

       int rslt = fact(n);
       System.out.println(rslt);

    }

    public static int fact(int n)
    {
        if(n<=1)
            return 1;
        return n*fact(n-1);
    }

}
