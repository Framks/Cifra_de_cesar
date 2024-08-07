# **Implementação de maneira simples a sifra de cesar**

A cifra de César é uma técnica de criptografia simples usada para codificar mensagens. Vamos exemplificar como ela funciona

    Substituição Simples: A cifra de César é uma forma de cifra de substituição onde cada letra no texto original é deslocada um número fixo de posições no alfabeto.

    Chave: O número de posições que cada letra é deslocada é chamado de "chave". Por exemplo, uma chave de 3 significa que cada letra é substituída pela letra que está 3 posições adiante no alfabeto.
        Exemplo com chave 3:
            ![Imagem exemplificando cifra de cesar](img/ceaserCipher.png)
            

    Codificação: Para codificar uma mensagem, você substitui cada letra pela letra correspondente na posição deslocada. Se você tiver a mensagem "HELLO" e a chave for 3:
        H → K
        E → H
        L → O
        O → R
        Resultando em "KHOOR".

    Decodificação: Para decodificar, você faz o processo inverso, deslocando as letras na direção oposta usando a chave.

A cifra de César é fácil de implementar, mas não é muito segura para proteção de dados, pois há apenas 25 possíveis chaves, tornando-a vulnerável a ataques de força bruta.
