
#include <ctype.h>
#include "libft.h"

void	cmp_res_int(const char *func_name, int res_libft, int res_libc)
{
	if (res_libft == res_libc)
		printf("%s: OK\n", func_name);
	else
		printf("%s: FAIL (libft: %d, libc: %d)\n", func_name, res_libft, res_libc);
}

void	cmp_res_str(const char *func_name, const char *res_libft, const char *res_libc)
{
	if (strcmp(res_libft, res_libc) == 0)
		printf("%s: OK\n", func_name);
	else
		printf("%s: FAIL (libft: %s, libc: %s)\n", func_name, res_libft, res_libc);
}

void	print_test_separator(const char *func_name)
{
	printf("---- Testing %s ----\n", func_name);
}

//Function testers
void test_ft_isalpha(const int *test_cases)
{
	char	*func_name;

	func_name = "ft_isalpha";
	print_test_separator(func_name);
	while (*test_cases)
	{
		cmp_res_int(func_name, ft_isalpha(*test_cases), isalpha(*test_cases));
		test_cases++;
	}
}

void test_ft_isdigit(const int *test_cases)
{
	char	*func_name;

	func_name = "ft_isdigit";
	print_test_separator(func_name);
	while(*test_cases)
	{
		cmp_res_int(func_name, ft_isdigt(*test_cases), isdigit(*test_cases));
		test_cases++;
	}
}

void	test_ft_isalnum(const int *test_cases)
{
	char	*func_name;

	func_name = "ft_isalnum";
	print_test_separator(func_name);
	while (*test_cases)
	{
		cmp_res_int(func_name, ft_isalnum(*test_cases), isalnum(*test_cases));
		test_cases++;
	}
}

void	test_ft_isascii(const int *test_cases)
{
	char	*func_name;

	func_name = "ft_isascii";
	print_test_separator(func_name);
	while (*test_cases)
	{
		cmp_res_int(func_name, ft_isascii(*test_cases), isascii(*test_cases));
		test_cases++;
	}
}

void	test_ft_isprint(const int *test_cases)
{
	char	*func_name;

	func_name = "ft_isprint";
	print_test_separator(func_name);
	while (*test_cases)
	{
		cmp_res_int(func_name, ft_isprint(*test_cases), isprint(*test_cases));
		test_cases++;
	}
}

void	test_ft_strlen(const char **test_cases)
{
	char	*func_name;

	func_name = "ft_strlen";
	print_test_separator(func_name);
	while (*test_cases)
	{
		cmp_res_int(func_name, ft_strlen(test_cases), strlen(test_cases));
		test_cases++;
	}
}

void	test_ft_memset()
{
	char	*func_name;

	func_name = "ft_memset";
}

void	test_ft_bzero()
{
	char	*func_name;

	func_name = "ft_bzero";
}

void	test_ft_memcpy()
{
	char	*func_name;

	func_name = "ft_memcpy";
}

void	test_ft_memmove()
{
	char	*func_name;

	func_name = "ft_memmove";
}

void	test_ft_strlcpy() //(char *test_dst, const char *test_src) 
{
	char	*func_name;

	func_name = "ft_strlcpy";
}

void	test_ft_strlcat()
{
	char	*func_name;

	func_name = "ft_strlcat";
}

void	test_ft_toupper(int *test_cases)
{
	char	*func_name;

	func_name = "ft_toupper";
	print_test_separator(func_name);
	while (*test_cases)
	{
		cmp_res_int(func_name, ft_toupper(*test_cases), toupper(*test_cases));
		test_cases++;
	}
}

void	test_ft_tolower(int *test_cases)
{
	char	*func_name;

	func_name = "ft_tolower";
	print_test_separator(func_name);
	while (*test_cases)
	{
		cmp_res_int(func_name, ft_tolower(*test_cases), tolower(*test_cases));
		test_cases++;
	}
}

void	test_ft_strchr()
{
	char	*func_name;

	func_name = "ft_strchr";
}

void	test_ft_strrchr()
{
	char	*func_name;

	func_name = "ft_strrchr";
}

void	test_ft_memchr()
{
	char	*func_name;

	func_name = "ft_memchr";
}

void	test_ft_memcmp()
{
	char	*func_name;

	func_name = "ft_memcmp";
}

void	test_ft_strnstr()
{
	char	*func_name;

	func_name = "ft_strnstr";
}

void	test_ft_atoi(const char **test_cases)
{
	char	*func_name;

	func_name = "ft_atoi";
	print_test_separator(func_name)
	while (*test_cases)
	{
		cmp_res_int(func_name, ft_atoi(*test_cases), atoi(*test_cases));
		test_cases++;
	}
}