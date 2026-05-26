package Main;

import java.util.Vector;
import java.util.InputMismatchException;
import java.util.Scanner;

public class MainVector {
    public static void main(String[] args) {
        Vector<String> listaProdutos = new Vector<>();
        Scanner ler = new Scanner(System.in);

        while (true) {
            System.out.println();
            System.out.println("1- Adicionar produtos à lista");
            System.out.println("2- Remover produtos da lista");
            System.out.println("3- Acessar produtos da lista");
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
                    System.out.print("Digite o produto que deseja adicionar: ");
                    String produto = ler.nextLine();

                    listaProdutos.addElement(produto);

                    System.out.println("O produto " + produto + " foi adicionado!");
                    break;

                case 2:
                    System.out.print("Digite o produto que deseja remover: ");
                    produto = ler.nextLine();

                    if (listaProdutos.contains(produto)) {
                        listaProdutos.removeElement(produto);
                        System.out.println("O produto " + produto + " foi removido!");
                    } else {
                        System.out.println("O produto " + produto + " não existe na lista!");
                    }
                    break;

                case 3:
                    System.out.print("Qual produto da lista deseja buscar?: ");
                    produto = ler.nextLine();

                    if (listaProdutos.contains(produto)) {
                        int indice = listaProdutos.indexOf(produto);
                        System.out.println("O produto " + produto + " está na lista! Posição: " + indice);
                    } else {
                        System.out.println("O produto " + produto + " não está na lista!");
                    }
                    break;

                case 4:
                    System.out.println("Saindo do programa...");
                    ler.close();
                    return;

                default:
                    System.out.println("Opção inválida. Tente novamente!");
            }
        }
    }
}