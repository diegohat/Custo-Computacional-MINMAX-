# CUSTO COMPUTACIONAL EM C
![Custo Computacional](algorithms.jpg)
## Disciplina de AEDS I
### Diego Henrique Almeida Trindade

Iremos discutir neste programa uma maneira de encontrar os valores máximos e minímos com um menor custo computacional.

Através da analise realizada e comentada linha a linha no programa, será feita a comparação de diferentes meios de encontrar valores de máximos e minímos descobertos por processo de tentativa e erro.

Após analise, será comentado abaixo as descobertas realizadas.

### Custo de MinMaxInicial

O custo de MinMaxInicial é igual a 2(n-1) onde n é o tamanho do vetor.

Esse custo é considerado para todos os casos.

### Custo de MinMaxTeste1

O custo de MinMaxTeste1 é igual a:
- 2(n-1) para o pior caso quando todas as condições sao checadas;
- (n-1) para quando o vetor está em ordem crescente;
- 3n/2 para o caso médio quando data[i] é maior que mi a metade das vezes.
