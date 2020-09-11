A série Game of Thrones está caminhando para a sua última temporada e a guerra entre os reinos está muito emocionante. Você como fã, resolveu elaborar um jogo que represente a guerra. Neste jogo, o jogador controla Jon Snow na guerra contra Cersei e o rei da noite. Nesta questão, você deve desenvolver 1 estágio deste jogo, respeitando as seguintes instruções:

    1. O cenário do jogo (Westeros) possui 100 mil km2 (matriz 10 x 10).
    2. Jon Snow parte de Winterfell em direção ao reino de Westeros, onde Cersei se encontra. O rei da noite encontra-se em seu reino ao final de Westeros. Jon Snow não pode enfrentar o rei da noite antes de negociar com Cersei.
    3. Jon Snow e Cersei possuem uma informação relativa à vida = 100. O rei da noite possui vida = 200.
    4. Existem 20 inimigos, 10 obstáculos e 10 porções de vida (restaura 5) espalhados aleatoriamente pelo cenário.
    5. Jon Snow é o único que se movimenta (cima, baixo, esquerda, direita). Ao se deslocar em direção à um obstáculo, Jon não se movimenta. Ao encontrar um inimigo, Jon Snow o derrota perdendo 1 ponto de vida.
    6. Ao chegar no reino de Westeros, Jon precisa convencer Cersei de que ela precisa se juntar a ele para enfrentar o rei da noite. Para convencer Cersei, Jon precisa em 5 tentativas alcançar mais de 60% de poder de negociação em 3. Caso consiga, Cersei se une a ele na guerra contra o rei da noite duplicando sua vida que passa a ser vida += 100. Caso contrário, inicia-se uma guerra.
    7. Em caso de guerra, Jon começa atacando. Se a taxa de ataque de Jon for maior ou igual a 50%, ele acerta o golpe e retira 10 pontos de Cersei. Caso contrário, ele erra o ataque e passa a vez para Cersei. Na vez de Cersei, o mesmo processo se repete.
    8. Caso Jon derrote Cersei, ele deve se dirigir ao reino do rei da noite. Se for derrotado por Cersei, o jogo termina.
    9. Chegando ao reino do rei da noite, inicia-se a guerra. Jon começa atacando. Para acertar um golpe, Jon precisa atingir uma taxa de ataque maior ou igual a 50%, retirando 10 pontos do rei. O rei também precisa do mesmo percentual de taxa de ataque para atingir Jon. Caso atinja Jon, ele retira 5 pontos de vida de Jon, e incrementa 5 pontos na sua própria vida.
    10. Se Jon vencer, o jogador vence o jogo. Caso contrário, o jogo é encerrado.

Implemente os seguintes requisitos do jogo:

    Requisito 1: Inicialize o cenário de Westeros
    Requisito 2: Implemente a navegação de Jon
    Requisito 4: Implemente a negociação/guerra com Cersei
    Requisito 5: Implemente a guerra com o rei da noite
    Requisito 7: Imprima na tela o estado atual do jogo, com as posições de Jon, Cersei e Rei da Noite
    Requisito 8: Implemente a estrutura principal do jogo.
    Requisito 9: Impressão do resultado do jogo: Caso Jon obteve sucesso ou não na negociação com Cersei, e se venceu a guerra contra o Rei da Noite, imprima a vida restante de Jon