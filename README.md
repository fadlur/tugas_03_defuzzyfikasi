# Defuzzyfikasi

Proyek ini adalah implementasi dari proses defuzzyfikasi dalam bahasa C. Tujuan utamanya adalah mengubah nilai fuzzy menjadi nilai crisp menggunakan berbagai metode defuzzyfikasi.

## Daftar Isi

- [Pendahuluan](#pendahuluan)
- [Persyaratan](#persyaratan)
- [Penggunaan](#penggunaan)
- [Metode Defuzzyfikasi](#metode-defuzzyfikasi)
- [Lisensi](#lisensi)

## Pendahuluan

Defuzzyfikasi adalah proses mengubah nilai fuzzy menjadi satu output crisp. Proyek ini menunjukkan berbagai teknik defuzzyfikasi yang diimplementasikan dalam bahasa C.

## Persyaratan

- GCC (GNU Compiler Collection)

## Penggunaan

Untuk mengompilasi dan menjalankan program, gunakan perintah berikut:

```sh
cd build
cmake ..
make
./defuzzifikasi
```

## Metode Defuzzyfikasi

Metode defuzzyfikasi berikut diimplementasikan dalam `main.c`:

- **Metode Mamdani**: Menggunakan aturan if-then dan operator logika fuzzy untuk menentukan output crisp.

## Lisensi

Proyek ini dilisensikan di bawah Lisensi MIT. Lihat file [LICENSE](LICENSE) untuk detailnya.
