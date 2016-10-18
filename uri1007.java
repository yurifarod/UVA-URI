import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int A = input.nextInt();
		int B = input.nextInt();
		int C = input.nextInt();
		int D = input.nextInt();
		
		input.close();
		
		int result = A*B-C*D;
		System.out.printf("DIFERENCA = %d\n", result);
		//so formata com printf

	}

}
