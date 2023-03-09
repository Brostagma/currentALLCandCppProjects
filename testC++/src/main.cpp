#include <iostream>
#include <array>
#include <unistd.h>
#include "./map/map.cpp"

// MACRO
#define stars printf("\n***********************************\n")
#define PI 3.14
#define Ram showRAMaddress
// ENUMERATION
enum weeks{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

using namespace std;


int changeValue(int *ptr, int input) {
    cout << "Value changed.\n"
     << "Previous value: " << *ptr << '\n'
     << "New value: " << *ptr + input << '\n';
    return *ptr += input;
}

string addWord(string *ptr, string input) {
    cout << "Word added.\n"
     << "the Previous word: " << *ptr << '\n'
     << "the New word: " << *ptr + " " + input << '\n';
    return *ptr + " " + input;
}

int arrayChangeValue(int ptr[], int addressToChange, int newValue) {
    cout << &ptr[0] << '\n';
    return ptr[addressToChange] = newValue;
}

void showRAMaddress(int *ptr) {
    cout << "RAM Address: " << ptr << '\n';
}

void showRAMaddress(string *ptr) {
    cout << "RAM Address: " << ptr << '\n';
}

void showRAMaddress(int ptr[], int input) {
    cout << input << ": Array RAM Address: " << &ptr[input - 1] << '\n';
}

void fibonacciSeries(int length) {
    int x = 1,y = 1;
    for(int i = 0; i < length; i++) {
        y = x + y;
        x = y - x;
        cout << y << "*\n";
    }
}

void doorController() {
    int door[10] = {0};

    int doorLoop, doorNumber;

    for(doorLoop = 0; doorLoop < 10; doorLoop++) {
        for(doorNumber = doorLoop; doorNumber < 10; doorNumber = doorNumber + doorLoop + 1) {
            door[doorNumber] = !door[doorNumber];
        }
    }

    cout << ("Open door numbers: ");

    for(doorNumber = 0; doorNumber < 10; doorNumber++) {
        if(door[doorNumber]) {
            cout << doorNumber + 1 << " "; 
        }
    }

}

int binarySearch(int arr[], int begin, int end, int number) {
    if(end >= begin) {
        int mid = begin + (end - begin) / 2;

        if(arr[mid] == number)
            return mid;

        if(arr[mid] > number)
            return binarySearch(arr, begin, mid - 1, number);

        return binarySearch(arr, mid + 1, end, number);
    }
    return -1;
}

int main() {

    // int a = 15;
    // changeValue(&a, 100);
    // cout << a << '\n'; 
    // showRAMaddress(&a);

    // string name = "Hello";
    // cout << addWord(&name,"World!") << '\n';
    // showRAMaddress(&name);

    // int array[5] = {1,2,3,4,5};
    // cout << arrayChangeValue(array,2,15) << '\n';
    // showRAMaddress(array,3);
    // showRAMaddress(array,5);
    // fibonacciSeries(10);
    // doorController();

    // int arr[] = {7,8,9,10,11};
    // int length = sizeof(arr) / sizeof(arr[0]) -1;
    // int result = binarySearch(arr,0,length,8);
    // (result == -1)
    //     ? cout << "Not found..."
    //     : cout << "Element index: " << result << endl;
    
//     char mapStar[8][8] = {{'*','*','*','*','*','*','*','*'}
//                         ,{'*',' ',' ',' ',' ',' ',' ','*'}
//                         ,{'*',' ',' ','|','|',' ',' ','*'}
//                         ,{'*',' ',' ','|','|',' ',' ','*'}
//                         ,{'*',' ',' ','|','|',' ',' ','*'}
//                         ,{'*',' ',' ','|','|',' ',' ','*'}
//                         ,{'*',' ',' ',' ',' ',' ',' ','*'}
//                         ,{'*','*','*','*','*','*','*','*'}};
//     for(int a = 0; a < 8; a++){
//         for(int b = 0; b < 8; b++){
//             printf("%c ", mapStar[a][b]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("\n");
//     int mapSizeY = 16;
//     int mapSizeX = 16;
//     int mapBasicWorld[mapSizeY][mapSizeX];
//     /*
//                         {{0,0,0,0,0,2,2,2,0,0,0,0,0,1,1,1}
//                         ,{0,0,0,0,2,2,2,0,0,0,0,0,1,1,1,1}
//                         ,{0,0,0,2,2,2,0,0,0,0,0,0,1,1,1,1}
//                         ,{0,0,2,2,2,0,0,0,0,0,1,1,1,1,1,1}
//                         ,{1,1,1,1,1,0,0,0,1,1,1,1,3,1,1,1}
//                         ,{1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1}
//                         ,{1,3,1,1,1,1,1,1,1,3,1,1,1,1,1,1}
//                         ,{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}      EXAMPLE!!!!
//                         ,{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
//                         ,{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
//                         ,{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
//                         ,{1,1,1,1,1,3,1,3,1,1,1,1,1,1,1,1}
//                         ,{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
//                         ,{1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1}
//                         ,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
//                         ,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
//     */
//    srand(time(0));
//     bool isBiom = false;
//     int sizeBiom = 10;
//     int possibilityBiom = 1;
//     int count = 0;
//     cout << "If you enter two maximum variables, there will be no water on the map! \n";
//     cout << "Biom Size: \n (min=0 max=16 default=10) \n (Big number = big biom, low number = small biom) \n";
//     cout << "Enter: ";
//     cin >> sizeBiom;
//     cout << "Biom Possibility: \n (min=0 max=10 default=1) \n (Big number = low water, low number = high water) \n";
//     cout << "Enter: ";
//     cin >> possibilityBiom;
//    for(int z = 0; z < mapSizeY; z++){
//         for(int e = 0; e < mapSizeX; e++){
//             int mapGenerator;
//             if(!isBiom){
//                 mapGenerator = (rand() % 10) + 1;
//                 if(mapGenerator <= possibilityBiom)
//                     isBiom = true;
//             }
//             if(isBiom){                                 //BASIC MAP GENERATOR
//                 count++;
//                 mapBasicWorld[z][e] = 1;
//                 if(count == sizeBiom){
//                     isBiom = false;
//                     count = 0;
//                 }
                    
//             }else{
//                 mapBasicWorld[z][e] = 0;
//             }
            
//         }
//    }
//     for(int i = 0; i < mapSizeY; i++){
//         for(int j = 0; j < mapSizeX; j++){
//             switch(mapBasicWorld[i][j]){
//                 case 0:
//                     cout<<"~"; //WATER
//                     break;
//                 case 1:
//                     cout<<"|"; //DIRT
//                     break;
//                     /*
//                 case 2:
//                     cout<<"/"; //HORIZONTAL ROAD
//                     break; 
//                 case 3:
//                     cout<<"v"; //VILLAGE
//                     break;ß
//                     */
//             }
//             usleep(5000); // unisted.h Library for waiting
//         }
//         cout<<'\n';
//     }
//     cout << "Map Size: " << mapSizeX << "*" << mapSizeY << " = " << (mapSizeX * mapSizeY) <<endl;

    stars;
    /*
    printf("%d\n",Thursday);
    printf("%d\n",Monday);

    Ram(&sizeBiom);
    int intArray[8] = {1,2,3,4,5,6,7,8};
    Ram(intArray,3);
    */
    //Single Line
    doMap();

    return 0;
}