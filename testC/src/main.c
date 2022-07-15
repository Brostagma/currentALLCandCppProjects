#include <stdio.h>
#include <stdbool.h>

int max_number(int array[], int size){
    int max_number;
    max_number = array[0];
    for(int i = 0; i < size; i++) {
        if(max_number < array[i])
            max_number = array[i];
    }
    return max_number;
}

int min_number(int array[], int size) {
    int min_number;
    min_number = array[0];
    for(int i = 0; i < size; i++) {
        if(min_number > array[i])
            min_number = array[i];
    }
    return min_number;
}

void multiplicationTable() {
    int number = 1, multi = 1;
    bool check = true;
    while(check) {
        printf("%d x %d = %d \n", multi, number, (multi*number));
        number++;
        if(number == 11) {
            number = 1;
            multi++;
            printf("**********************************\n");
            if(multi == 11) {
                check = false;
            }
        }
        
    }
}

int main(){
    
    int numbers[5] = {234,233,100,4,80};
    printf("%d \n", max_number(numbers,5));
    int numbers2[4] = {13,29,49,3};
    printf("%d \n", min_number(numbers2, 4));
    
    multiplicationTable();

    return 0;
}