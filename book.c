#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Perpus_header.h"

void CetakBuku(perpus *isi)
{
	while (isi != NULL)
	{
		printf("=====Buku=====\n");
		printf("ISBN\t\t: %s\n", isi->ISBN);
		printf("Judul Buku\t: %s\n", isi->JudulBuku);
		printf("Jenis Buku\t: %s\n", isi->JenisBuku);
		printf("Author\t\t: %s\n\n\n", isi->Author);
		printf("=====Nama Donatur=====\n");
		printf("NIDN\t\t: %s\n", isi->NIDN);
		printf("Nama\t\t: %s\n", isi->Nama);
		printf("Nomor Telepon\t: %s\n", isi->NoTelp);
		puts(" ");
		isi = isi->ptrNextBuku;
	}
}

void SearchBook(perpus *isi, char *cari)
{
	while (isi != NULL)
	{
		if (strcmp(isi->ISBN, cari) == 0)
		{
			printf("=====Buku=====\n");
			printf("ISBN\t\t: %s\n", isi->ISBN);
			printf("Judul Buku\t: %s\n", isi->JudulBuku);
			printf("Jenis Buku\t: %s\n", isi->JenisBuku);
			printf("Author\t\t: %s\n\n\n", isi->Author);
			printf("=====Nama Donatur=====\n");
			printf("NIDN\t\t: %s\n", isi->NIDN);
			printf("Nama\t\t: %s\n", isi->Nama);
			printf("Nomor Telepon\t: %s\n", isi->NoTelp);
			puts(" ");
		}
		isi = isi->ptrNextBuku;
	}
}
void cariBuku(perpus *isi, char *donat)
{
	while (isi != NULL)
	{
		if (strcmp(isi->NIDN, donat) == 0)
		{
			printf("=====Nama Donatur=====\n");
			printf("NIDN\t\t: %s\n", isi->NIDN);
			printf("Nama\t\t: %s\n", isi->Nama);
			printf("Nomor Telepon\t: %s\n\n", isi->NoTelp);

			printf("=====Buku=====\n");
			printf("ISBN\t\t: %s\n", isi->ISBN);
			printf("Judul Buku\t: %s\n", isi->JudulBuku);
			printf("Jenis Buku\t: %s\n", isi->JenisBuku);
			printf("Author\t\t: %s\n\n\n", isi->Author);
		}
		isi = isi->ptrNextBuku;
	}
}

void tambahBook(perpus **buku, char ISBN[MAX_LEN], char JudulBuku[MAX_LEN], char JenisBuku[MAX_LEN], char Author[MAX_LEN], char NIDN[MAX_LEN], char Nama[MAX_LEN], char NoTelp[MAX_LEN])
{
	perpus *khusus_tambah = (perpus *)calloc(1, sizeof(perpus));
	strcpy(khusus_tambah->ISBN, ISBN);
	strcpy(khusus_tambah->JudulBuku, JudulBuku);
	strcpy(khusus_tambah->JenisBuku, JenisBuku);
	strcpy(khusus_tambah->Author, Author);
	strcpy(khusus_tambah->NIDN, NIDN);
	strcpy(khusus_tambah->Nama, Nama);
	strcpy(khusus_tambah->NoTelp, NoTelp);
	khusus_tambah->ptrNextBuku = (*buku);
	(*buku) = khusus_tambah;
}
