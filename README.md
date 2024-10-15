# Introduccion
Para cada ejercicio debe realizar el analisis correspondiente. Esta primera parte es mas para una ayuda personal que entrega. Por ahora, solo debe demostrar que todas las pruebas han sido pasadas correctamente. 
Recuerde los pasos:

1. Encontrar las entradas y salidas
2. Entender su relacion
3. Pseudocodigo / diagrama de flujo
4. Implementacion
5. Pruebas

En esta etapa se recomienda analizar la realacion de las entradas y salidas, para luego realizar el pseudocodigo y finalemnte su implementacion

## Entregables
En el NEO debe compartir el link de su repositorio publico a los ejercicios. Luego, una vez haya finalizado todos los ejercicios debera publicar un screenshot de los tests aprobados. 

Importante: El repositorio de ejercicio debe de ser publico y compartido con el docente.

Se valorara tambien la cantidad de commits que haya realizado durante la resolucion de los ejercicios. Esto es importante, porque hacerlo en un solo commit es irrealista. Trate de que para cada ejercicio realizar el commit correspondiente. O cada dos ejercicios.

Debe asegurarse que los mensajes de consola sean __estrictamente__ identicos a los que se muestran en este documento. Caso contrario, no pasaran las pruebas.

Puede realizar sus pruebas locales en el archivo `main.cpp` utilizando el compilador `g++` el cual generara el ejecutable correspondiente.

---
### Ejercicio 1
En el flujo estándar se dan tres strings separadas por espacios. Cada string consta de letras minúsculas del alfabeto latino y tiene una longitud de no más de 30 caracteres. Imprime en la salida estándar la línea que sea mínima en orden lexicográfico.

__Ejemplo__

| stdin                 | stdout |
|-----------------------|--------|
| milk milkshake month | milk   |
| c a b                 | a      |
| fire fog wood         | fire   |

### Ejercicio 2
En la entrada estándar de tu programa se proporcionan los coeficientes reales A, B y C de la ecuación cuadrática $Ax² + Bx + C = 0$. Imprime todas sus raíces reales distintas en la salida estándar en cualquier orden, separadas por espacios. Se garantiza que al menos uno de los coeficientes de la ecuación no es cero.

__Ejemplo__

| stdin  | stdout    |
|--------|-----------|
| 2 5 2  | -0.5 -2   |
| 2 4 2  | -1        |
| 2 1 2  |           |
| 0 4 10 | -2.5      |

### Ejercicio 3
Dados dos números enteros A y B en el rango de 0 a 1,000,000 inclusive. Escriba un programa que calcule la parte entera del cociente de la división de A por B.

Si B = 0, imprima "Imposible"

__Ejemplo__

| stdin | stdout     |
|-------|------------|
| 10 2  | 5          |
| 3 5   | 0          |
| 11 0  | Impossible |

### Ejercicio 4
Escribir un programa para calcular el costo de compra de un producto con descuento. Si el costo original del producto es mayor que A rublos, se aplica un descuento del X por ciento. Si el costo original del producto es mayor que B rublos, se aplica un descuento del Y por ciento.

El programa recibe cinco números reales como entrada: N, A, B, X, Y (A < B) - donde N es el costo original del producto. Imprime el costo de compra del producto con descuento.

__Ejemplo__

| stdin                      | stdout  |
|----------------------------|---------|
| 100 110 120 5 10           | 100     |
| 115 110 120 5 10           | 109.25  |
| 150 110 120 5 12.5         | 131.25  |


### Ejercicio 5
Se te da un carácter. Tu tarea es determinar si el carácter dado es una letra mayúscula, una letra minúscula o un carácter no alfabético (En el ASCII).

__Ejemplo__

| stdin                      | stdout  |
|----------------------------|---------|
| c           | upper-case alphabet     |
| A           | lower-case alphabet  |
| space         | not an alphabet  |
### Ejercicio 6
Se te proporciona un número de día de la semana. Tu tarea es mostrar el nombre correspondiente del día en la consola utilizando la declaración switch.

__Ejemplo__

| stdin                      | stdout  |
|----------------------------|---------|
| 2           | Martes     |
| 4           | Jueves  |
| 0         | Invalid input  |
### Ejercicio 7
Calcule el area de una esfera, dado su radio. Si el radio es negativo se debe levantar un mensaje de error: `Error: Radius cannot be negative.`

__Ejemplo__

| stdin                      | stdout  |
|----------------------------|---------|
| 10.9           | 1492.253650     |
### Ejercicio 8
Se te da el número total de segundos, y tu tarea es mostrar el número de horas, minutos y segundos correspondientes. Si la cantidad de segundos es negativo se debe levantar el error `Error: Input seconds cannot be negative.`

