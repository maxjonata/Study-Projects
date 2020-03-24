void funcaoDaQuestao(int *vetorA,int *vetorB) {

    int vetorC[ ( (sizeof(vetorA) > sizeof(vetorB)) ? sizeof(vetorA) : sizeof(vetorB) ) ];

    int i,n,z=0;

    for(i=0;i<sizeof(vetorA);i++){
        for(n=0;n<sizeof(vetorB);n++){
            if(vetorA[i] == vetorB[n]){
                vetorC[z] = vetorA[i];
                z++;
            }
        }
    }

}

int main() {

}