Pewien poszukiwacz przygód znalazł mapę jaskini ze znajdującymi się w niej skarbami. Pomóż poszukiwaczowi znaleźć skarb zlokalizowany najbliżej wejścia do jaskini, a zarazem znajdujący się na poziomie z ich największą ilością.

Zadanie

Zaimplementuj funkcję, która na wejściu przyjmuje ciąg znaków długości N, przedstawiający 1-wymiarową mapę jaskini ze skarbami. Po mapie można poruszać się w prawo i lewo. Ciąg składa się wyłącznie ze znaków: '(', ')', '*'.

Początkowy poziom wynosi 0, a indeks -1 lub N (wedle uznania rozwiązującego).

Funkcja ma zwrócić poszukiwany indeks z zakresu [0, N)

 

We:

Ciąg znaków długości N.
( - oznacza wejście na wyższym poziom jaskini
) – oznacza zejście na niższy poziom
* - oznacza skarb

Wy:

Najniższy indeks, pod którym znajduje się skarb, który leży na poziomie z największą ilością skarbów.


Przykład:
We: "(((*))(((((*)))(*))))" Wy: 3
