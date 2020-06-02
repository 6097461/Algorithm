import java.util.Arrays;
import java.util.Scanner;
//못푼문제★
public class Q2447 {
    public static  char ary[][];
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();

        int n = sc.nextInt();
        ary = new char[n][n];

        for(int i=0;i<n;i++)
        Arrays.fill(ary[i], ' ');//배열 공백으로 초기화
        star(0,0,n);


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sb.append(ary[i][j]);

            }
           sb.append("\n");
        }
        System.out.print(sb.toString());
    }

    public static void star(int x, int y,int n)
    {

        if(n==1)
        {
           ary[x][y] = '*';

        }
        else if(n>1)
        {
            int val = n/3;

            for(int i=0;i<3;i++)
            {
                 for(int j=0;j<3;j++)
                 {
                     if(i==1 && j==1);
                     else
                         star(x+(i*val),y+(j*val),val);

                 }
            }
         }
    }
}
