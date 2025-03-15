#include <stdio.h>
#include "utils.h"

float max(float arr[], size_t size);
int main() {
    // Float variables
    float input_durasi_pendek;
    float input_durasi_sedang;
    float input_durasi_lama;
    
    // Valid input
    int valid = 0;
    char buffer[100];

    // struct yang berisi nilai crisp dari durasi
    struct durasi {
        float pendek;
        float sedang;
        float lama;
    };

    struct durasi durasi = {5, 10, 15};
    while (!valid){
        printf("Masukkan nilai crisp durasi pendek:");
        if (fgets(buffer, sizeof(buffer), stdin) != NULL){
            if (sscanf(buffer, "%f", &input_durasi_pendek) == 1){
                valid = 1;
            } else {
                printf("Input tidak valid, Harap masukkan angka.\n");
            }
        }
    }
    valid = 0;
    while (!valid){
        printf("Masukkan nilai crisp durasi sedang:");
        if (fgets(buffer, sizeof(buffer), stdin) != NULL){
            if (sscanf(buffer, "%f", &input_durasi_sedang) == 1){
                valid = 1;
            } else {
                printf("Input tidak valid, Harap masukkan angka.\n");
            }
        }
    }
    valid = 0;
    while (!valid){
        printf("Masukkan nilai crisp durasi lama:");
        if (fgets(buffer, sizeof(buffer), stdin) != NULL){
            if (sscanf(buffer, "%f", &input_durasi_lama) == 1){
                valid = 1;
            } else {
                printf("Input tidak valid, Harap masukkan angka.\n");
            }
        }
    }
    valid = 0;

    float pembagi = (input_durasi_pendek + input_durasi_sedang + input_durasi_lama);
    if (pembagi == 0){
        printf("Pembagi tidak boleh 0\n");
        return 0;
    {
        float lama_durasi = ((input_durasi_pendek * durasi.pendek) + (input_durasi_sedang * durasi.sedang) + (input_durasi_lama * durasi.lama)) / pembagi;
        printf("Nilai durasi yang diperoleh adalah: %.2f detik\n", lama_durasi);
    }
    return 0;
}