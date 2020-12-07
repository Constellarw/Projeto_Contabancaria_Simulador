#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    float deposito=0, saque=0;


    struct Cliente
{
  char nome[256];
  int cpf;
};
    struct Conta
{
  int numconta;
  float saldo;
};

    struct Cliente cliente;
    printf ("Digite o nome do cliente\n");
    fgets(cliente.nome,256, stdin);
    printf("Digite o cpf do cliente   obs sem pontos\n");
    scanf("%d", &cliente.cpf);

    struct Conta conta;
    printf("Digite  o numero da conta\n");
    scanf("%d", &conta.numconta);
    printf("Digite o saldo da sua conta\n");
    scanf("%f",&conta.saldo);

    printf("\nNome do cliente: %s",cliente.nome);
    printf("CPF do cliente: %d\n",cliente.cpf);
    printf("Numero da conta do cliente: %d\n",conta.numconta);
    printf("Saldo do cliente: RS%.2f\n\n",conta.saldo);

    do
    {
        printf("Escolha uma operacao: 1 para deposito ou 2 para retirar\n");
        scanf("%d", &i);
    }
    while (i != 1 && i != 2);

    if (i == 1)
    {
        printf("Digite o valor depositado:\n");
        scanf("%f",&deposito);
            if (deposito <=0)
            {
                printf("Deposito invalido");
                exit(0);
            }
        printf("Novo saldo: RS %.2f\n", deposito + conta.saldo);
    }
    else
    {
        printf("Digite o valor que queira sacar:\n");
        scanf("%f",&saque);
            if (conta.saldo < saque )
        {
            printf("Conta estourada\n");
            exit(0);
        }
        printf ("Novo saldo: RS %.2f\n", conta.saldo - saque);

    }







    return 0;
}
