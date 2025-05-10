import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        
        // st = new StringTokenizer(br.readLine());
        // int a = Integer.parseInt(st.nextToken());
        // int b = Integer.parseInt(st.nextToken());
        
        String word = br.readLine();
        int ans = solution(word);
        
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write(Integer.toString(ans));
        bw.flush();
        bw.close();
    }
    
    public static int solution(String word){
        String[] arr = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
        
        for(int i=0; i < arr.length; i++){
            word = word.replace(arr[i], "0");
        }
        
        return word.length();
    }
}
