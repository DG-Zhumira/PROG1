#include <stdio.h>
//comentário simples//
// Primeira aula de programação em C//
// Lembre-se sempre de adicionar comentários, para que não fique perdido naquilo que você está fazendo e pelas boas práticas, já que o seu código não necessariamente será exclusivo seu, facilitando assim o entendimento do seu processo de pensamento e estruturação, além das suas intenções com o que você desenvolveu.//

int main(void) {
  printf("\n O Valor é: %d" , 5);
  printf("\n O valor é: %.2f" ,2.3);
  printf("\n A Primeira Letra é: %c", 'a');
  printf("\n Uma palavra %s", "teste");
  
  //USANDO CONSTANTES//
  
  // Usando o comando #define, é possível definir o valor de uma constante//
  // Ao definirmos uma constante, evitamos assim a necessidade de toda vez que digitarmos o código, termos que digitar manualmente o mesmo valor definido//
  //Exemplo://
  
#define dolar 4.76
  // Dessa forma, definimos que a constante "dolar" sempre terá o valor de 4.76//
  
  printf("\n O dólar hoje vale R$%.3f", dolar);
  printf("\n Com 1 real é possível comprar %.3f dolares ", 1/dolar);

  //USANDO VARIÁVEIS//
  
  //Sempre que eu criar uma variável, é como se eu estivesse criando um compartimento, e esse compartimento aceita qualquer valor desde que seja do tipo inteiro.//
  // É sempre importante definir o tipo da variável, antes de declará-la//
  //Exemplo://

int base = 0; //Tipo de variável + nome = valor que a variável terá ao ser criada//
int altura = 0;
  // É possível atualizar os dados determinados dentro das variáveis em qualquer momento do código, justamente por isso ela leva o nome de "variável"//
  //Exemplo://
  
  base = 5;
  altura = 2;
  printf("\n A área do retângulo é: %d", base * altura);
  
  
  
  return 0;
}