import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLine()) {

            String input_text = sc.nextLine();

            if (!(input_text.isEmpty() | input_text.length() > 100)){
                System.out.println(input_text);
            }
        }
    }
}
