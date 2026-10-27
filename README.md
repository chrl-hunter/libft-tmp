*Este proyecto ha sido creado como parte del currículo de 42 por cperez-h.*

# Libft

## Descripción

Libft es una librería estática en C que reimplementa funciones básicas de la libc y
añade utilidades para la gestión de cadenas, memoria y listas enlazadas. El objetivo
del proyecto es comprender el comportamiento de estas funciones, implementarlas sin
depender de las versiones del sistema y disponer de una base reutilizable para los
siguientes proyectos del Common Core.

La librería incluye tres bloques:

- Funciones de la libc, como `ft_strlen`, `ft_memmove`, `ft_strlcpy` o `ft_atoi`.
- Funciones adicionales con reserva dinámica de memoria, como `ft_split`, `ft_itoa`
  o `ft_strmapi`.
- Funciones para crear, recorrer y liberar listas enlazadas mediante `t_list`.

## Instrucciones

Desde la raíz del repositorio:

```sh
make
```

Esto genera `libft.a`. Para usar la librería en otro programa:

```sh
cc -Wall -Wextra -Werror main.c libft.a -I. -o programa
```

Otras reglas disponibles:

```sh
make clean
make fclean
make re
```

- `clean` elimina los archivos objeto.
- `fclean` elimina los objetos y `libft.a`.
- `re` reconstruye la librería desde cero.

## Recursos

- `man` de las funciones originales de la libc.
- Documentación del estándar C sobre cadenas, memoria y punteros.
- `la-norma.pdf`, norma de estilo aplicada al proyecto.
- `libft.pdf`, enunciado oficial de Libft.
- Documentación de listas enlazadas y gestión de memoria dinámica en C.

### Uso de IA

Se utilizó IA como apoyo para auditar el código, contrastar comportamientos con la
libc, detectar errores de compilación y de Norma, proponer casos de prueba y revisar
la documentación del proyecto. La implementación final, las pruebas y la comprensión
del código deben ser verificadas y defendidas por el estudiante.

## Funciones

### Parte 1: libc

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_strlen`,
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`,
`ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`,
`ft_memcmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`.

### Parte 2: funciones adicionales

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`,
`ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### Parte 3: listas enlazadas

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`,
`ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Estructura

```text
.
├── Makefile
├── README.md
├── libft.h
├── ft_*.c
├── la-norma.pdf
└── libft.pdf
```
