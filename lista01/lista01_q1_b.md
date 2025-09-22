|   #   |      a      |      b      |    soma     |
| :---: | :---------: | :---------: | :---------: |
|   1   |     10      |     20      |     30      |
|   2   |     -10     |     10      |      0      |
|   3   |     −2      |     -3      |     -5      |
|   4   | 1000000000  | 1000000000  | 2000000000  |
|   5   | -1000000001 | 1000000005  | -385373616  |
|   6   | 2000000000  | 1000000000  | -1294967296 |
|   7   | -1212121212 | −2987654321 | -1285051824 |

## Resposta

No programa, a representação dos números é do tipo `int`. Portanto, há 32 bits para tal representação. Por isso, a soma dos valores das linhas 5 à 7 apresentaram resultados diferentes do esperado. 

Matematicamente, a soma `−1000000001` + `1000000005` resulta em `4`. Porém, quando passa-se a representar essa operação em bits, é necessário mais de 32 bits. 

11101001000001111010101001010000