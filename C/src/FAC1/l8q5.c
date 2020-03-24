void funcaoDaQuestao(int *conjunto) {

    int i, pares[150], impares[150], iPares=0, iImpares=0;

    for(i = 0; i < 300 ; i++){
        if(conjunto[i]%2 == 0) {
            pares[iPares] = conjunto[i];
            iPares++;
        } else {
            impares[iImpares] = conjunto[i];
            iImpares++;
        }
    }

}

int main() {

}