# LIBFT

This is the first project cadets supposed to do when they start the 42 School program.<br/>
Basically, you have to build a **`C library`** that contains 65 functions.

Most of the functions are common but you can take a look at the implementation of the following functions because I used more creativity on them than usually: 
* **ft_putnbr** - Previously, I was treating `-2,147,483,648` as a separate case. It doesn't get that special treatment anymore. Made the function more elegant. 
* **ft_itoa** - I tried to make the most efficient version possible and I'm proud of it.
* **ft_strsplit** - It's the most challenging function in the library. I did it using chained lists because I failed the `C Exam` because I forgot how to use chained lists. So, I made it even more challenging for myself. Basically, I used this most difficult function as a playground to bring back memories about chained lists. ~~Now that I look back at the function, I can see that I should have used more generic functions for my lists and I see a way to make it more concise. But I want it to stay as it is. Because it was very difficult when I did it.~~ `UPDATE:` After finishing the bonus part of the libft, I remade the strsplit using more generic linked list functions.

Below is the list of all the functions

## String functions

```bash
size_t	ft_strlen(char *str);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strnstr(char *str, char *to_find, int nb);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_islower(int c);
int	ft_isupper(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int	ft_atoi(const char *str);
char	*ft_itoa(int n);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char*));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strequ(char const *s1, char const *s2);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_strsplit(char const *s, char c);
```

## Memory functions

```bash
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
```
## Output functions

```bash
int	ft_putchar(int c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
```

## Bonus functions

```bash
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
```
## Extra functions

```bash
int	ft_pow(int x, int y);
int	ft_abs(int n);
int	ft_get_int_len(int n);
int	ft_char_skip(char **ptr, char c);
```

### Test files ###

I also made my own test files. Here's the list or you can look up the names in the `Makefile`

```bash
test test1 test2 test_strnstr test_strcmp test_strlcat test_memset
test_bzero test_memcpy test_memccpy test_memmove test_memchr
test_atoi test_putstr test_putnbr test_strnew test_memalloc
test_memdel test_striter test_striteri test_strmap test_strmapi
test_strequ test_strnequ test_strsub test_strtrim test_strjoin
test_putendl test_fd test_itoa test_strsplit test_lstmap
```
To use tests you just need to type the following (you must be in the `libft/` folder not the `test/`):

```bash
how to use:
  make <test_name>
  
example:
  make test_itoa
```
