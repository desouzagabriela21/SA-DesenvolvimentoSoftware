Programa desenvolvido para a SA da unidade curricular de desenvolvimento de software da turma TECI SENAI.

Desafio
Você deverá desenvolver, em linguagem C, um programa que:
1. Solicite ao usuário a entrada de 10 valores inteiros representando medições de temperatura.
2. Solicite os limites inferior e superior da faixa ideal de operação.
3. Verifique quais valores estão dentro da faixa, ou seja, maiores ou iguais ao limite inferior e menores ou iguais ao limite superior.
4. Exiba na tela apenas os valores que atendem a esse critério.
5. Ao final, informe quantas medições ficaram dentro da faixa ideal.

Para a elaboração do código, foram criadas as variáveis "medicoes", "limiteInferior", "limiteSuperior" e "quantidadeMedicoesIdeais". Dentro de uma estrutura de repetição "Do while", solicitamos ao usuário os valores do limiteInferior de medição e do limiteSuperior. Esse laço se repetirá enquanto e caso o limiteInferior seja maior que o limiteSuperior.
Após o usuário informar as métricas, iniciamos um laço "for" que vai de 0 a 9, pedindo as medições registradas. Se a medição registrada estiver dentro dos parâmetros da faixa ideal de medição, ela será armazenada em um vetor chamado "medicoesIdeais" e a variável "quantidadeMedicoesIdeais" será somada a 1.
Na parte final do programa, um laço for exibe os índices do vetor "medicoesIdeais" e, em seguida, exibimos o valor de "quantidadeMedicoesIdeais".
Cada  passo do programa foi separado em funções, para melhor organização da função principal.