__Ejemplo__

| stdin | stdout |
| ---- | ---- |
| 3870 | 01:04:30 |

### Ejercicio 9
Tiene de entrada cinco palabras que provienen de la entrada estándar y debe de imprimir el primer caracter de cada palabra de entrada. Una palabra es una secuencia de caracteres como letras, números, signos de puntuación. Las palabras están separadas por un solo espacio. Ademas, verifique si el primer caracter de la primera palabra y el primer caracter de la ultima palabra son iguales. En caso de serlo devuelva la string `Hemos encontrado algo!`, caso contrario devuelva `Aun sin suerte`

__Ejemplo__
- __Entrada:__ apple banana cat dog eleven
- __Salida__: abcde
-              Aun sin suerte

- __Entrada:__ a s d f g
- __Salida__: asdfg
-              Aun sin suerte

- __Entrada:__ 1 two 3 four 1
- __Salida__: 1t3f1
-               Hemos encontrado algo!

### Ejercicio 10
Escriba un programa que lea dos enteros no negativos separados por un espacio. El programa debe calcular su suma S y generar el producto de S por el número de dígitos en la notación decimal S. Si uno de los numeros o ambos son negativos se debe devolver el 0.

__Ejemplos__
- __Entrada__: 3 8
- __Salida__: 22
- __Explicacion:__ La suma de los dos enteros es `3 + 8 = 11`. Los numeros de digitos de la suma `11` es igual a `2` digitos. Entonces, la multiplicacion `2 * 11 = 22`.

- __Entrada__: 8 17
- __Salida__: 50
- __Explicacion:__ La suma de los dos enteros es `8 + 17 = 25`. Los numeros de digitos de la suma `25` es igual a `2` digitos. Entonces, la multiplicacion `2 * 25 = 50`.

### Ejercicio 11
Julia perdió a su cachorro Fibo, que recibió su nombre en honor al matemático Fibonacci. El signo especial de Fibo es que tiene grabado en su collar el código `11235813`. Escriba un programa que use el código del collar para determinar si pertenece a Fibo.

__Formato de entrada y salida__
El flujo de entrada estándar, `cin` , recibe un numero entero, el código del collar del perro. Si se trata de un collar de Fibonacci, el programa debe mostrar la línea: `"Se encontro Fibonacci".` Si este no es un collar de Fibonacci, el programa debe mostrar - `"Esto no es de Fibonacci"`. 

__Ejemplos__
- __Entrada__: 3
- __Salida__: Esto no es de Fibonacci

- __Entrada__: 1123
- __Salida__: Esto no es de Fibonacci

- __Entrada__: 11235813
- __Salida__: Se encontro Fibonacci

- __Entrada__: 11235814
- __Salida__: Esto no es de Fibonacci

### Ejercicio 12
Martha perdió a su gato Marqués. Un transeúnte le dijo que vio un gato similar afuera de una de las tres casas cerca de la oficina de correos. Cuando se le pregunta en cuál de las casas vio al Marqués, un transeúnte puede recordar el color de la casa, así como el número de pisos en la casa. Una situación posible es cuando un transeúnte ha olvidado parte de la información o toda ella.
Escribe un programa que, basado en el testimonio de un transeúnte, ayude a Martha a decidir a cuál de las tres casas entrar.

__Formato de datos de entrada y salida__
La entrada al programa son los siguientes datos, separados por un espacio:
- el color de la primera casa y el número de pisos en ella,
- el color de la segunda casa y el número de pisos en ella,
- el color de la tercera casa y el número de pisos en ella,
- el color de la casa y el número de pisos informado por un transeúnte. Si un transeúnte no recuerda el color de la casa o el número de pisos, la string sera `?` (signo de interrogación), y en lugar del número de pisos - el número `-1`.
El programa debe mostrar, en orden ascendente, los números de las casas que Martha necesita visitar, una en cada línea. Los números de casa se muestran como los números `1,` `2` o `3`. Los números de casa que no necesita visitar no deben mostrarse.

__Ejemplo__
__Entrada__
```
red 3 green 3 green 2 green -1
```

__Salida__
```
2
3
```
En este ejemplo, el transeúnte solo recuerda el color de la casa, `verde`, pero no el número de pisos. Por lo tanto, Marta necesita ir a las casas número `2` y `3`.

__Entrada__
```
red 2 green 1 red 3 red 3
```

__Salida__
```
3
```
Aquí, un transeúnte informó tanto el color de la casa como su número de pisos: `red 3`. Por lo tanto, Marta solo necesita visitar la casa número 3.

__Entrada__
```
red 1 green 2 blue 3 yellow 3
```

