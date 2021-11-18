# MHE - Problem plecakowy

### Opis problemu

Zadaniem programu jest rozwiązanie tzw. problemu plecakowego, a dokładniej jednej z jego różnych wersji zwanej dyskretnym problemem plecakowym. Problem polega na wyborze takiego zestawu przedmiotów z danego zbioru przedmiotów o podanej wadze i wartości, aby suma ich wartości była możliwie jak największa i suma ich wag była nie większa od pojemności plecaka.

### Dane problemy

Danymi w dyskretnym problemie plecakowym są:

* Pojemność plecaka ***W ∈ N***.
* Kolekcję  n  przedmiotów, indeksowanych przez ***i = 0, 1, …, n − 1***.
* Ciąg liczb naturalnych ***w0, w1, …, wn − 1***, oznaczających wagi kolejnych przedmiotów.
* Ciąg liczb rzeczywistych ***v0, v1, …, vn − 1***, oznaczających wartości kolejnych przedmiotów.

Celem jest wybranie pewnej ilości przedmiotów, czyli podzbioru indeksów ***J ⊆ {0, 1, …, n − 1}*** tak, aby:

1. ***∑j ∈ Jwj ≤ W*** ,
2. ***∑j ∈ Jvj*** było możliwie największe.

Zbiór indeksów ***J*** spełniający warunek 1. będziemy nazywać **rozwiązaniem dopuszczalnym**. Każde rozwiązanie dopuszczalne spełniające warunek 2. nazwiemy **rozwiązaniem optymalnym**. Sumę ***∑j ∈ Jvj*** nazwiemy wartością rozwiązania.
