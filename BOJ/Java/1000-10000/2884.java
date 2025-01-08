import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int h = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int alram = (h * 60) + m - 45;

        if(alram < 0) alram += 24 * 60;

        System.out.println(alram / 60 + " " + alram % 60);
    }
}