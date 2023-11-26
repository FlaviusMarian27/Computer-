/*Sa se realizeze o implementare proprie a functiilor 
standard de prelucrare de string-uri cum ar fi: strcmp, 
strcpy, strstr, strchr, strcat, strncmp, strncpy, strncat, 
atoi, strtol (fara parametrul char **endptr). Se va realiza 
atat o implementare ce foloseste operatorul de indexare in 
tablou cat si o implementare ce foloseste doar pointeri si 
aritmetica cu pointeri fara a folosi in aceasta si operatorul 
de indexare.*/


/*Acestea sunt doar exemple simple pentru strcmp și strcpy. 
Aceeași abordare poate fi utilizată pentru alte funcții. 
Va trebui să adaptezi aceste implementări pentru a se potrivi 
cu specificul funcțiilor pe care dorești să le implementezi.*/


#include <stdio.h>

// Implementare my_strcmp fara operatorul de indexare
int my_strcmp(const char* s1, const char* s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return (*s1 > *s2) ? 1 : -1;
        }
        s1++;
        s2++;
    }
    return 0;
}

// Implementare my_strcpy fara operatorul de indexare
char* my_strcpy(char* dest, const char* src) {
    char* original_dest = dest;
    while ((*dest++ = *src++) != '\0')
        ;
    return original_dest;
}

// Implementare my_strstr fara operatorul de indexare
char* my_strstr(const char* haystack, const char* needle) {
    while (*haystack != '\0') {
        const char* h = haystack;
        const char* n = needle;

        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }

        if (*n == '\0') {
            return (char*)haystack;
        }

        haystack++;
    }

    return NULL;
}

// Implementare my_strchr fara operatorul de indexare
char* my_strchr(const char* s, int c) {
    while (*s != '\0') {
        if (*s == c) {
            return (char*)s;
        }
        s++;
    }
    return NULL;
}

// Implementare my_strcat fara operatorul de indexare
char* my_strcat(char* dest, const char* src) {
    char* original_dest = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return original_dest;
}

// Implementare my_strncmp fara operatorul de indexare
int my_strncmp(const char* s1, const char* s2, size_t n) {
    while (n > 0 && *s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
        n--;
    }

    if (n == 0) {
        return 0;
    }

    return (*s1 > *s2) ? 1 : (*s1 < *s2) ? -1 : 0;
}

// Implementare my_strncpy fara operatorul de indexare
char* my_strncpy(char* dest, const char* src, size_t n) {
    char* original_dest = dest;

    while (n > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return original_dest;
}

// Implementare my_strncat fara operatorul de indexare
char* my_strncat(char* dest, const char* src, size_t n) {
    char* original_dest = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (n > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return original_dest;
}

// Implementare my_atoi fara operatorul de indexare
int my_atoi(const char* str) {
    int result = 0;
    int sign = 1;

    while (*str == ' ' || (*str >= '\t' && *str <= '\r')) {
        str++;
    }

    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return sign * result;
}

// Implementare my_strtol fara operatorul de indexare
long my_strtol(const char* str, char** endptr, int base) {
    long result = 0;
    int sign = 1;

    while (*str == ' ' || (*str >= '\t' && *str <= '\r')) {
        str++;
    }

    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    if (base == 0) {
        if (*str == '0') {
            base = 8;
            str++;
            if (*str == 'x' || *str == 'X') {
                base = 16;
                str++;
            }
        } else {
            base = 10;
        }
    }

    while ((*str >= '0' && *str <= '9') ||
           (*str >= 'a' && *str <= 'z') ||
           (*str >= 'A' && *str <= 'Z')) {
        int digit = 0;
        if (*str >= '0' && *str <= '9') {
            digit = *str - '0';
        } else if (*str >= 'a' && *str <= 'z') {
            digit = *str - 'a' + 10;
        } else if (*str >= 'A' && *str <= 'Z') {
            digit = *str - 'A' + 10;
        }

        if (digit < base) {
            result = result * base + digit;
            str++;
        } else {
            break;
        }
    }

    if (endptr != NULL) {
        *endptr = (char*)str;
    }

    return sign * result;
}

int main(void) {
    const char haystack[] = "This is a simple example.";
    const char needle[] = "simple";

    // Testare my_strstr
    char* result_strstr = my_strstr(haystack, needle);
    if (result_strstr != NULL) {
        printf("my_strstr: %s\n", result_strstr);
    } else {
        printf("my_strstr: Not found\n");
    }

    const char str[] = "Hello, World!";

    // Testare my_strchr
    char* result_strchr = my_strchr(str, 'W');
    if (result_strchr != NULL) {
        printf("my_strchr: %s\n", result_strchr);
    } else {
        printf("my_strchr: Not found\n");
    }

    // Testare my_strcat
    char dest_strcat[30] = "Hello";
    my_strcat(dest_strcat, ", World!");
    printf("my_strcat: %s\n", dest_strcat);

    const char str1_strncmp[] = "abcd";
    const char str2_strncmp[] = "abce";

    // Testare my_strncmp
    int result_strncmp = my_strncmp(str1_strncmp, str2_strncmp, 3);
    printf("my_strncmp: %d\n", result_strncmp);

    const char src_strncpy[] = "Hello, World!";
    char dest_strncpy[20];

    // Testare my_strncpy
    my_strncpy(dest_strncpy, src_strncpy, 5);
    printf("my_strncpy: %s\n", dest_strncpy);

    // Testare my_strncat
    char dest_strncat[30] = "Hello";
    my_strncat(dest_strncat, ", World!", 5);
    printf("my_strncat: %s\n", dest_strncat);

    // Testare my_atoi
    const char str_atoi[] = "12345";
    int result_atoi = my_atoi(str_atoi);
    printf("my_atoi: %d\n", result_atoi);

    // Testare my_strtol
    const char str_strtol[] = "12345";
    char* endptr_strtol;
    long result_strtol = my_strtol(str_strtol, &endptr_strtol, 10);
    printf("my_strtol: %ld\n", result_strtol);

    return 0;
}
