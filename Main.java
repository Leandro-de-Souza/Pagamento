import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int horas;
        double valor, pagamento;
        String nomes;
        
        System.out.print("Nome: ");
        nomes = sc.nextLine();
        System.out.print("Valor por hora: ");
        valor = sc.nextDouble();
        System.out.print("Horas trabalhadas: ");
        horas = sc.nextInt();
        
        pagamento = (double) horas * valor;

        System.out.println("O pagamento para " + nomes + " deve ser " + String.format("%.2f", pagamento));
		
        sc.close();
	}

}
