#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void banner()
{
    system("color f0");
    printf("=====================================\n");
    printf("            Menu Kalkulator          \n");
    printf("=====================================\n\n");
}

//case 1 PINGPOROLANSUDO
void penjumlahan()
{
    float a, b, total,ulang;
    printf("Program penjumlahan\n");
    printf("Masukkan angka 1 = ");
    scanf("%f", &a);
    printf("Masukkan angka 2 = ");
    scanf("%f", &b);

    total = a + b;
    printf("Angka %.f + %.f = %.f\n", a, b, total);
}

void pengurangan()
{
        float a, b, total,ulang;
    printf("Program pengurangan\n");
    printf("Masukkan angka 1 = ");
    scanf("%f", &a);
    printf("Masukkan angka 2 = ");
    scanf("%f", &b);

    total = a - b;
    printf("Angka %.f - %.f = %.f\n", a, b, total);
}

void perkalian()
{
        float a, b, total,ulang;
    printf("Program perkalian\n");
    printf("Masukkan angka 1 = ");
    scanf("%f", &a);
    printf("Masukkan angka 2 = ");
    scanf("%f", &b);

    total = a * b;
    printf("Angka %.f * %.f = %.f\n", a, b, total);
}

void pembagian()
{
        float a, b, total,ulang;
    printf("Program pembagian\n");
    printf("Masukkan angka 1 = ");
    scanf("%f", &a);
    printf("Masukkan angka 2 = ");
    scanf("%f", &b);

    total = a / b;
    printf("Angka %.f / %.f = %.f\n", a, b, total);
}

//case 2 SINCOSTAN
void sinus()
{
    float i,phi,sinus;
    printf("Masukkan derajat sinus : ");
    scanf("%f", &i);
    printf("Hasil Sinus adalah : %.2f",sin(i*(3.14159265358979323846 / 180.0)));
}

void cosinus()
{
    float i,phi,cosinus;
    printf("Masukkan derajat cosinus : ");
    scanf("%f", &i);
    printf("Hasil Cosinus adalah : %.2f",cos(i*(3.14159265358979323846 / 180.0)));
}
void tangen()
{
    float i,phi,tangen;
    printf("Masukkan derajat tangen : ");
    scanf("%f", &i);
    printf("Hasil Tangen adalah : %.2f",tan(i*(3.14159265358979323846 / 180.0)));
}

//case3 KELILING BANGUN DATAR
void hitung_keliling_persegi()
{
    float panjang, lebar, keliling;
    printf("Masukkan Panjang Persegi: ");
    scanf("%f", &panjang);
    printf("Masukkan Lebar Persegi: ");
    scanf("%f", &lebar);
    keliling = 2 * (panjang + lebar);
    printf("Keliling Persegi adalah = %.2f", keliling);
}

void hitung_keliling_trapesium()
{
    float sisi_atas, sisi_bawah, sisi_miring, keliling;
    printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
    scanf("%f", &sisi_atas);
    printf("Masukkan Sisi Bawah Trapesium Sama Kaki : ");
    scanf("%f", &sisi_bawah);
    printf("Masukkan Sisi Miring Trapesium Sama Kaki : ");
    scanf("%f", &sisi_miring);
    keliling = sisi_atas + sisi_bawah + (2 * sisi_miring);
    printf("Keliling Trapesium Sama Kaki Adalah : %.2f\n", keliling);
}

void hitung_keliling_layanglayang()
{
    float a,b,keliling;
    printf("Masukkan Panjang Sisi Atas : ");
    scanf("%f", &a);
    printf("Masukkan Panjang Sisi Bawah : ");
    scanf("%f", &b);
    keliling = 2*(a + b);
    printf("Keliling Layang-Layang Adalah = %.2f\n", keliling);
}

void hitung_keliling_lingkaran()
{
float jari_jari, pi, diameter, keliling;
    printf("Masukkan Panjang Diameter : ");
    scanf("%f", &diameter);
    printf("Masukkan Panjang Jari-Jari : ");
    scanf("%f", &jari_jari);
    pi = 3.14;
    keliling = pi * diameter;
    printf("Keliling Lingkaran berdasarkan jari-jari adalah = %.2f\n", 2 * pi * jari_jari);
    printf("Keliling Lingkaran berdasarkan diameter adalah = %.2f\n", pi * diameter);

}

