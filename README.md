# MP
Programming Methodology Exercises

There is a compilation of exercises with respectives answers, of programming methodology from the Ingenieering School of the University of Cadiz (UCA).
All rights reserved.

RECURSIVE FUNCTIONS EXERCISES

QUESTIONS:

1.Escribe un procedimiento recursivo cuenta_atras que reciba como argumento un número n y como resultado escriba por pantalla la cuenta atrás como en un lanzamiento.
Ejemplo: 5 4 3 2 1 CERO

2.La función f está definida como:
      |   0     SI N=0
F(N)=<|
      |N+F(N-1) SI N>0
a) Escribe f como una función recursiva.
b) ¿Qué hace f?
c) ¿Qué tipo de recursividad has empleado en la implementación que has hecho de f?
d) Si has implementado f como una función recursiva no final, entonces realiza una implementación que sea recursiva final. Si la implementaste de manera recursiva final, entonces realiza una implementación que no sea recursiva final.
e) ¿Existe alguna manera de calcular f de forma no recursiva? En caso afirmativo escríbela así.

3.Escribe una función recursiva que calcule el Máximo Común Divisor de dos números a y b utilizando el algoritmo de Euclides.

4.Escribe una función recursiva elevar que reciba un argumento real a y otro entero b, con b > 0, y calcule a^b.

5.Escribe una función recursiva que reciba un argumento entero n y calcule 1+1/2+1/3+1/4+...+1/n.

6.Escribe una función recursiva media que vaya leyendo números hasta encontrar un 0, y que devuelva la media de esos números.

7.Escribe una función recursiva cifras que reciba un número en base 10 y devuelva cuántas cifras tiene ese número.

8.Si conj(n,k) representa la cantidad de diferentes conjuntos de k personas que pueden formarse, dadas n personas entre las cuales elegir. Por ejemplo, conj(4,3) = 4, porque dadas cuatro personas A, B, C y D hay cuatro conjuntos posibles de tres personas: ABC, ABD, ACD y BCD. En general se cumple la siguiente relación: conj(n,k) = conj(n-1,k) + conj(n-1,k-1).
Escribe una función recursiva para calcular conj(n,k) para n,k ≥ 1.

9.Diseña un algoritmo que determine de forma recursiva si un vector de n enteros está ordenado ascendentemente.

10.Diseña un algoritmo que localice de forma recursiva en la misma pasada el máximo y el mínimo de un vector dado no vacío.

11.Diseña un algoritmo que calcule de forma recursiva el producto escalar de dos vectores de n elementos enteros, n≥0. El producto escalar es la suma de los productos de pares de componentes que se corresponden (que tienen la misma posición).

12.Dado un vector ordenado crecientemente A[1..n], n ≥ 1, diseña un algoritmo que calcule de forma recursiva la longitud de la escalera más larga, es decir, la longitud de la secuencia más larga de valores consecutivos que se encuentre en A.

13.Dado un vector n de enteros, se dice que un elemento del vector es elemento mayoritario si este entero aparece estrictamente más de n/2 veces en dicho vector. Diseña un algoritmo que determine de forma recursiva si el vector A[1..n] contiene un elemento mayoritario y la primera posición que ocupa.

14.Diseña un algoritmo que calcule de forma recursiva la suma de todos los elementos i de un vector a de n enteros que cumplen la siguiente propiedad: 1≤i≤[n/2]-1: a[i]>a[2*i] ^ a[i]>a[2*i+1].

15.Diseña un algoritmo que determine de forma recursiva si en un vector A de n enteros se cumple: ∀α: 1≤α≤[n/2]:A[α]=A[n-α+1]

16.Dado un vector A de n enteros, diseña una función recursiva que calcule la suma de todos los elementos A[k] con 1≤k≤n, que cumplan: ∃i,j 1≤i,j≤n: A[i]*A[j]=A[k]

17.Diseña un algoritmo que determine de forma recursiva el cuadrado de un número n de acuerdo a la siguiente expresión:
n^2=((n-1)^2)+2*(n-1)+1

18.Dado un vector A de n enteros, diseña una función recursiva que devuelva la suma de elementos A[i] con 1≤i≤n-3, que cumplan: ∀i 1≤i≤n-3: A[i]+A[i+1]=A[i+2]+A[i+3].

19.Diseña un algoritmo que, mediante una función recursiva, convierta un número entero en decimal a una cadena con su representación en binario.

20.Dado un vector de enteros estrictamente positivos A[1..n], n≥1, diseña un algoritmo que obtenga recursivamente el número de parejas (j,k), 1≤j≤n, 1≤k≤n tales que ∑(de i=1 a j)A[i]=∑(de i=k a n)A[i].
