int buscaBinaria(const int arr[], int tamanho, int alvo) {
    auto esquerda = 0;
    auto direita = tamanho - 1;

    while (esquerda <= direita) {
        auto meio = esquerda + (direita - esquerda) / 2;

        if (arr[meio] == alvo) {
            return meio; // Elemento encontrado
        } else if (arr[meio] < alvo) {
            esquerda = meio + 1; // Busca na metade direita
        } else {
            direita = meio - 1; // Busca na metade esquerda
        }
    }

    return -1; // Elemento não encontrado
}