#include <bits/stdc++.h>

using namespace std;

//Struktura przedmiotu, który przechowuje wagę i odpowiednią wartość przedmiotu
struct Item {
    int value, weight;

    Item(int value, int weight)
    {
        this->value=value;
        this->weight=weight;
    }
};

vector<Item> solution = {}; //Solution vector

//Główna funkcja do rozwiązania problemu
double knapsack(int W, vector<Item> solution, int n) {
    int curWeight = 0; //Current weight in knapsack
    double finalvalue = 0.0; //Result (value in Knapsack)

    //Pętla przez wszystkie pozycje
    for (int i = 0; i < n; i++) {
        //Jeśli dodanie Item nie spowoduje przepełnienia, dodaje ją
        if (curWeight + solution[i].weight <= W) {
            curWeight += solution[i].weight;
            finalvalue += solution[i].value;
        }
    }

    //Zwracanie wartości końcowej
    return finalvalue;
}

//Pobieranie danych z pliku
void load_file(string filename) {
    ifstream filepath(filename);
    int v, w;

    while(filepath >> v >> w) {
        solution.push_back({v, w});
    }
}

//Drukowanie danych z pliku
void print_data(int w) {
    //Nowa kolejność pozycji wraz z ich proporcjami
    cout << "Maximum backpack weight = " << w << endl;
    cout << "Value and weight of each item: " << endl;
    for (int i = 0; i < solution.size(); i++) {
        cout << i + 1 << ". " << solution[i].value << "  " << solution[i].weight << endl;
    }
}

int main() {
    int W = 5; //Waga plecaka

    int n = sizeof(solution) / sizeof(solution[0]); //Rozmiar wektora

    load_file("C:\\Users\\user\\CLionProjects\\BackPack\\dane.txt");

    print_data(W);

    //Wywołanie funkcji
    cout << "Maximum value we can obtain = " << knapsack(W, solution, n);
    return 0;
}
