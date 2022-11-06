// Nama : Jeselyn Tania
// NIM : 2602061763
// GSLC Session 9


#include <stdio.h>

void change(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void change2(char *xp, char *yp){
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort(char arrNama[], int arrAngka[], int x){
    for(int j = 0; j < x - 1; j++){
        for(int k = 0; k < x - j - 1; k++){
            if( arrAngka[j] >  arrAngka[j + 1]){
                change2(&arrNama[j], &arrNama[j + 1]);
                change(&arrAngka[j], &arrAngka[j + 1]);
            }
        }
    }
} 



int main(){
    char nama[150][150];
    int nilai[150], a, b, c = 0;
    printf("Masukkan jumlah mahasiswa: \n");
    scanf("%d", &a);
    getchar();
    for(int i = 0; i < a; i++){
        printf("Input nama mahasiswa -%d: ", i+1);
        scanf("%s", &nama[i]);
        getchar();
        printf("Input nilai mahasiswa -%d: ", i+1);
        scanf("%d", &nilai[i]);
        getchar();
        b += nilai[i];
    }
    	c = b / a;
    sort(*nama, nilai, a);
    printf("Rata-rata nilai kelas: %d\n", c);
    printf("Nilai tertinggi diraih oleh %s dengan nilai %d\n",nama[a - 1], nilai[a - 1]);
    printf("Runner up: %s dengan skor %d\n", nama[a - 2], nilai[a - 2]);
    printf("Nilai terendah didapatkan %s dengan nilai %d\n", nama[0], nilai[0]);
    return 0;
    
}

