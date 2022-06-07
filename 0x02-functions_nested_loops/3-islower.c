#include <stdio.h>                                                                                                               
                                                                                                                                 
/**                                                                                                                              
 * _islower - a function that checks for lowercase character                                                                     
 *                                                                                                                               
 * Returns 0 otherwise                                                                                                           
 */

void test_islower(int n)
{
	int r;

	r = _islower(n);
	_putchar(r + '0');
	_putchar('\n');
}
