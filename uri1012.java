import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {

public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		DecimalFormat df = new DecimalFormat("0.000");
		
		int a = Integer.parseInt(input.nextLine());
		int b = Integer.parseInt(input.nextLine());
		
		Double litros = ((double)(a)*(double)b)/12.0;
		
		System.out.println(df.format(litros));
		input.close();
	}

}
