import java.util.Scanner;
//못푼문제 ★
public class Q11729 {
    public static StringBuffer br;
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);
       br = new StringBuffer();

        int n = sc.nextInt();
        System.out.println((int)(Math.pow(2, n)-1));
        hanoi(n,1,3,2);
        System.out.println(br.toString());

    }
    public static void hanoi(int n,int from, int to, int via)
    {
        if(n==1)
        {
            move(1,from,to);
            return;
        }

        hanoi(n-1,from,via,to);
        move(n-1,from,to);
        hanoi(n-1,via,to,from);
    }
    public static void move(int n,int from,int to)
    {
        br.append(from+" "+to);
        br.append("\n");
    }

}
