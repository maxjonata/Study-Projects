void funcaoDaQuestao(int *vetor) {
    int i;

    for(i=0;i<50;i++){

        vetor[i] = ((i == 0) ? 1 : vetor[i-1]) + i;

    }

}

int main() {

}