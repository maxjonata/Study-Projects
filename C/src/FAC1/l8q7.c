void funcaoDaQuestao(float *vetor, float elemento) {

    int i,remocoes=0;

    for(i=0;i<(sizeof(vetor));i++){
        if(vetor[i] == elemento){
            for(i=i;i<sizeof(vetor)-1;i++){
                vetor[i] = vetor[i+1];

            }
            remocoes++;

        }
        if(i >= sizeof(vetor) - 1 - remocoes){
            vetor[i] = 0;

        }

    }

}

int main() {

}