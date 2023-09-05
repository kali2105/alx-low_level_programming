#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void elf_checker(unsigned char *edt);
void magic_printer(unsigned char *edt);
void class_printer(unsigned char *edt);
void data_printer(unsigned char *edt);
void version_printer(unsigned char *edt);
void abi_printer(unsigned char *edt);
void os_abi_printer(unsigned char *edt);
void type_printer(unsigned int etp, unsigned char *edt);
void entry_printer(unsigned long int etr, unsigned char *edt);
void elf_clser(int elf);

/**
 * entry_printer - A function that prints the entry point of ELF header
 * @etr: The address of the ELF entry point.
 * @edt: A pointer to an array containing the ELF class.
 */
void entry_printer(unsigned long int etr, unsigned char *edt)
{
	printf("  Entry point address:               ");

	if (edt[EI_DATA] == ELFDATA2MSB)
	{
		etr = ((etr << 8) & 0xFF00FF00) |
			  ((etr >> 8) & 0xFF00FF);
		etr = (etr << 16) | (etr >> 16);
	}

	if (edt[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)etr);

	else
		printf("%#lx\n", etr);
}

/**
 * elf_checker - Checks if a file is an ELF file.
 * @edt: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void elf_checker(unsigned char *edt)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (edt[index] != 127 &&
		    edt[index] != 'E' &&
		    edt[index] != 'L' &&
		    edt[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}



/**
 * class_printer - Prints the class of an ELF header.
 * @edt: A pointer to an array containing the ELF class.
 */
void class_printer(unsigned char *edt)
{
	printf("  Class:                             ");

	switch (edt[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", edt[EI_CLASS]);
	}
}

/**
 * magic_printer - Prints the magic numbers of an ELF header.
 * @edt: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void magic_printer(unsigned char *edt)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", edt[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * data_printer - Prints the data of an ELF header.
 * @edt: A pointer to an array containing the ELF class.
 */
void data_printer(unsigned char *edt)
{
	printf("  Data:                              ");

	switch (edt[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", edt[EI_CLASS]);
	}
}

/**
 * version_printer - A function that prints the version of an ELF header
 * @edt: A pointer to an array with the version of ELF
 */
void version_printer(unsigned char *edt)
{
	printf("  Version:                           %d",
	       edt[EI_VERSION]);

	switch (edt[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * os_abi_printer - Prints the OS/ABI of an ELF header
 * @edt: A pointer to an array containing the ELF version
 */
void os_abi_printer(unsigned char *edt)
{
	printf("  OS/ABI:                            ");

	switch (edt[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", edt[EI_OSABI]);
	}
}

/**
 * abi_printer - A function that prints the ABI version of ELF header
 * @edt: A pointer to an array containing the ELF ABI version
 */
void abi_printer(unsigned char *edt)
{
	printf("  ABI Version:                       %d\n",
	       edt[EI_ABIVERSION]);
}

/**
 * type_printer - Prints the type of an ELF header
 * @etp: The ELF type
 * @edt: A pointer to an array containing the ELF class
 */
void type_printer(unsigned int etp, unsigned char *edt)
{
	if (edt[EI_DATA] == ELFDATA2MSB)
		etp >>= 8;

	printf("  Type:                              ");

	switch (etp)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", etp);
	}
}


/**
 * elf_closer - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 */
void elf_clser(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 (SUCCESS)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		elf_clser(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		elf_clser(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_checker(header->edt);
	printf("ELF Header:\n");
	magic_printer(header->edt);
	class_printer(header->edt);
	data_printer(header->edt);
	version_printer(header->edt);
	os_abi_printer(header->edt);
	abi_printer(header->edt);
	type_printer(header->etp, header->edt);
	entry_printer(header->etr, header->edt);

	free(header);
	elf_clser(op);
	return (0);
}
