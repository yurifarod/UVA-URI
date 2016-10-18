import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int x = input.nextInt();
		int xA = x;
		int y = input.nextInt();
		int yA = y;
		int lap = 1;
		boolean flag = true;
		
		while(flag){
			xA = x*lap;
			yA = y*lap;
			lap++;
			if(yA-xA >= x){
				flag = false;
			}
		}
		
		System.out.println(lap);
		input.close();

	}

}
