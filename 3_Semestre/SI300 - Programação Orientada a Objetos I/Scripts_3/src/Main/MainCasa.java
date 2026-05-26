package Main;

import Model.ClassCasa;
import Model.ClassComodo;

public class MainCasa {
    public static void main(String[] args) {
        ClassCasa casa1 = new ClassCasa();

        ClassComodo sala = new ClassComodo("Sala de Estar", 12.5F, "Mármore");
        ClassComodo cozinha = new ClassComodo("Cozinha", 15.0F, "Porcelanato");
        ClassComodo quarto = new ClassComodo("Quarto", 13.5F, "Porcelanato");

        casa1.adicionarComodo(sala);
        casa1.adicionarComodo(cozinha);
        casa1.adicionarComodo(quarto);

        casa1.exibirComodos();

        ClassCasa casa2 = new ClassCasa();

        ClassComodo suite = new ClassComodo("Suíte", 20.0F, "Madeira");
        ClassComodo lavanderia = new ClassComodo("Lavanderia", 9.0F, "Madeira");
        ClassComodo banheiro = new ClassComodo("Banheiro", 10.5F, "Porcelanato");

        casa2.adicionarComodo(suite);
        casa2.adicionarComodo(lavanderia);
        casa2.adicionarComodo(banheiro);

        casa2.exibirComodos();

    }
}
