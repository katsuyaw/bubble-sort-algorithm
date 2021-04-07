#include <iostream>


template<class T>
void swap(T& a, T& b){  
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void bubbleSort(T* array, int size){
    int i, j;
    bool swapped;

    for (i = 0; i < size-1; i++){
        swapped = false;

        for (j = 0; j < size-i-1; j++){
        
            if (array[j] > array[j+1]){
                swap(array[j], array[j+1]);
                swapped = true;
            }
     }
  
     // condition: No swap then done
    if (swapped == false)
        break;
   }
}


int main() {
    int size = 100;
    int array[size];
    int randomVal;
    srand(time(0));

    std::cout << "|Before Sort|" << std::endl;

    // generate randomized array and print
    for(int i; i<size; i++){
        randomVal = rand() % 100;
        array[i] = randomVal;
        std:: cout << array[i] << " ";
    }

    std::cout << "\n|After Sort|" << std::endl;

    // bubble sort
    bubbleSort(array, size);

    // print array
    for(int i: array){
        std::cout << i << " "; 
    }

    std::cout << "\nCompelete" << std::endl;
}