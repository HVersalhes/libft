#include "libft.h"
/*
 * ft_atoi - Converte uma string para inteiro (int).
 * @nptr: ponteiro para a string a ser convertida.
 *
 * Ignora espaços em branco iniciais (ASCII 9-13 e 32), aceita sinal '+' ou '-'.
 * Converte dígitos até encontrar um caractere não numérico.
 * Protege contra ponteiro nulo.
 * Retorna o valor convertido como int. 
 * Em caso de overflow, retorna INT_MAX ou INT_MIN.
 */
int	ft_atoi(const char *nptr)
{
	int	sign;
	long	result;
	long	limit;

	if (nptr == NULL)
		return (0);
	result = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	limit = (sign == 1) ? INT_MAX : -(long)INT_MIN;
	while (ft_isdigit(*nptr))
	{
		result = result * 10 + (*nptr - '0');
		if (result > limit)
			return (sign == 1) ? INT_MAX : INT_MIN;
		nptr++;
	}
	return ((int)(sign * result));
}
