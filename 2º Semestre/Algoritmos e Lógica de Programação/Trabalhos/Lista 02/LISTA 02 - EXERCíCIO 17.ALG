Algoritmo "Lista 02 - Exerc�cio 17"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno
// Descri��o   : Solicita nome, idade, sexo e sal�rio de tr�s pessoas.
//               Ap�s, verifica se Homens ganham mais, mulheres ganham mais
//               ou se n�o � poss�vel determinar.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 14/08/2024

Var
   nome_1, nome_2, nome_3, sexo_1, sexo_2, sexo_3: caractere
   idade_1, idade_2, idade_3, num_homens, num_mulheres: inteiro
   salario_1, salario_2, salario_3, total_homens, total_mulheres: real

Inicio
   // Entrada
   escreva("Digite o nome da primeira pessoa: ")
   leia(nome_1)
   escreva("Digite a idade da primeira pessoa: ")
   leia(idade_1)
   escreva("Digite o sexo da primeira pessoa (H/M): ")
   leia(sexo_1)
   escreva("Digite o sal�rio da primeira pessoa: ")
   leia(salario_1)

   escreva("Digite o nome da segunda pessoa: ")
   leia(nome_2)
   escreva("Digite a idade da segunda pessoa: ")
   leia(idade_2)
   escreva("Digite o sexo da segunda pessoa (H/M): ")
   leia(sexo_2)
   escreva("Digite o sal�rio da segunda pessoa: ")
   leia(salario_2)

   escreva("Digite o nome da terceira pessoa: ")
   leia(nome_3)
   escreva("Digite a idade da terceira pessoa: ")
   leia(idade_3)
   escreva("Digite o sexo da terceira pessoa (H/M): ")
   leia(sexo_3)
   escreva("Digite o sal�rio da terceira pessoa: ")
   leia(salario_3)

   // Processamento
   se sexo_1 = "H" entao
      total_homens <- total_homens + salario_1
      num_homens <- num_homens + 1
   senao
      total_mulheres <- total_mulheres + salario_1
      num_mulheres <- num_mulheres + 1
   fimse

   se sexo_2 = "H" entao
      total_homens <- total_homens + salario_2
      num_homens <- num_homens + 1
   senao
      total_mulheres <- total_mulheres + salario_2
      num_mulheres <- num_mulheres + 1
   fimse

   se sexo_3 = "H" entao
      total_homens <- total_homens + salario_3
      num_homens <- num_homens + 1
   senao
      total_mulheres <- total_mulheres + salario_3
      num_mulheres <- num_mulheres + 1
   fimse

   // Sa�da
   se (num_homens > 0) e (num_mulheres > 0) entao
      se (total_homens / num_homens) > (total_mulheres / num_mulheres) entao
         escreva("Homens ganham mais em m�dia.")
      senao
         se (total_homens / num_homens) < (total_mulheres / num_mulheres) entao
            escreva("Mulheres ganham mais em m�dia.")
         senao
            escreva("Homens e mulheres ganham o mesmo sal�rio.")
         fimse
      fimse
   senao
      escreva("Imposs�vel determinar: faltam dados.")
   fimse

Fimalgoritmo
