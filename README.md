Exercícios em C

Fiz os três exercícios usando C, só com as bibliotecas básicas (stdio.h, string.h e stdlib.h). Rodei tudo pelo terminal e tentei resolver usando apenas lógica com for, if, arrays e comparação de strings.

Não utilizei técnicas avançadas pois ainda estou vendo matérias com esse conteúdo de vetores, strings... Então tive que procurar entender alguns exercícios do teste á parte.

No primeiro exercício, eu resolvi percorrendo a palavra letra por letra e comparando com a anterior. Quando era igual, eu aumentava o contador, quando mudava, eu verificava se aquela sequência era maior que a anterior e atualizava se fosse. No final eu  fiz uma última verificação para garantir que a última sequência fosse considerada. Esse eu levei mais ou menos uns 50 minutos porque precisei testar alguns casos pra ter certeza que estava funcionando certo e procurar mais pesquisas relacionadas ao exercicio.

No segundo exercício eu usei dois for para testar todas as combinações. Quando encontrava dois números que davam o valor certo, eu salvava os índices, mas também verificava a regra do menor segundo índice. Esse foi mais tranquilo, levei uns 35 minutos pra fazer e testar.

O terceiro exercício foi o que tive mais complexidade. Eu precisava ordenar nomes considerando só o último sobrenome. Então fiz uma função para pegar apenas a última palavra do nome e depois usei o qsort para organizar. Se os sobrenomes fossem iguais, o programa compara o nome completo. Esse eu levei umas 2h porque tive que cuidar da parte das strings com mais atenção e rever algumas coisas da faculdade.

01 - tempo cresce de forma linear e memória é mínima.

02 - tempo cresce mais rápido por causa dos dois for, mas memória continua baixa.

03 - tempo intermediário por causa da ordenação e memória controlada.