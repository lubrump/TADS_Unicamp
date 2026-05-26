package Main;

import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.Scanner;

public class MainArray {
    public static void main(String[] args) {
        ArrayList<String> lista = new ArrayList<>();
        Scanner ler = new Scanner (System.in);

        while (true) {
            System.out.println();
            System.out.println("1- Adicionar elementos à lista");
            System.out.println("2- Remover elementos da lista");
            System.out.println("3- Acessar elementos da lista");
            System.out.println("4- Sair");
            System.out.print("Selecione a opção desejada: ");

            int opcao;
            try {
                opcao = ler.nextInt();
                ler.nextLine();
            } catch (InputMismatchException e) {
                System.out.println("Erro: Por favor, digite apenas números inteiros.");
                ler.nextLine();
                continue;
            }

            switch (opcao) {
                case 1:
                    System.out.print("Digite a fruta que deseja adicionar: ");
                    String fruta = ler.nextLine();

                    lista.add(fruta);

                    System.out.println("A fruta " + fruta + " foi adicionada!");
                    break;

                case 2:
                    System.out.print("Digite a fruta que deseja remover: ");
                    fruta = ler.nextLine();

                    if (lista.contains(fruta)) {
                        lista.remove(fruta);
                        System.out.println("A fruta " + fruta + " foi removida!");
                    } else {
                        System.out.println("A fruta " + fruta + " não existe na lista!");
                    }

                    break;

                case 3:
                    System.out.print("Qual fruta da lista deseja buscar?: ");
                    fruta = ler.nextLine();

                    if (lista.contains(fruta)){
                        System.out.println("A fruta " + fruta + " está na lista!");
                        break;
                    } else {
                        System.out.println("A fruta " + fruta + " não está na lista!");
                        break;
                    }

                case 4:
                    System.out.println("Saindo do programa...");
                    return;

                default:
                    System.out.println("Opção inválida. Tente novamente!");
            }
        }
    }
}
