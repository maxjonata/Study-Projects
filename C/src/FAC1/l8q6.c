void funcaoDaQuestao(float *conjunto, float numeroA, float numeroB) {

    int i;

    for(i=0;i<sizeof(conjunto);i++){

        if(conjunto[i] == numeroA) {
            conjunto[i] = numeroB;
        }

    }

}

int main() {

}