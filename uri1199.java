import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);
		
		String linha = input.nextLine();
		int num = 0;
		
		while(num >= 0){
			if(linha.substring(0, 1).equals("0") && linha.length() > 1){
				String hex = linha.substring(2);
				hex2decimal(hex);
				linha = input.next();
			}
			else{
				num = Integer.parseInt(linha);
				if(num >= 0){
					System.out.println("0x"+decimal2hex(num));
					linha = input.next();
				}
			}
		}
		
		
		
		input.close();
	}
	
	public static void hex2decimal(String s) {
        String digits = "0123456789ABCDEF";
        s = s.toUpperCase();
        int val = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            int d = digits.indexOf(c);
            val = 16*val + d;
        }
        System.out.println(val);
    }
	
	public static String decimal2hex(int d) {
        String digits = "0123456789ABCDEF";
        if (d == 0) return "0";
        String hex = "";
        while (d > 0) {
            int digit = d % 16;
            hex = digits.charAt(digit) + hex;
            d = d / 16;
        }
        return hex;
    }


}
