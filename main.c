#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "s0delete.cpp"
#include "s0firstDelete.cpp"
#include "s1tos2change.cpp"
#include "BtwSpaceOutput.cpp"

int main()
{
    printf("Task 1\n");
    /*Даны строки S и S0. Удалить из строки S ПЕРВУЮ подстроку, совпадающую с S0.
    Если совпадающих подстрок нет, то вывести строку S без изменений*/
    char s[100];
    printf("\tEnter the string S: \n");
    gets(s);
    char s0[100];
    printf("\tEnter the string S0: \n");
    gets(s0);
    char *sFin=s0firstDelete(s,s0);
    printf("\tFinal string (S whithout first S0): \n");
    puts(sFin);

    printf("\nTask 2\n");
    /*Даны строки S и S0. Удалить из строки S ВСЕ подстроки, совпадающие с S0. Если
    совпадающих подстрок нет, то вывести строку S без изменений*/
    printf("\tEnter the string S: \n");
    gets(s);
    printf("\tEnter the string S0: \n");
    gets(s0);
    sFin=s0delete(s,s0);
    printf("\tFinal string (S whithout S0): \n");
    puts(sFin);

    printf("\nTask 3\n");
    /*Даны строки S, S1 и S2. Заменить в строке S первое вхождение строки S1 на
    строку S2*/
    printf("Enter string S: \n");
    gets(s);
    printf("Enter string S1: \n");
    gets(s0);
    printf("Enter string S2: \n");
    char s2[100];
    gets(s2);
    sFin=s1tos2change(s,s0,s2);
    printf("\tFinal string (S with changed S1 to S2): \n");
    puts(sFin);

    printf("\nTask 4\n");
    /*Дана строка, содержащая, по крайней мере, один символ пробела. Вывести
    подстроку, расположенную между первым и вторым пробелом исходной
    строки. Если строка содержит только один пробел, то вывести пустую строку*/
    printf("\tEnter string S (including at least 1 space): \n");
    gets(s);
    sFin=BtwSpaceOutput(s);
    printf("\tString between first and second spaces: \n");
    puts(sFin);


    return 0;
}
