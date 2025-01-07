import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int a = Integer.parseInt(br.readLine());
        int b = Integer.parseInt(br.readLine());
        int num = b;

        for (int i = 0; i < 3; i++){
            System.out.println(a * (b % 10));
            b = b / 10;
        }

        System.out.println(a * num);
    }
}