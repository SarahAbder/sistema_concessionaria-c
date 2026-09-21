#include <stdio.h>

int main(){
   
   char concessionaria [] = "Capital veículos";
   
   //dados do cliente
   
   char nomeCompleto[150];
   char email[50];
   char telefone[50];
   char endereco[150];
   char profissao[50];
   
   //dados financeiros e compra 
   
   float renda;
   float valorCarro;
   float entrada;
   float valorFinanciamento;
   float valorParcelas;
   
   //controle do programa
   
   int quantidadeClientes;
   int situacao;
   int i;
   int parcelas;
  
   // contadores para relatorio final
   
   int aprovados = 0;
   int emAnalise = 0;
   int reprovado = 0;
   
   printf("===================================\n");
   printf("  CONCESSIONARIA %s\n", concessionaria);
   printf("===================================\n");
   
   printf("Digite a quantidade de clientes (minimo 2): ");
   scanf("%d", &quantidadeClientes);
   
   while (quantidadeClientes <2) {
       printf("Quantidade invalida. Cadastre no minimo 2 clientes.\n");
       
       printf("Digite novamente a quantidade de clientes: ");
       scanf("%d", &quantidadeClientes);
       
   }
   
   for (i = 1; i <= quantidadeClientes; i++) {
   
   printf("\n=================================================\n");
   printf("                CADASTRO CLIENTE %d\n", i);
   printf("\n=================================================\n");
   
   getchar();
   
   printf("Nome completo: ");
   fgets(nomeCompleto, 150, stdin);
   
   printf("Email: ");
   fgets(email, 50, stdin);
   
   printf("Telefone: ");
   fgets(telefone, 50, stdin);
   
   printf("Endereço: ");
   fgets(endereco, 150, stdin);
   
   printf("Profissão: ");
   fgets(profissao, 50, stdin);
   
   printf("Renda:R$ ");
   scanf("%f", &renda);
   
   printf("Valor do carro:R$ ");
   scanf("%f", &valorCarro);
   
   printf("Valor da entrada:R$ ");
   scanf("%f", &entrada);
   
   printf("Quantiade de parcelas: ");
   scanf("%d", &parcelas);
   
   // calculo do valorFinanciamento
   
   valorFinanciamento = valorCarro - entrada;
   
   valorParcelas = valorFinanciamento / parcelas;
   
   printf("\n------ SIMULAÇÃO DO FINANCIAMENTO ------\n");
   
   printf("Valor do carro: R$ %.2f\n", valorCarro);
   printf("Valor da entrada: R$ %.2f\n", entrada);
   printf("Valor a ser financiado: R$ %.2f\n", valorFinanciamento);
   printf("Quantidade de parcelas: %d\n", parcelas);
   printf("Valor de cada parcela: R$ %.2f\n", valorParcelas);
       
    // analise da renda 
    
    if (valorParcelas <= renda * 0.30) {
        situacao = 1;
    } 
    else if (valorParcelas <= renda * 0.40) {
        situacao = 2;
    }
    else {
        situacao = 3;
    }
       
       // resultado analise 
       
    switch ( situacao ) {
        
        case 1: 
            printf("Situação: APROVADO\n");
            aprovados++;
            break;
        
        case 2:
            printf("Situacão: EM ANALISE\n");
            emAnalise++;
            break;
        
        case 3:
            printf("Situacão: REPROVADO\n");
            reprovado++;
            break;
            
        default:
            printf("Situação invalida.\n");
    
    }
       
   }
   
   printf("\n=================================================\n");
   printf("                   RELATORIO FINAL\n               ");
   printf("\n=================================================\n");
   
   printf("Total de clientes processados: \n");
   printf("Clientes aprovados: %d\n", aprovados);
   printf("Clientes em analise: %d\n", emAnalise);
   printf("Clientes reprovados: %d\n", reprovado);
   
   printf("\n=================================================\n");
 
    return 0;
}