//case4 LUAS BANGUN DATAR
void hitung_luas_persegi()
{
    float panjang,lebar,luas;
    printf("Masukkan Panjang Persegi : ");
    scanf("%f", &panjang);
    printf("Masukkan Lebar Persegi : ");
    scanf("%f", &lebar);
    luas = panjang * lebar;
    printf("Luas Persegi adalah = %.2f\n",luas);
}

void hitung_luas_trapesium()
{
float a, b, t, luas;
    printf("Masukkan Sisi Atas Trapesium Sama Kaki: ");
    scanf("%f", &a);
    printf("Masukkan Sisi Bawah Trapesium Sama Kaki: ");
    scanf("%f", &b);
    printf("Masukkan Tinggi Trapesium Sama Kaki: ");
    scanf("%f", &t);
    luas = 0.5 * (a + b) * t;
    printf("Luas Trapesium Sama Kaki Adalah = %.2f\n", luas);
}

void hitung_luas_layanglayang()
{
float a,b,luas;
    printf("Masukkan Diagonal Panjang: ");
    scanf("%f", &a);
    printf("Masukkan Diagonal Lebar: ");
    scanf("%f", &b);
    luas = 0.5 * (a * b);
    printf("Luas Layang-Layang Adalah = %.2f\n", luas);
}

void hitung_luas_lingkaran()
{
float r, pi, diameter, luas,luas2;
    printf("Masukkan Panjang Diameter : ");
    scanf("%f", &diameter);
    printf("Masukkan Panjang Jari-Jari : ");
    scanf("%f", &r);
    luas = 0.25 * 22/7*diameter*diameter;
    luas2 = 0.25 *22/7* (r*2) * (r*2);
    printf("Luas Lingkaran berdasarkan diameter adalah = %.2f\n", luas);
    printf("Luas Lingkaran berdasarkan jari-jari adalah = %.2f\n", luas2);
}

//case4 VOLUME BANGUN RUANG
void hitung_volume_kubus()
{
    float a,volume;
    printf("Masukkan Panjang Sisi Kubus : ");
    scanf("%f",&a);
    a = a*a*a;
    printf("Volume Kubus Adalah = %.2f\n",a);
}

void hitung_volume_prisma()
{
    float a,b,c,d,e,f,volume,volume2,volume3,volume4;
    printf("Masukkan Sisi Persegi : ");
    scanf("%f",&a);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &b);
    printf("Masukkan Tinggi Segitiga : ");
    scanf("%f", &c);
    printf("Masukkan Jari-Jari Segitiga : ");
    scanf("%f",&d);
    printf("Masukkan Diameter Segitiga : ");
    scanf("%f",&e);
    printf("Masukkan Tinggi Prisma : ");
    scanf("%f", &f);
    volume = a*a*f;
    printf("Volume Prisma Persegi Adalah = %.2f\n",volume);
    volume2 = 0.5*b*c*f;
    printf("Volume Prisma Segitiga Adalah = %.2f\n",volume2);
    volume3 = 0.25*22/7*(d * 2) * (d*2)* f;
    printf("Volume Silinder Berdasarkan Jari-Jari Adalah : %.2f\n",volume3);
    volume4 = 0.25*22/7*e*e*f;
    printf("Volume Silinder Berdasarkan Diameter Adalah : %.2f\n", volume4);
}

void hitung_volume_limas()
{
    float a,b,c,d,e,f,volume,volume2,volume3,volume4;
    printf("Masukkan Sisi Persegi : ");
    scanf("%f",&a);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &b);
    printf("Masukkan Tinggi Segitiga : ");
    scanf("%f", &c);
    printf("Masukkan Jari-Jari Lingkaran : ");
    scanf("%f",&d);
    printf("Masukkan Diameter Lingkaran: ");
    scanf("%f",&e);
    printf("Masukkan Tinggi Prisma : ");
    scanf("%f", &f);
    volume = a*a*f/3;
    printf("Volume Limas Persegi Adalah = %.2f\n",volume);
    volume2 = 0.5*b*c*f/3;
    printf("Volume Limas Segitiga Adalah = %.2f\n",volume2);
    volume3 = 0.25*22/7*(d*2)*(d*2)* f/3;
    printf("Volume Limas Silinder Berdasarkan Jari-Jari Adalah : %.2f\n",volume3);
    volume4 = 0.25*22/7*e*e*f/3;
    printf("Volume Limas Silinder Berdasarkan Diameter Adalah : %.2f\n", volume4);
}

