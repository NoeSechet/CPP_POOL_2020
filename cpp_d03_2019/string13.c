/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string13
*/

#include "string.h"

int nb_word(char *str, char sep1)
{
    int words = 0;

    for (int i = 0, var = 0; str[i]; i += 1) {
        if ((str[i] != sep1 && str[i] != '\t') && var == 0) {
            words += 1;
            var = 1;
        } else if (str[i] == sep1 || str[i] == '\t')
            var = 0;
    }
    return (words);
}

char *create_word(int *let, char *str, char sep1)
{
    int i = 0;
    int j = 0;
    char *word;

    *let = 0;
    for (; str[i] == sep1 || str[i] == '\t'; i += 1);
    for (; (str[i] != sep1 && str[i] != '\t') && str[i] != 0; i++, *let += 1);
    *let = i;
    word = malloc(sizeof(char) * (*let + 1));
    if (word == NULL)
        return (NULL);
    for (; str[j] == sep1 || str[j] == '\t'; j += 1);
    for (i = j; (str[i] != sep1 && str[i] != '\t') &&
        str[i] != 0; i += 1)
        word[i - j] = str[i];
    word[i - j] = 0;
    return (word);
}

char **my_str_to_word_array(char *str, char sep1)
{
    int words = 0;
    char *word = NULL;
    char **word_array = NULL;
    int letters = 0;
    int i = 0;

    if (str == NULL)
        return (NULL);
    words = nb_word(str, sep1);
    word_array = malloc(sizeof(char *) * (words + 1));
    for (i = 0; i < words; i += 1) {
        word = create_word(&letters, str, sep1);
        str += letters;
        word_array[i] = word;
    }
    word_array[i] = NULL;
    return (word_array);
}

string_t **split_s(const string_t *this, char separator)
{
    char **tmp = split_c(this, separator);
    int size = 0;

    for (; tmp[size] != NULL; size += 1);
    string_t **tab = malloc(sizeof(string_t *) * size + 1);
    printf("\n\nSIZE = %d\n\n", size);

    for (int i = 0; tmp[i] != NULL; i += 1)
        string_init(tab[i], tmp[i]);

    for (int i = 0; tmp[i] != NULL; i += 1)
        free(tmp[i]);
    free(tmp);

    tab[size] = NULL;
    return (tab);
}

char **split_c(const string_t *this, char separator)
{
    return (my_str_to_word_array(this->str, separator));
}