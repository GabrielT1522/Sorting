//
// Created by Gabriel Torres on 11/1/22.
//

#ifndef SORTING_SORTING_H
#define SORTING_SORTING_H


class Sorting {
private:
    // Initialize max size of sortingArray
    const static int MAX = 22;
    int sortingArray[MAX];
    int size;

public:
    Sorting(int *dataArray, int n) {
        size = n;
        for (int i = 0; i < n; i++) {
            sortingArray[i] = dataArray[i];
        }
    };
    ~Sorting(void) { std::cout << "\nSorting class has been deconstructed.\n"; };

    void bubbleSort(int size) {
        int count = 0;

        for (int i=0;i<size-1;i++){
            if (sortingArray[i]>sortingArray[i+1]) {
                int tmp = sortingArray[i];
                sortingArray[i] = sortingArray[i+1];
                sortingArray[i+1] = tmp;
                count++;
            }
        }
        if (count == 1)
            return;

        bubbleSort(size-1);
    };

    void printSortedArray() {
        for (int i = 0; i < size; i++) {
            std::cout << sortingArray[i] << " ";
        }
        std::cout << std::endl;
    }

};


#endif //SORTING_SORTING_H
