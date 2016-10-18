import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		DecimalFormat df = new DecimalFormat("0.000");
		
		Double a = input.nextDouble();
		Double b = input.nextDouble();
		Double c = input.nextDouble();
		
		input.close();
		Double triangulo = a*c/2;
		Double circulo = 3.14159*c*c;
		Double quadrado = b*b;
		Double retangulo = a*b;
		Double trapezio = (b+a)*c/2;
		
		System.out.println("TRIANGULO: "+df.format(triangulo));
		System.out.println("CIRCULO: "+df.format(circulo));
		System.out.println("TRAPEZIO: "+df.format(trapezio));
		System.out.println("QUADRADO: "+df.format(quadrado));
		System.out.println("RETANGULO: "+df.format(retangulo));


	}

}
