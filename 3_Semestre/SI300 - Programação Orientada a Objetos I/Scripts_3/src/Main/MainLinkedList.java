package Main;

import java.util.LinkedList;
import java.util.InputMismatchException;
import java.util.Scanner;

public class MainLinkedList {
    public static void main(String[] args) {
        LinkedList<String> fila = new LinkedList<>();
        Scanner ler = new Scanner (System.in);

        while (true) {
            System.out.println();
            System.out.println("1- Adicionar um elemento à fila");
            System.out.println("2- Remover um elemento da fila");
            System.out.println("3- Acessar elementos da fila");
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
                    System.out.print("Digite o nome da pessoa que deseja adicionar: ");
                    String pessoa = ler.nextLine();

                    System.out.println("1- Adicionar a pessoa em primeiro lugar na fila");
                    System.out.println("2- Adicionar a pessoa em último lugar na fila");
                    System.out.print("Selecione a opção desejada: ");

                    int opcao1;
                    try {
                        opcao1 = ler.nextInt();
                        ler.nextLine();
                    } catch (InputMismatchException e) {
                        System.out.println("Erro: Por favor, digite apenas números inteiros.");
                        ler.nextLine();
                        continue;
                    }

                    switch (opcao1){
                        case 1:
                            fila.addFirst(pessoa);
                            System.out.println("O(a) " + pessoa + " foi adicionado(a) em primeiro lugar!");
                            break;
                        case 2:
                            fila.addLast(pessoa);
                            System.out.println("O(a) " + pessoa + " foi adicionado(a) em último lugar!");
                            break;
                    }
                break;

                case 2:
                    System.out.print("Digite a pessoa que deseja remover: ");
                    pessoa = ler.nextLine();

                    System.out.println("1- Remover a pessoa em primeiro lugar na fila");
                    System.out.println("2- Remover a pessoa em último lugar na fila");
                    System.out.print("Selecione a opção desejada: ");

                    try {
                        opcao1 = ler.nextInt();
                        ler.nextLine();
                    } catch (InputMismatchException e) {
                        System.out.println("Erro: Por favor, digite apenas números inteiros.");
                        ler.nextLine();
                        continue;
                    }

                    switch (opcao1) {
                        case 1:
                            if (fila.contains(pessoa)) {
                                fila.removeFirst();
                                System.out.println("O(a) " + pessoa + " foi removida!");
                            } else {
                                System.out.println("O(a) " + pessoa + " não existe na lista!");
                            }
                        case 2:
                            if (fila.contains(pessoa)) {
                                fila.removeLast();
                                System.out.println("O(a) " + pessoa + " foi removida!");
                            } else {
                                System.out.println("O(a) " + pessoa + " não existe na lista!");
                            }
                        break;
                    }
                break;

                case 3:
                    System.out.print("Qual pessoa da fila deseja buscar?: ");
                    pessoa = ler.nextLine();

                    if (fila.contains(pessoa)){
                        System.out.println("O(a) " + pessoa + " está na fila em " + (fila.indexOf(pessoa)+1) + "° lugar!");
                        break;
                    } else {
                        System.out.println("O(a) " + pessoa + " não está na fila!");
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
