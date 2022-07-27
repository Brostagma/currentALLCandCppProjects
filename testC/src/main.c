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

void fibonacciSeries() {
    //***Better my version (2 variables - 3 line)

    int x=1,y=1;
    for(int i = 0; i < 10; i++) {
        y = x + y;
        x = y - x;
        printf("%d*\n",y);
    }
    //***Normal version (3 variables - 4 line)

    /*int a=1,b=1,z;
    for(int i = 0; i < 10; i++) {
        z = a + b;
        a = b;
        b = z;
        printf("%d \n",z);
    }
    */

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

void doorController() {
    int door[10] = {0};

    int loopDoor,doorNumber;

    for(loopDoor = 0; loopDoor < 10; loopDoor++) {
        for(doorNumber = loopDoor; doorNumber < 10; doorNumber = doorNumber + loopDoor + 1) {
            door[doorNumber] = !door[doorNumber];
        }
    }

    printf("Open door numbers: ");

    for(doorNumber = 0; doorNumber < 10; doorNumber++) {
        if(door[doorNumber]) {
            printf("%d ", doorNumber + 1);
        }
    }
}



int main(){
    
    int numbers[5] = {234,233,100,4,80};
    printf("%d \n", max_number(numbers,5));
    int numbers2[4] = {13,29,49,3};
    printf("%d \n", min_number(numbers2, 4));
    
    multiplicationTable();

    printf("Fibonacci \n ****************************\n");
    fibonacciSeries();
    printf("\n****************************\n");

    doorController();
    return 0;
}