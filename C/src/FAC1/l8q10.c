void funcaoDaQuestao10(int *vetorA, int *vetorB) {

    int vetorC[sizeof(vetorA) + sizeof(vetorB)];
    int i;

    for(i=0;i<sizeof(vetorA);i++){
        vetorC[i] = vetorA[i];
    }

    for(i=0;i<sizeof(vetorB);i++){
        vetorC[sizeof(vetorA)+i] = vetorB[i];
    }

}

int main() {

}