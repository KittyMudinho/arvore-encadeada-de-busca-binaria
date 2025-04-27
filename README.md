<html>
  <body>
    <h1>Árvore encadeada de busca binária</h1>
    <h3>1)O que é uma árvore encadeada?</h3>
    <h3>O conceito de encadeada advem de ponteiros e recursividade, o que pode ser visto nesse código, em que uso ponteiro de ponteiro e recursividade para inserir um elemento. Já uma árvore consiste no primeiro elemento de entrada sendo o pai e os valores menores que ele para esquerda e os maiores para direita, exemplo: [6,4,7], 4 está a esquerda de 6 e 7 a direita, a construção é feita assim: menor->2i+1 maior->2i+2, i=pai.</h3>
    <h3>2)O que é uma busca binária?</h3>
    <h3>Consiste em uma busca em um vetor ordenado, divindo sempre na metade, exemplo: [1,3,5,6,8], o vetor tem tamanho 5, então sua metade é 2,5, pegando a parte inteira, 2, ou seja, 5, se quero achar 1, que é menor que 5, pego o (início+meio)/2, o que nos resulta em 1, que é 3, ou seja, maior que 1, fazendo o mesmo procedimento, temos a posição 0, ou seja, 1.</h3>
  </body>
</html>
