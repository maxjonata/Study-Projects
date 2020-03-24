package t3;

abstract public class Produto
{
    public int qtde;

    void setQtde(int newQtde)
    {
        this.qtde = newQtde;
    }

    abstract double getPreco();
}

public class Banana extends Produto
{
    int valor;
}

public class Maca extends Produto
{
    int valor;
}

public class Pera extends Produto
{
    int valor;
}

public class Uva extends Produto
{
    int valor;
}

public class Morango extends Produto
{
    int valor;
}

public class Limao extends Produto
{
    int valor;
}

public class Mamao extends Produto
{
    int valor;
}