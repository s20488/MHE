#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void printKnapsack(const vector<int>& knapsack) {
    cout << "[";
    for (int x : knapsack)      // range for : x will be called for each int in the knapsack vector
        cout << x <<" ";
    cout<<"]"<<endl;
}

void print_solutions(int current_item, vector<int>& knapsack, int current_sum, const vector<int>& items, int limit) {

    //if all items have been processed print the solution and return
    if (current_item == items.size() ) {
        printKnapsack(knapsack);
        return;
    };

    //don't take the current item and go check others
    vector<int> knapcopy = knapsack;
    print_solutions(current_item + 1, knapcopy, current_sum, items, limit);

    //take the current item if the value doesn't exceed the limit
    if (current_sum + items[current_item] <= limit) {
        knapsack.push_back(items[current_item]);
        current_sum += items[current_item];
        //current item taken go check others
        print_solutions(current_item + 1, knapsack, current_sum, items, limit);
    };
};

int main() {
    int current_item = 0;
    int current_sum = 0;
    int count;
    int n;
    double tmp;

    vector<int> knapsack;   //empty vector
    vector<int> items(n);   //vector with n elements

    ifstream filepath ("C:\\Users\\user\\CLionProjects\\BackPack\\dane.txt");
    //reading the first line
    string limit_string;
    if (filepath.good()) {
        getline(filepath, limit_string);
        cout << "Maksymalna waga: " << limit_string << endl;
    }
    int limit_int = stoi(limit_string);

    //reading the weight of each item
    filepath >> count;
      for(int i = 0; i < count; i++) {
        filepath >> tmp;
        items.push_back(tmp);
    }

    cout << "Weight of each item: ";
    for (int i=0; i < items.size(); i++) {
        cout << items[i] << " ";
    }
    cout << "\n" << endl;

    print_solutions(0, knapsack, 0, items, limit_int);  //n not needed

    return 0;
}