
int main() {
    if((saldo-saque)<-1000.00){
        saque = (-1000.00+saldo)*(-1);
        printf("\nSaque excede limite especial, saque maximo possivel: %.2f", saque);
        printf("\nGostaria de continuar o procedimento de saque de %.2f tornando seu saldo %.2f?\n(S)im/(N)ao\n>", saque, saldo);
        scanf(" %c", opcao);
        toupper(opcao);

        if(opcao == 'N'){
            saque = -1
        }
    }
    
}