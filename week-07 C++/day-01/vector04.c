//create a vector of integers with the size of 20
//fill this vector with random numbers from 0 to 10
//print the items of the vector
//remove the even numbers, then print the items again

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int size = 20;
    vector <int> my_vector(size);

    cout << "Original vector: " << endl;
    for (int i = 0; i < size; ++i){
        my_vector.at(i) = rand() % 10;
        cout << my_vector[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < size; ++i){
        if (my_vector.at(i) % 2 == 0){
            my_vector.erase(my_vector.begin() + i);
            size--;
            i--;
        }
    }

    cout << "Modified vector: " << endl;
    for (int i = 0; i < my_vector.size(); i++){
        cout << my_vector[i] << " ";
    }

    cout << endl;

    return 0;
}
