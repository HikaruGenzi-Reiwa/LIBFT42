#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size && count > SIZE_MAX / size)
		return (0);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
//     // Let's allocate memory for an array of 5 integers
//     int *arr = (int*)ft_calloc(5, sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed.\n");
//         return (1); // Exiting with error code
//     }

//     // Print the allocated array
//     printf("Allocated array:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]); // Assuming calloc initializes memory to zero
//     }
//     printf("\n");

//     // Free the allocated memory
//     free(arr);

//     return (0); // Exiting successfully
// }

// int main(void)
// {
//     int *arr = (int*)ft_calloc(5, sizeof(int));
//     if(arr == NULL)
//     {
//         printf("Memory allocation failed.n");
//         return(1);
//     }
//     printf("Allocated array:\n");
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     printf("\n");
//     free(arr);
// }
//メモリの割り当てに成功した場合→確保されたブロックを0クリアしたメモリブロックを指すポインタ。
// countまたはsizeが0の場合、collocはNULL,または後でfreeに正常に渡すことができる一意のポインター値を返します。
//メモリの割り当てに失敗した場合→NULL

//ピープメモリからsizeバイトのブロックをcount個割り当てます。確保されたブロックは0埋めされます。
// countまたはsizeが0の場合、callocはNULL、または後でfreeに正常に渡すことができる一意のポインター値を返す。