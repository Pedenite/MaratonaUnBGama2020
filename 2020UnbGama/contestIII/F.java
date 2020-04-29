import java.util.ArrayList;
import java.util.Scanner;

public class F { // Mudar para Main
    public static void main(String args[]){
        int N, T = 0;
        ArrayList<Integer> W = new ArrayList<>(); 
        Scanner scan = new Scanner(System.in);

        N = scan.nextInt();
        for(int i = 0; i < N; i++){
            int temp = scan.nextInt();
            T += temp;
            W.add(temp);
        }
        scan.close();

        T /= N;
        int S, Sant = 0x7fffffff;
        boolean asc = true;
        for(int i = 0; true; i++){
            S = 0;
            System.out.println(T);
            for(int elem : W){
                if(elem > T){
                    S += elem;
                } else {
                    S -= elem;
                }
                System.out.println(S);
            }
            S = Math.abs(S);
            if(S == 0){
                break;
            }
            if(S > Sant && i == 1){
                asc = !asc;
            }
            if(S > Sant){
                S = Sant;
                break;
            }
            if(asc){
                T++;
            } else {
                T--;
            }
            Sant = S;
        }
        System.out.println(S);
    }
}