void hitung_volume_bola()
{
   float r, d, volume;
    printf("Masukkan Jari-Jari Lingkaran : ");
    scanf("%f", &r);
    printf("Masukkan Diameter Lingkaran : ");
    scanf("%f", &d);
    volume = 4.0/3.0 * 3.14 * pow(r, 3);
    printf("Volume Bola Berdasarkan Jari-Jari Adalah : %.2f\n", volume);
    volume = 4.0/3.0 * 3.14 * pow(d/2.0, 3);
    printf("Volume Bola Berdasarkan Diameter Adalah : %.2f\n", volume);
}

void main()
{
   char password[10],usrname[10], ch;
   int i;
   system("cls");

   printf("Enter Username: ");
   gets(usrname);
   printf("Enter the password <any 8 characters>: ");

   for(i=0;i<8;i++)
   {
       ch = getch();
       password[i] = ch;
       ch = '*' ;
       printf("%c", ch);
   }
   printf("\nYour password is : ");

   for(i=0;i<8;i++)
   {
       printf("%c",password[i]);
   }
   mainmenu();
}


void mainmenu()
{
    int pilihan,pilihan2, area, area2,area3,area4,area5,ulang;

    menu:
    system("cls");
    banner();
    printf("Menu\n");
    printf(" 1. PingPoroLanSudo\n");
    printf(" 2. SinCosTan\n");
    printf(" 3. Hitung Keliling dan Luas\n");
    printf(" 4. Hitung Akar Kuadrat\n");
    printf(" 5. Exit\n");
    printf(" Pilih menu : ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
        case 1:
            area:
            system("cls");
            printf("=============================\n");
            printf("        PingPoroLanSudo      \n");
            printf("=============================\n");

            printf("1. Penjumlahan\n");
            printf("2. Pengurangan\n");
            printf("3. Perkalian\n");
            printf("4. Pembagian\n");
            printf("5. Kembali\n");
            printf("Pilih : ");
            scanf("%d", &area);

            switch (area)
            {
               case 1:
                while (1) {
                    system("cls");
                    penjumlahan();
                    home :
                    printf("\nIngin mengulangi penjumlahan? (y/n): ");
                    char input;
                    scanf(" %c", &input);
                    if (input == 'n') {
                        goto area;
                        break;
                    } else if (input == 'y') {
                        continue;
                    } else {
                        printf("Pilihan tidak tersedia. ");
                        goto home;
                    }
                    }
                        break;

                case 2:
                    while (2) {
                    system("cls");
                    pengurangan();
                    home2:
                    printf("\nIngin mengulangi pengurangan? (y/n): ");
                    char input;
                    scanf(" %c", &input);
                    if (input == 'n') {
                        goto area;
                        break;
                    } else if (input == 'y') {
                        continue;
                    } else {
                        printf("Pilihan tidak tersedia. ");
                        goto home2;
                    }
                    }
                        break;

                case 3:
                    while (3) {
                    system("cls");
                    perkalian();
                    home3:
                    printf("\nIngin mengulangi perkalian? (y/n): ");
                    char input;
                    scanf(" %c", &input);
                    if (input == 'n') {
                        goto area;
                        break;
                    } else if (input == 'y') {
                        continue;
                    } else {
                        printf("Pilihan tidak tersedia. ");
                        goto home3;
                    }
                    }
                        break;

                case 4:
                    while (4) {
                    system("cls");
                    pembagian();
                    home4:
                    printf("\nIngin mengulangi pembagian? (y/n): ");
                    char input;
                    scanf(" %c", &input);
                    if (input == 'n') {
                        goto area;
                        break;
                    } else if (input == 'y') {
                        continue;
                    } else {
                        printf("Pilihan tidak tersedia. ");
                        goto home4;
                    }
                    }
                        break;

                case 5:
                    goto menu;
                    break;
                //default:
                    printf("Menu Tidak Tersedia\n");
                    break;
            }
            //SINCOSTAN
            case 2:
            area2:
            system("cls");
            printf("=============================\n");
            printf("     Keliling Luas Volume    \n");
            printf("=============================\n");

            printf("1. Sinus\n");
            printf("2. Cosinus\n");
            printf("3. Tangen\n");
            printf("4. Return Menu Utama\n");
            printf("Pilih : ");
            scanf("%d", &area2);

            switch (area2)
            {
                case 1:
                    while (1) {
                    system("cls");
                    sinus();
                    home5:
                    printf("\nIngin mengulangi sinus? (y/n): ");
                    char input;
                    scanf(" %c", &input);
                    if (input == 'n') {
                        goto area2;
                        break;
                    } else if (input == 'y') {
                        continue;
                    } else {
                        printf("Pilihan tidak tersedia. ");
                        goto home5;
                    }
                    }
                        break;

                case 2:
                    while (2) {
                    system("cls");
                    cosinus();
                    home6:
                    printf("\nIngin mengulangi cosinus? (y/n): ");
                    char input;
                    scanf(" %c", &input);
                    if (input == 'n') {
                        goto area2;
                        break;
                    } else if (input == 'y') {
                        continue;
                    } else {
                        printf("Pilihan tidak tersedia. ");
                        goto home6;
                    }
                    }
                        break;

                case 3:
                    while (3) {
                    system("cls");
                    tangen();
                    home7:
                    printf("\nIngin mengulangi tangen? (y/n): ");
                    char input;
                    scanf(" %c", &input);
                    if (input == 'n') {
                        goto area2;
                        break;
                    } else if (input == 'y') {
                        continue;
                    } else {
                        printf("Pilihan tidak tersedia. ");
                        goto home7;
                    }
                    }
                        break;

                case 4:
                    goto menu;
                    break;
                default:
                    printf("Pilihan Tidak Tersedia\n");
                    break;
            }
            break;
            //HITUNG KELILING DAN LUAS
        case 3:
            pilihan2:
            system("cls");
            printf("=============================\n");
            printf("     Keliling Luas Volume    \n");
            printf("=============================\n");

            printf("1. Hitung Keliling Bangun Datar\n");
            printf("2. Hitung Luas Bangun Datar\n");
            printf("3. Hitung Volume Bangun Ruang\n");
            printf("4. Return Menu Utama\n");
            printf("Pilih : ");
            scanf("%d", &pilihan2);

            switch(pilihan2)
            {
            case 1:
            area3:
            system("cls");
            printf("=============================\n");
            printf("     Keliling Bangun Datar   \n");
            printf("=============================\n");

            printf("1. Keliling Persegi\n");
            printf("2. Keliling Trapesium\n");
            printf("3. Keliling Layang-Layang\n");
            printf("4. Keliling Lingkaran\n");
            printf("5. Kembali ke menu sebelumnya\n");
            printf("Pilih : ");
            scanf("%d", &area3);

            switch (area3)
            {
           case 1:
                while (1) {
                system("cls");
                hitung_keliling_persegi();
                home8:
                printf("\nIngin mengulangi menghitung keliling persegi? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area3;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home8;
                }
                    break;
            }

           case 2:
            while (2){
                system("cls");
                hitung_keliling_trapesium();
                home9:
                printf("\nIngin mengulangi menghitung keliling trapesium? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area3;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home9;
                }
                    break;
            }

             case 3:
            while (3){
                system("cls");
                hitung_keliling_layanglayang();
                home10:
                printf("\nIngin mengulangi menghitung keliling layang-layang? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area3;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home10;
                }
                    break;
            }

            case 4:
            while (4){
                system("cls");
                hitung_keliling_lingkaran();
                home11:
                printf("\nIngin mengulangi menghitung keliling lingkaran? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area3;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home11;
                }
                    break;
            }

            case 5:
                    goto pilihan2;
                    break;
                default:
                    printf("Pilihan Tidak Tersedia\n");
                    break;
            }

            case 2:
            area4:
            system("cls");
            printf("=============================\n");
            printf("     Luas Bangun Datar       \n");
            printf("=============================\n");

            printf("1. Luas Persegi\n");
            printf("2. Luas Trapesium\n");
            printf("3. Luas Layang-Layang\n");
            printf("4. Luas Lingkaran\n");
            printf("5. Kembali ke menu sebelumnya\n");
            printf("Pilih : ");
            scanf("%d", &area4);

            switch (area4)
            {
           case 1:
                while (1) {
                system("cls");
                hitung_luas_persegi();
                home12:
                printf("\nIngin mengulangi menghitung luas persegi? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area4;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home12;
                }
                    break;
            }
            case 2:
                while (2) {
                system("cls");
                hitung_luas_trapesium();
                home13:
                printf("\nIngin mengulangi menghitung luas trapesium? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area4;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home13;
                }
                    break;
            }

            case 3:
                while (3) {
                system("cls");
                hitung_luas_layanglayang();
                home14:
                printf("\nIngin mengulangi menghitung luas layang-layang? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area4;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home14;
                }
                    break;
            }

            case 4:
                while (4) {
                system("cls");
                hitung_luas_lingkaran();
                home15:
                printf("\nIngin mengulangi menghitung luas lingkaran? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area4;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home15;
                }
                    break;
            }
            case 5:
                    goto pilihan2;
                    break;
                default:
                    printf("Pilihan Tidak Tersedia\n");
                    break;
            }

        case 3:
            area5:
            system("cls");
            printf("=============================\n");
            printf("     Volume Bangun Datar     \n");
            printf("=============================\n");

            printf("1. Volume Kubus\n");
            printf("2. Volume Prisma\n");
            printf("3. Volume Limas\n");
            printf("4. Volume Bola\n");
            printf("5. Kembali ke menu sebelumnya\n");
            printf("Pilih : ");
            scanf("%d", &area5);

            switch (area5)
            {
           case 1:
                while (1) {
                system("cls");
                hitung_volume_kubus();
                home16:
                printf("\nIngin mengulangi menghitung volume kubus? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area5;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home16;
                }
                    break;
            }
            case 2:
                while (2) {
                system("cls");
                hitung_volume_prisma();
                home17:
                printf("\nIngin mengulangi menghitung volume prisma? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area5;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home17;
                }
                    break;
            }
            case 3:
                while (3) {
                system("cls");
                hitung_volume_limas();
                home18:
                printf("\nIngin mengulangi menghitung volume limas? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area5;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home18;
                }
                    break;
            }
            case 4:
                while (4) {
                system("cls");
                hitung_volume_bola();
                home19:
                printf("\nIngin mengulangi menghitung volume bola? (y/n): ");
                char input;
                scanf(" %c", &input);
                if (input == 'n') {
                    goto area5;
                } else if (input == 'y') {
                    continue;
                } else {
                    printf("Pilihan tidak tersedia. ");
                    goto home19;
                }
                    break;
            }
             case 5:
                    goto pilihan2;
                    break;
                default:
                    printf("Menu Tidak Tersedia\n");
                    break;
            }

             case 4:
                goto menu;
                    break;
                default:
                    printf("Menu Tidak Tersedia\n");
                    break;
            }
            case 4:
                system("cls");
                float a, akar;
                char input = 'y';
                while (input == 'y') {
                home20:
                printf("Masukkan Bilangan yang akan diakar : ");
                scanf("%f", &a);
                akar = sqrt(a);
                printf("Hasil akar dari %.2f adalah %.2f\n", a, akar);
                printf("\nIngin mengulangi menghitung akar? (y/n): ");
                scanf(" %c", &input);
                if (input == 'n'){
                        goto menu;
                } else if (input== 'y'){
                    continue;
                } else{
                    printf("Pilihan tidak tersedia. ");
                goto home20;
                }
                break;
            }
            case 5:
            system("cls");
            printf("Thank You, GOOD LUCK!");
            break;
            return 0;
        default:
            printf("Menu Tidak Tersedia\n");
            break;
    }
  return 0;
}






















