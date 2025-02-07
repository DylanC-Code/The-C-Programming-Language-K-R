#include <stdio.h>
#include <limits.h>

void compute_range_by_headers(void);

int main()
{
    compute_range_by_headers();

    return 0;
}

void compute_range_by_headers(void)
{
    printf("\n\nRange compute with headers.\n\n");
    printf("Range for a CHAR is between '%d' and '%d'. The unsigned version is '%d'.\n", CHAR_MIN, CHAR_MAX, UCHAR_MAX);
    printf("Range for a INT is between '%d' and '%d'. The unsigned version is '%ld'. \n", INT_MIN, INT_MAX, UINT_MAX);
    printf("Range for a SHORT is between '%d' and '%d'. The unsigned version is '%d'. \n", SHRT_MIN, SHRT_MIN, USHRT_MAX);
    printf("Range for a LONG is between '%ld' and '%ld'. The unsigned version is '%lu'. \n", LONG_MIN, LONG_MAX, ULONG_MAX);
}
