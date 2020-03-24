int funcaoDaQuestao8(float *vetorReais, float x) {

    int i;

    for(i=0;i<sizeof(vetorReais);i++){

        if(vetorReais[i]<= x && vetorReais[i+1]>= x){
            if(vetorReais[i] == x){return(i);}
            else{return(i+1);}
        }

    }

    return(sizeof(vetorReais) - 1);

}

void funcaoDaQuestao9(float elemento, float *vetorCrescente) {

    vetorCrescente[funcaoDaQuestao8(vetorCrescente,elemento)] = elemento;

}

int main() {

}