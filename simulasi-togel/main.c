    // Library yang digunakan
    #include <stdio.h>  
    #include <stdlib.h>  
    #include <stdbool.h>  
    #include <time.h>        

    // Deklarasi fungsi yang akan digunakan
    int sembilan(int a);            // Fungsi untuk mengembalikan nilai 9 dikali 10 pangkat n-1
    int sepuluh(int a);             // Fungsi untuk mengembalikan nilai 1 atau 10 pangkat n
    void spamTogel(void);           // Fungsi utama 1: untuk mencoba togel dengan angka yang sama untuk setiap iterasi
    void satuSatu(void);            // Fungsi utama 2: untuk mencoba togel dengan angka yang berbeda untuk setiap iterasi
    
    // Memulai program
    int main()  
    {  
        int pilihan = -1;       // Inisialisasi variabel untuk menyimpan input pilihan user dalam menu
        int flag = false;       // Inisialisasi variabel flag untuk infinite loop menu

        while (!flag)           // Infinite loop menu
        {
            system("CLS");      // Membersihkan terminal

            printf("==================================================================================================================\n");
            printf("\t\t\t\t TOGEL GACOR MELEDAK BOOM\n");
            printf("==================================================================================================================\n");

            printf("\t\t\t\t MAIN MENU\n");
            printf("\n");
            printf("\t\t\t\t 1. Spam Togel\n");
            printf("\t\t\t\t 2. Togel Normal\n");
            printf("\t\t\t\t 3. Quit\n");
            printf("\n");
            printf("==================================================================================================================\n");
            printf("\nInput: ");        // Meminta user menginput pilihan
            scanf("%d", &pilihan);

            switch (pilihan)    // Masuk ke menu pilihan user
            {
            case 1:             // Menu mencoba togel dengan angka yang sama untuk setiap iterasi
                system("CLS");          // Membersihkan terminal
                printf("==================================================================================================================\n");
                printf("\t\t\t\t SPAM TROSS MASEEEEE\n");
                printf("==================================================================================================================\n");
                printf("\n");
                spamTogel();            // Memanggil fungsi utama 1
                printf("\n\n");
                printf("==================================================================================================================\n");
                system("pause");        // Menghentikan sementara terminal
                break;
            
            case 2:             // Menu mencoba togel dengan angka yang berbeda untuk setiap iterasi
                system("CLS");          // Membersihkan terminal
                printf("==================================================================================================================\n");
                printf("\t\t\t\t ANTI RUNGKAD KANG\n");
                printf("==================================================================================================================\n");
                printf("\n");
                satuSatu();             // Memanggil fungsi utama 2
                printf("\n");
                system("pause");        // Menghentikan sementara terminal
                break;

            case 3:             // Keluar dari program
                printf("\n");
                printf("==================================================================================================================\n");
                printf("\t\t\t\t RAGUMU RUGIMU CHUAKZZZZZZZZZZZ\n");
                printf("==================================================================================================================\n");
                printf("\n");
                flag = true;            // Menghentikan infinite loop
                
            default:
                break;
            }
        }
        
        return 0;  
    }  

    // Inisialisasi fungsi utama 1
    void spamTogel(void){
        int num, i, x, input, digit;                // Deklarasi variabel integer yang akan digunakan dalam fungsi
        time_t t1;                                  // Deklarasi variabel waktu   
         
        srand ( (unsigned) time (&t1));             // Deklarasi RNG (Random Number Generator) dengan menggunakan fungsi srand() dengan paramater seed waktu (t1)    

        printf("Berapa digit togel?: ");            // Meminta user menginput digit togel yang akan dimainkan
        scanf("%d", &digit);

        printf("Berapa angka togelmu?: ");          // Meminta user menginput angka togel yang akan dimainkan
        scanf("%d", &input);

        printf("\n");
        int count = 0;                              // Deklarasi variabel count untuk menghitung jumlah percobaan yang harus dilakukan while() loop

        /// Memulai loop percobaan
        while (input != x)
        {
            x = (rand() % sembilan(digit)) + sepuluh(digit);                    // Menginisialisasikan angka acak menggunakan fungsi rand() yang dimodulokan dengan fungsi sembilan() dan dijumlahkan dengan fungsi sepuluh() ke dalam variabel x
            printf ("\t\t\t\tAngkamu: %d | Angka Bandar: %d \n", input, x);     // Mencetak angka yang diinput user dan angka yang dihasilkan oleh fungsi rand() yang disimpan dalam variabel x
            count++;                                                            // Menjumlahkan variabel count dengan 1
        }
        
        printf("\n");
        printf("\t\t\t\tButuh %d percobaan untuk berhasil :D", count);          // Mencetak jumlah percobaan yang dibutuhkan oleh while() loop
    }

    // Inisialisasi fungsi utama 2
    void satuSatu(void){
        int num, i, x, input, digit;                        // Deklarasi variabel integer yang akan digunakan dalam fungsi  
        time_t t1;                                          // Deklarasi variabel waktu  
        
        srand ( (unsigned) time (&t1));                     // Deklarasi RNG (Random Number Generator) dengan menggunakan fungsi srand() dengan paramater seed waktu (t1)    

        printf("Berapa digit togel?: ");                    // Meminta user menginput digit togel yang akan dimainkan
        scanf("%d", &digit);

        printf("Berapa angka togelmu?: ");                  // Meminta user menginput angka togel yang akan dimainkan
        scanf("%d", &input);

        x = (rand() % sembilan(digit)) + sepuluh(digit);    // Menginisialisasikan angka acak menggunakan fungsi rand() yang dimodulokan dengan fungsi sembilan() dan dijumlahkan dengan fungsi sepuluh() ke dalam variabel x

        int count = 1;                                      // Deklarasi variabel count untuk menghitung jumlah percobaan yang harus dilakukan while() loop
        
        // Memulai loop percobaan
        while (input != x)
        {
            if (input == 0)         // Kembali ke menu utama
            {
                printf("\n");
                printf("==================================================================================================================\n");
                printf("\t\t\t\t RAGUMU RUGIMU CHUAKZZZZZZZZZZZ\n");
                printf("==================================================================================================================\n");
                break;
            }
            else                    // Input user salah
            {
                printf("\n");
                printf("\t\t\t\tRUNGKAD KANG! \n");
                printf ("\t\t\t\tAngkamu: %d | Angka Bandar: %d \n", input, x);     // Mencetak angka yang diinput user dan angka yang dihasilkan oleh fungsi rand() yang disimpan dalam variabel x
            }
            count++;                                                                // Menjumlahkan variabel count dengan 1
            x = (rand() % sembilan(digit)) + sepuluh(digit);                        // Menginisialisasikan angka acak menggunakan fungsi rand() yang dimodulokan dengan fungsi sembilan() dan dijumlahkan dengan fungsi sepuluh() ke dalam variabel x
            
            printf("\t\t\t\tBerapa angka togel selanjutnya?: ");                    // Meminta user menginput angka selanjutnya
            scanf("%d", &input);
        }
        
        if (input == x)             // Input user benar
        {
            printf("\n");
            printf("\t\t\t\tGACORRRRRRRRR KANG! \n");
            printf ("\t\t\t\tAngkamu: %d | Angka Bandar: %d \n", input, x);         // Mencetak angka yang diinput user dan angka yang dihasilkan oleh fungsi rand() yang disimpan dalam variabel x
            printf("\n");
            printf("\t\t\t\tButuh %d percobaan untuk berhasil :D\n", count);        // Mencetak jumlah percobaan yang dibutuhkan oleh user
            printf("\n");
            printf("==================================================================================================================\n");
        }
    }

    // Inisialisasi fungsi untuk mengembalikan nilai 9 dikali 10 pangkat n-1
    int sembilan(int a){
        int hasil = 9;                  // Inisialisasi nilai variabel hasil untuk a = 1
        for (int i = 1; i < a; i++)     // Inisialisasi for() loop jika nilai a > 1
        {
            hasil *= 10;                // Mengalikan nilai variabel hasil dengan 10
        }
        return hasil;                   // Mengembalikan nilai variabel hasil
    }

    // Inisialisasi fungsi untuk mengembalikan nilai 1 atau 10 pangkat n
    int sepuluh(int a){
        int hasil;                      // Deklarasi variabel hasil
        
        if (a == 1)                     // Jika a = 1
        {
            hasil = 1;                  // Inisialisasi variabel hasil dengan 1
        }
        else                            // Jika a > 1
        {
            hasil = 10;                 // Inisialisasi variabel hasil dengan 10
            for (int i = 2; i < a; i++) // Inisialisasi for() loop untuk a > 2
            {
                hasil *= 10;            // Mengalikan nilai variabel hasil dengan 10
            }
            
        }
        return hasil;                   // Mengembalikan nilai variabel hasil
    }