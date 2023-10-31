#include "main.h"
/**
 * print_error - Prints an error message to stderr and exits with status 98
 * @message: The error message to be printed
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return 98;
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Failed to open file");

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		close(fd);
		print_error("Failed to read ELF header");
	}

	/* Check ELF magic number */
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		print_error("Not an ELF file");
	}

	/* Display ELF header information following the specified format */
	printf("Magic:   %02x %02x %02x %02x\n",
		   elf_header.e_ident[EI_MAG1],
		   elf_header.e_ident[EI_MAG2],
		   elf_header.e_ident[EI_MAG3],
		   elf_header.e_ident[EI_MAG0]);

	printf("Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n", elf_header.e_type);
	printf("Entry point address:               %#lx\n", (unsigned long)elf_header.e_entry);

	close(fd);
	return 0;
}