__Salida__
```

```
El testigo dijo que vio un gato en una casa amarilla de tres pisos, pero no hay tal casa cerca de la oficina de correos: la única casa de tres pisos es azul. Probablemente, el transeúnte mezcló todo, esto también sucede.

__Entrada__
```
grey 5 grey 5 grey 5 grey 5
```

__Salida__
```
1
2
3
```
El gato está en uno de estos edificios grises de cinco pisos. Tiene que ir a las tres casas.

### Ejercicio 13
Suponga que conoce la `edad` y `los años de experiencia` de un candidato y desea encontrar el puesto de mayor jerarquía al que puede postularse. Tienes la siguiente información:
- Los puestos disponibles son los de `coordinador de proyecto`, `director de proyecto` y `director de proyecto senior`. 
- Un candidato no puede tener menos de dieciocho años.
- No se requiere experiencia previa para un `coordinador de proyecto`. Sin embargo, un `director de proyecto` debe tener al menos tres años de experiencia y un `director senior` debe tener al menos cinco años de experiencia.

__Entrada__
- La entrada es edad, age, y años de experiencia, years of experience.
__Salida__
- El resultado es el título del puesto senior para el que es elegible el candidato.

### Ejercicio 14
En anteriores ejercicios, se escribió un código de programa que: lee un número — el número de documentos; muestra cuántos documentos encontrados: `<número de documentos> documentos encontrados.`
El programa funciona, pero la palabra "documento" siempre está en plural, por ejemplo, se encontraron `1 documentos`. Edite el código. Si la entrada es 0, deje que el programa genere `No se encontraron documentos`, si es 1: `Se encontro un documento`. En todos los demás casos, el programa debe generar `<número de documentos> documentos encontrados.`

__Ejemplos__
- __Entrada__: 0
- __Salida__ No se encontraron documentos

- __Entrada__: 1
- __Salida__ Se encontro un documento

- __Entrada__: 2
- __Salida__ 2 documentos encontrados.

### Ejercicio 15
Se quiere intercambiar los valores de tres variables. Su mensaje debe ser **Estrictamente** Identico al siguiente:

```
Los valores son: a = 51 b = 876 y c = 235
Permutamos: a => b, b => c, c => a
Los valores despues de la permutacion son: a = 235 b = 51 c = 876"
```

### Ejercicio 16
El objetivo de este ejercicio es escribir un programa que calcule los montos de alquiler de bicicletas (para un servicio en línea 24/24).

Las tarifas de alquiler son las siguientes:
- De 00:00 a 07:00 y de 17:00 a 24:00: 1 bs/hora;
- De 07:00 a 17:00: 2 bs/hora.

El programa solicitará al usuario que ingrese las horas de inicio y fin del alquiler como enteros (parte esta fuera de la funcion) y calculará y mostrará el costo del alquiler. Se adoptarán las siguientes simplificaciones:
- Las horas son enteras (no importan los minutos; cada hora comenzada se pagará completa);
- La hora de inicio (es decir, hour) del período de alquiler siempre debe ser menor que la hora de finalización (es decir, hour) del alquiler. Esto significa que no se puede alquilar una bicicleta por más de 24 horas y que cada período de alquiler debe estar dentro del mismo día.

Si las entradas son correctas, entonces el programa calculará y mostrará el monto del alquiler en la pantalla siguiendo estrictamente el formato presentado en los ejemplos a continuación. 

Si los tiempos ingresados por el usuario no están entre 0 y 24 (inclusive), se mostrará un mensaje de error que respete estrictamente el siguiente formato y el programa se terminará:
`Las horas deben estar entre 0 y 24!`

Si la hora de inicio del alquiler es igual a la hora de finalización, entonces se mostrará un mensaje de error que respete estrictamente el siguiente formato y el programa se terminará: `Que extraño, no has alquilado tu bicicleta por mucho tiempo!`

Si la hora de finalización del alquiler es menor que la hora de inicio, entonces se mostrará un mensaje de error que respete estrictamente el siguiente formato y el programa se terminará: `Que extraño, el inicio del alquiler es después del final...`

__Ejemplos de ejecución__

Es obligatorio que su código respete el siguiente formato
1) Ejemplo donde el cálculo del costo del alquiler se realiza utilizando ambas tarifas Inputs -(10, 19):
```
Has alquilado una bicicleta por
2 hora(s) con el tarifario de 1 boliviano(s)
7 hora(s) con el tarifario de 2 boliviano(s)
El monto total a pagar es de 16 boliviano(s).
```

2) Ejemplo donde el cálculo del costo del alquiler se realiza utilizando una única tarifa Inputs - (18, 20):
```
Has alquilado una bicicleta por
2 hora(s) con el tarifario de 1 boliviano(s)
El monto total a pagar es de 2 boliviano(s).
```



