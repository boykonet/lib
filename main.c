#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

char	ft_func(unsigned int c, char a)
{
	a = a - 32;
	printf("index: %u, char: %c\n", c, a);
	return (a);
}

void	ft_del(void *content)
{
//	if (content != NULL)
		content = NULL;
}

void	ft_lstprint(t_list **lst)
{
	t_list	*current;
	size_t	i;

	current = (*lst);
	i = 1;
	while (current != NULL)
	{
		if ((current->content) == NULL)
			printf("%zu   NULL\n", i);
		else
			printf("%zu   %d\n", i, *(int*)current->content);
		current = current->next;
		i++;
	}
}

void	ft_f(void *content)
{
	printf("ft_f: %d\n", *(int*)content);
}

int		main()
{
//	ft_atoi!!!!!!!
	printf("1 %d\n", ft_atoi("   \n \t \f \v \r   42dhk42jsh\n"));
	printf("1 %d\n", atoi("   \n \t \f \v \r   42dhk42jsh\n"));
	printf("2 %d\n", ft_atoi("   \n \t \f \v \r   +42dhk42jsh\n"));
	printf("2 %d\n", atoi("   \n \t \f \v \r   +42dhk42jsh\n"));
	printf("3 %d\n", ft_atoi("   \n \t \f \v \r   -42dhk42jsh\n"));
	printf("3 %d\n", atoi("   \n \t \f \v \r   -42dhk42jsh\n"));
	printf("4 %d\n", ft_atoi("   \n \t \f \v \r   +-42dhk42jsh\n"));
	printf("4 %d\n", atoi("   \n \t \f \v \r   +-42dhk42jsh\n"));
	printf("5 %d\n", ft_atoi("   \n \t \f \v \r   -+42dhk42jsh\n"));
	printf("5 %d\n", atoi("   \n \t \f \v \r   -+42dhk42jsh\n"));
	printf("6 %d\n", ft_atoi("   \n \t \f \v \r   -+-42dhk42jsh\n"));
	printf("6 %d\n", atoi("   \n \t \f \v \r   -+-42dhk42jsh\n"));
	printf("7 %d\n", ft_atoi("   \n \t \f \v \r   +-+42dhk42jsh\n"));
	printf("7 %d\n", atoi("   \n \t \f \v \r   +-+42dhk42jsh\n"));
	printf("8 %d\n", ft_atoi("   \n \t \f \v \r   --42dhk42jsh\n"));
	printf("8 %d\n", atoi("   \n \t \f \v \r   --42dhk42jsh\n"));
	printf("9 %d\n", ft_atoi(""));
	printf("9 %d\n", atoi(""));
	printf("10 %d\n", ft_atoi("42"));
	printf("10 %d\n", atoi("42"));
	printf("11 %d\n", ft_atoi("-42\n"));
	printf("11 %d\n", atoi("-42\n"));
	printf("12 %d\n", ft_atoi("ksdbfksbf42"));
	printf("12 %d\n", atoi("ksdbfksbf42"));
	printf("13 %d\n", ft_atoi("2222222222222222222222"));
	printf("13 %d\n", atoi("2222222222222222222222"));
	printf("14 %d\n", ft_atoi("-2222222222222222222222"));
	printf("14 %d\n", atoi("-2222222222222222222222"));
	printf("15 %d\n", ft_atoi("22222222222222222222"));
	printf("15 %d\n", atoi("22222222222222222222"));
	printf("16 %d\n", ft_atoi("-99999999999999999999999999             "));
	printf("16 %d\n", atoi("-99999999999999999999999999             "));
	printf("17 %d\n", ft_atoi("2222222222222222"));
	printf("17 %d\n", atoi("2222222222222222"));




//	ft_memset!!!!!!!!

/*	char str[] = "This is string.h library function";
	char tmp[] = "This is string.h library function";

	ft_memset(str, 'A', 7);
	memset(tmp, 'A', 7);
	for (int i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);
	printf("\n");
	for (int i = 0; tmp[i] != '\0'; i++)
		printf("%c", tmp[i]);
	printf("\n");*/


//	ft_bzero!!!!!!!!
	
/*	char str[] = "This is string.h library function";
	char tmp[] = "This is string.h library function";

	int i = 0;
	int j = 0;
	ft_bzero(str, sizeof(char) * 0);
	bzero(tmp, sizeof(char) * 0);
	while (str[i] == '\0')
	{
		int b = '1';
		str[i] = b;
		printf("%c", b);
		i++;
	}
	while (str[i] != '\0')
	{
		printf("%c", str[i++]);
	}
	printf("\n");
	while (tmp[j] == '\0')
	{
		int c = '1';
		tmp[j] = c;
		printf("%c", c);
		j++;
	}
	while (tmp[j] != '\0')
		printf("%c", tmp[j++]);
	printf("\n");*/

//	ft_memcpy!!!!!!!

/*	unsigned char	array1[18] = "Hello, World!";
	unsigned char	byte1[sizeof(array1) / sizeof(unsigned char)];
	unsigned char	array2[18] = "Hello, World!";
	unsigned char	byte2[sizeof(array2) / sizeof(unsigned char)];*/

/*	unsigned char	array1[18] = "";
	unsigned char	byte1[sizeof(array1) / sizeof(unsigned char)];
	unsigned char	array2[18] = "";
	unsigned char	byte2[sizeof(array2) / sizeof(unsigned char)];*/


/*	unsigned char	array1[18] = "111111111111111111";
	unsigned char	byte1[sizeof(array1) / sizeof(unsigned char)];
	unsigned char	array2[18] = "111111111111111111";
	unsigned char	byte2[sizeof(array2) / sizeof(unsigned char)];


	memcpy(byte1, array1, (sizeof(array1) / sizeof(unsigned char)));
	ft_memcpy(byte2, array2, (sizeof(array2) / sizeof(unsigned char)));
	for (int i = 0; byte1[i] != '\0'; i++)
		printf("%c", byte1[i]);
	printf("\n");
	for (int i = 0; byte2[i] != '\0'; i++)
		printf("%c", byte2[i]);
	printf("\n");*/


//	ft_memccpy!!!!!

/*	char	src1[] = "test basic du memccpy !";
	char	buff1[22];

	char	src2[] = "test basic du memccpy !";
	char	buff2[22];

	memset(buff1, 0, sizeof(buff1));
	memset(buff2, 0, sizeof(buff2));

	char	*r1;
	char	*r2;

	if ((r1 = memccpy(buff1, src1, 'm', 22)) == NULL)
		printf("memccpy - NULL\n");
	else
		printf("memccpy - %s\n", r1);

	if ((r2 = ft_memccpy(buff2, src2, 'm', 22)) == NULL)
		printf("ft_memccpy - NULL\n");
	else
		printf("ft_memccpy - %s\n", r2);
	if ((r1 = memccpy("", src1, 'm', 0)) == NULL)
		printf("memccpy - NULL\n");
	else
		printf("memccpy - %s\n", r1);

	if ((r2 = ft_memccpy("", src2, 'm', 0)) == NULL)
		printf("ft_memccpy - NULL\n");
	else
		printf("ft_memccpy - %s\n", r2);*/
/*	unsigned char src1[] = "12345";
	unsigned char src2[] = "12345";


	unsigned char array1[40] = "2345678910000";
	unsigned char dst1[40] = "";
	unsigned char array2[40] = "2345678910000";
	unsigned char dst2[40] = "";

	unsigned char array1[40] = "Hello, World!";
	unsigned char dst1[40] = "";
	unsigned char array2[40] = "Hello, World!";
	unsigned char dst2[40] = "";

	unsigned char array1[0] = "";
	unsigned char dst1[0] = "";
	unsigned char array2[0] = "";
	unsigned char dst2[0] = "";

	memccpy(dst1, array1, '0', 0);
	ft_memccpy(dst2, array2, '0', 0);
	printf("%s\n", memccpy("", src1, 'm', 0));
	printf("%s\n", ft_memccpy("", src2, 'm', 0));*/
//	printf("%s\n", src1);
//	printf("%s\n", src2);


/*	char    src[] = "test basic du memccpy !";
    char    buff1[22];
    char    *s;

    memset(buff1, 0, sizeof(buff1));

    if ((memccpy(buff1, src, 'm', 22)) == NULL)
        printf("NULL\n");
    else
        printf("%s\n", buff1);
    memset(buff1, 0, sizeof(buff1));
    if ((ft_memccpy(buff1, src, 'm', 22)) == NULL)
        printf("NULL\n");
    else
        printf("%s\n", buff1);
    memset(buff1, 0, sizeof(buff1));
    if ((memccpy("", src, 'm', 0)) == NULL)
        printf("NULL\n");
    else
        printf("%s\n", buff1);
    memset(buff1, 0, sizeof(buff1));
    if ((ft_memccpy("", src, 'm', 0)) == NULL)
        printf("NULL\n");
    else
        printf("%s\n", buff1);*/	

//	ft_memmove

/*	unsigned char src1[] = "1234567890";
	unsigned char str1[] = "1234567890";
	unsigned char src2[] = "1234567890";
	unsigned char str2[] = "1234567890";
	size_t	len = 3;

	memmove(&src1[4], &src1[3], len);
	printf("memmove %s\n", src1);
	ft_memmove(&str1[4], &str1[3], len);
	printf("ft_memmove %s\n", str1);
	memmove(&src2[3], &src2[4], len);
	printf("memmove %s\n", src2);
	ft_memmove(&str2[3], &str2[4], len);
	printf("ft_memmove %s\n", str2);*/


//	fr_strlen

/*	char str[] = "998765dbfksjdbsj";
	printf("%lu\n", strlen(str));
	printf("%lu\n", ft_strlen(str));*/

//	ft_strlcpy
/*	char str1[11] = "1234567890";
	char dst1[11] = "";
	char str2[11] = "1234567890";
	char dst2[11] = "";


	printf("%lu\n", strlcpy(dst1, str1, sizeof(dst1)));
	printf("%s\n", dst1);
	printf("%lu\n", ft_strlcpy(dst2, str2, sizeof(dst2)));
	printf("%s\n", dst2);*/

//	ft_isascii

/*	unsigned char	c = '\0';
	unsigned char	s = 0x80;

	unsigned char	c = '\b';
	unsigned char	s = 0;
	printf("%d\n", isascii(c));
	printf("%d\n", isascii(s));
	printf("%d\n", ft_isascii(c));
	printf("%d\n", ft_isascii(s));*/

//	ft_isalpha

/*	char c1 = 'a';
	printf("%d\n", isalpha(c1));
	printf("ft%d\n", ft_isalpha(c1));
	char c2 = 'z';
	printf("%d\n", isalpha(c2));
	printf("ft%d\n", ft_isalpha(c2));
	char c3 = 'A';
	printf("%d\n", isalpha(c3));
	printf("ft%d\n", ft_isalpha(c3));
	char c4 = 'Z';
	printf("%d\n", isalpha(c4));
	printf("ft%d\n", ft_isalpha(c4));*/

//	ft_isdigit

/*	char c1 = '0';
	printf("%d\n", isdigit(c1));
	printf("ft%d\n", ft_isdigit(c1));
	char c2 = '9';
	printf("%d\n", isdigit(c2));
	printf("ft%d\n", ft_isdigit(c2));
	char c3 = '5';
	printf("%d\n", isdigit(c3));
	printf("ft%d\n", ft_isdigit(c3));
	char c4 = 'a';
	printf("%d\n", isdigit(c4));
	printf("ft%d\n", ft_isdigit(c4));*/

//	ft_isalnum


/*	char c1 = 'a';
	printf("%d\n", isalnum(c1));
	printf("ft%d\n", ft_isalnum(c1));
	char c2 = 'z';
	printf("%d\n", isalnum(c2));
	printf("ft%d\n", ft_isalnum(c2));
	char c3 = 'A';
	printf("%d\n", isalnum(c3));
	printf("ft%d\n", ft_isalnum(c3));
	char c4 = 'Z';
	printf("%d\n", isalnum(c4));
	printf("ft%d\n", ft_isalnum(c4));

	char s1 = '0';
	printf("%d\n", isalnum(s1));
	printf("ft%d\n", ft_isalnum(s1));
	char s2 = '9';
	printf("%d\n", isalnum(s2));
	printf("ft%d\n", ft_isalnum(s2));
	char s3 = '5';
	printf("%d\n", isalnum(s3));
	printf("ft%d\n", ft_isalnum(s3));
	char s4 = 'H';
	printf("%d\n", isalnum(s4));
	printf("ft%d\n", ft_isalnum(s4));*/

//	ft_isprint

/*	char	c[200];

	for (int i = 0; i < 200; i++)
	{
		c[i] = 0 + i;
	}
	for (int i = 0; i < 200; i++)
	{
		printf("%d - %d - %c\n", i, isalnum(c[i]), c[i]);
		printf("%d - %d - %c\n", i, ft_isalnum(c[i]), c[i]);
	}*/



//	ft_toupper

/*	char	c[200];

	for (int i = 0; i < 200; i++)
	{
		c[i] = i;
	}
	for (int i = 0; i < 200; i++)
	{
		printf("%d - %c - %c\n", i, toupper(c[i]), c[i]);
		printf("%d - %c - %c\n", i, ft_toupper(c[i]), c[i]);
	}*/

//	ft_tolower

/*	char	c[200];

	for (int i = 0; i < 200; i++)
	{
		c[i] = i;
	}
	for (int i = 0; i < 200; i++)
	{
		printf("%d - %c - %c\n", i, tolower(c[i]), c[i]);
		printf("%d - %c - %c\n", i, ft_tolower(c[i]), c[i]);
	}*/

//	ft_strdup
	
/*	char str[] = "Sasha ela kashu!";

	printf("strdup: %s\n", strdup(str));
	printf("ft_strdup: %s\n", ft_strdup(str));*/

//	ft_calloc


/*	char *str, *tmp;

	str = (char*)calloc(0, sizeof(char));
	tmp = (char*)ft_calloc(0, sizeof(char));
	printf("calloc: %s\n", str);
	printf("ft_calloc: %s\n", tmp);*/

//	ft_strnstr

/*	char	big[30] = "Thid s id  horosho sdfffid  ";
	char	little[] = "id  horosh";

	printf("%s\n", strnstr(big, little, sizeof(big)));
	printf("%s\n", ft_strnstr(big, little, sizeof(big)));*/
/*	char	*s1 = "seeffyourreturnnow";
	char	*s2 = "you";
	size_t	max = strlen(s1);

	printf("%s\n", strnstr(s1, s2, max));
	printf("%s\n", ft_strnstr(s1, s2, max));*/


/*	char s3[] = "MZIRIBMZIRIBMZE123";
	char s4[] = "MZIRIBMZE";
	max = strlen(s2);

	printf("%s\n", strnstr(s3, s4, max));
	printf("%s\n", ft_strnstr(s3, s4, max));

	char	*s11 = "oh no not the empty string !";
	char	*s22 = "";
	size_t	max2 = 0;

	printf("%s\n", strnstr(s11, s22, max2));
	printf("%s\n", ft_strnstr(s11, s22, max2));

	char	*s111 = "AAAAAAAAAAAAA";
	size_t	max3 = strlen(s111);

	printf("%s\n", strnstr(s111, s111, max3));
	printf("%s\n", ft_strnstr(s111, s111, max3));*/

//	ft_strncmp

/*	char str1[7] = "abcdef";
	char str2[7] = "abcdefd";

	printf("%d\n", strncmp(str1, str2, 7));
	printf("%d\n", ft_strncmp(str1, str2, 7));*/

//	ft_strchr

/*	char	str[] = "Sacha! sushka! suchka!";
	
	printf("%s\n", strchr(str, 'S'));
	printf("%s\n", ft_strchr(str, 'S'));*/

//	ft_strrchr

/*	char	str[] = "Sacha! sushka! suchka!";
	
	printf("%s\n", strrchr(str, 'S'));
	printf("%s\n", ft_strrchr(str, 'S'));*/

//	ft_memcmp

	/*char str1[6] = "abcde";
	char str2[6] = "abcdef";

	printf("%d\n", memcmp(str1, str2, 0));
	printf("%d\n", ft_memcmp(str1, str2, 0));*/

//	ft_memchr

/*	char str[7] = "qwerty";

	printf("%s\n", memchr(str, '\0', sizeof(str)));
	printf("%s\n", ft_memchr(str, '\0', sizeof(str)));*/


//	ft_strlcat

/*	const char	str1[] = "fghfghj";
	const char	str2[] = "fghfghj";
	size_t		sz1;
	size_t		sz2;

	char		buf1[] = "jjz\0ggg";
	char		buf2[] = "jjz\0ggg";

	printf("%zu\n", sz1 = strlcat(buf1, str1, sizeof(buf1)));
	printf("%zu\n", sz2 = ft_strlcat(buf2, str2, sizeof(buf2)));
//	if (sz >= sizeof(buf))
//		printf("обнаружено усечение строки с %zu до %lu символов !\n", sz, sizeof(buf) - 1);

	printf("буфер после копирования:  \"%s\"\n", buf1);
	printf("буфер после копирования:  \"%s\"\n", buf2);*/

/*	char	*str = "the cake is a lie !\0I'm hidden lol\r\n";
	char	buff1[0xF00] = "there is no stars in the sky";
	char	buff2[0xF00] = "there is no stars in the sky";
	size_t	max = strlen(str) + 4;

	printf("%zu\n", strlcat(buff1, str, max));
	printf("%s\n", buff1);
	printf("%zu\n", ft_strlcat(buff2, str, max));
	printf("%s\n", buff2);

	char	*str1 = "the cake is a lie !\0I'm hidden lol\r\n";
	char	buff11[0xF00] = "there is no stars in the sky";
	char	buff22[0xF00] = "there is no stars in the sky";
	size_t	max1 = strlen(str1) + 4;

	printf("%zu\n", strlcat(buff11, str1, max1));
	printf("%s\n", buff11);
	printf("%zu\n", ft_strlcat(buff22, str1, max1));
	printf("%s\n", buff22);

	char	s11[4] = "";
	char	s22[4] = "";
	printf("%zu\n", strlcat(s11, "thx to ntoniolo for this test !", 4));
	printf("%s\n", s11);
	printf("%zu\n", ft_strlcat(s22, "thx to ntoniolo for this test !", 4));
	printf("%s\n", s22);

	char	*str11 = "the cake is a lie !\0I'm hidden lol\r\n";
	char	buff111[0xF00] = "there is no stars in the sky";
	char	buff222[0xF00] = "there is no stars in the sky";
	size_t	max11 = strlen(str11) + strlen(buff111);

	printf("%zu\n", strlcat(buff111, str11, max11));
	printf("%s\n", buff111);
	printf("%zu\n", ft_strlcat(buff222, str11, max11));
	printf("%s\n", buff222);*/

//	ft_substr

/*	char str[] = "aabcdefdgdhgbcbd";
	char c = 'c';
	size_t len = 5;

	printf("%s\n", ft_substr(str, c, len));*/



//	ft_strjoin

/*	char	str1[] = "12345";
	char	str2[] = "67890";

	printf("%s\n", ft_strjoin(str1, str2));*/

//	ft_itoa

/*	printf("%s\n", ft_itoa(-22));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(34));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));*/


//	ft_strmapi


/*	char	str[] = "abc";

	printf("%s\n", ft_strmapi(str, &ft_func));*/


//	ft_putchar_fd

/*	int		fd;
	char	c = 'a';

	fd = open("len", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("Error open()");
		return (1);
	}
	ft_putchar_fd(c, fd);
	if (close(fd) == -1)
	{
		printf("Error close()");
		return (1);
	}*/



//ft_putstr_fd

/*	int		fd;
	char	c[] = "abcdef";

	fd = open("len", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("Error open()");
		return (1);
	}
	ft_putstr_fd(c, fd);
	if (close(fd) == -1)
	{
		printf("Error close()");
		return (1);
	}*/

//ft_putendl_fd

/*	int		fd;
	char	c[] = "abcdef";

	fd = open("len", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("Error open()");
		return (1);
	}
	ft_putendl_fd(c, fd);
	if (close(fd) == -1)
	{
		printf("Error close()");
		return (1);
	}*/



//	ft_putnbr_fd

/*	int		fd;
	int		c = 2147483647;

	fd = open("len", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("Error open()");
		return (1);
	}
	ft_putnbr_fd(c, fd);
	if (close(fd) == -1)
	{
		printf("Error close()");
		return (1);
	}*/


//	ft_split

/*	char s[] = "111,222,333,,";
	char **dst;
	int i;

	i = 0;
	dst = ft_split(s, ',');
	while (dst[i])
	{
		printf("%s\n", dst[i++]);
	}


	char s1[] = "      split       this for   me  !       ";
	char **dst1;
	i = 0;
	dst = ft_split(s1, ' ');
	while (dst[i])
		printf("%s\n", dst[i++]);*/

//	ft_strtrim
	
/*	char const	str[] = "123abc123";
	char const	set[] = "12";

	printf("%s\n", ft_strtrim(str, set));*/

	

//	ft_lst...

/*	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;
	t_list	*lst5;

//	t_list	*result;
	int		a = 1;
	int		b = 2;
	int		c = 3;
	int		d = 4;
	int		e = 5;*/
//	int		count;
	
/*	lst1 = ft_lstnew(&a);
	lst2 = ft_lstnew(&b);
	lst3 = ft_lstnew(&c);
	lst4 = ft_lstnew(&d);
	lst5 = ft_lstnew(&e);

	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	ft_lstadd_back(&lst1, lst4);
	ft_lstadd_back(&lst1, lst5);
	ft_lstprint(&lst1);

	ft_lstiter(lst1, &ft_f);*/

	/*lst1 = ft_lstnew(&a);
	lst2 = ft_lstnew(&b);
	ft_lstadd_front(&lst1, lst2);
	lst3 = ft_lstnew(&c);
	ft_lstadd_front(&lst2, lst3);
	count = ft_lstsize(lst3);
	printf("count: %d\n", count);
	printf("lst1: %d\n", *(int*)lst1->content);
	printf("lst2: %d\n", *(int*)lst2->content);
	printf("lst3: %d\n", *(int*)lst3->content);
	result = ft_lstlast(lst3);
	if (result != NULL)
		printf("end: %d\n", *(int*)result->content);
	else
		printf("NULL\n");
	lst4 = ft_lstnew(&d);
	ft_lstadd_back(&lst3, lst4);
	result = ft_lstlast(lst3);
	if (result != NULL)
		printf("end: %d\n", *(int*)result->content);
	else
		printf("NULL\n");
	count = ft_lstsize(lst3);
	printf("count: %d\n", count);
	ft_lstprint(&lst3);
	lst5 = ft_lstnew(&e);
	ft_lstadd_back(&lst3, lst5);
	result = ft_lstlast(lst3);
	if (result != NULL)
		printf("end: %d\n", *(int*)result->content);
	else
		printf("NULL\n");
	count = ft_lstsize(lst3);
	printf("count: %d\n", count);
//	ft_lstprint(&lst3);
	ft_lstdelone(lst5, &ft_del);
	ft_lstprint(&lst3);

	free(lst5);
	free(lst4);	
	free(lst1);
	free(lst2);
	free(lst3);*/

/*	t_list	*l;
	l = ft_lstnew("nyacat");
	t_list	*n;
	n = ft_lstnew("OK");

	ft_lstadd_front(&l, n);

    if (l == n && !strcmp(l->content, "OK"))
		printf("Perfect\n");
	else
		printf("Fail\n");*/


	return 0;
}
