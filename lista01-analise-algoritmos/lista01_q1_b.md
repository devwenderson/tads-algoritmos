|   #   |      a      |      b      |    soma     |
| :---: | :---------: | :---------: | :---------: |
|   1   |     10      |     20      |     30      |
|   2   |     -10     |     10      |      0      |
|   3   |     −2      |     -3      |     -5      |
|   4   | 1000000000  | 1000000000  | 2000000000  |
|   5   | -1000000001 | 1000000005  |      4      |
|   6   | 2000000000  | 1000000000  | -1294967296 |
|   7   | -1212121212 | -2987654321 |  935362436  |

## Resposta

No programa, a representação dos números é do tipo `int`. Portanto, há 32 bits para tal representação. Por isso, a soma dos valores das linhas 5 à 7 apresentaram resultados diferentes do esperado. 

**Linha 7:** Matematicamente, a soma `2000000000` + `1000000000` resulta em `3000000000`. Porém, quando passa-se a representar essa operação com `int`, 32 bits serão reservados, sendo utilizados totalemente pelo resultado da operação. Por isso, o bit mais significativo é interpretado com um sinal negativo. Portanto, o número computado pela representação é `-1294967296`.



11111111111111111111111111111111 00000101101011001000001011010011 = -4.199.775.533

1111111111111111111111111111111101001101111011000000001101001111 = -2987654321
10110111110000000111111110000100 = -1212121212
110111110000000111111110000100 = 935362436