#include <iostream>
#include <unistd.h>
#include "map.h"

using namespace std;

void doMap() {
    char mapStar[8][8] = {{'*','*','*','*','*','*','*','*'}
                        ,{'*',' ',' ',' ',' ',' ',' ','*'}
                        ,{'*',' ',' ','|','|',' ',' ','*'}
                        ,{'*',' ',' ','|','|',' ',' ','*'}
                        ,{'*',' ',' ','|','|',' ',' ','*'}
                        ,{'*',' ',' ','|','|',' ',' ','*'}
                        ,{'*',' ',' ',' ',' ',' ',' ','*'}
                        ,{'*','*','*','*','*','*','*','*'}};
    for(int a = 0; a < 8; a++){
        for(int b = 0; b < 8; b++){
            printf("%c ", mapStar[a][b]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    int mapSizeY = 16;
    int mapSizeX = 16;
    int mapBasicWorld[mapSizeY][mapSizeX];
    /*
                        {{0,0,0,0,0,2,2,2,0,0,0,0,0,1,1,1}
                        ,{0,0,0,0,2,2,2,0,0,0,0,0,1,1,1,1}
                        ,{0,0,0,2,2,2,0,0,0,0,0,0,1,1,1,1}
                        ,{0,0,2,2,2,0,0,0,0,0,1,1,1,1,1,1}
                        ,{1,1,1,1,1,0,0,0,1,1,1,1,3,1,1,1}
                        ,{1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1}
                        ,{1,3,1,1,1,1,1,1,1,3,1,1,1,1,1,1}
                        ,{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}      EXAMPLE!!!!
                        ,{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
                        ,{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
                        ,{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
                        ,{1,1,1,1,1,3,1,3,1,1,1,1,1,1,1,1}
                        ,{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
                        ,{1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1}
                        ,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
                        ,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
    */
   srand(time(0));
    bool isBiom = false;
    int sizeBiom = 10;
    int possibilityBiom = 1;
    int count = 0;
    cout << "If you enter two maximum variables, there will be no water on the map! \n";
    cout << "Biom Size: \n (min=0 max=16 default=10) \n (Big number = big biom, low number = small biom) \n";
    cout << "Enter: ";
    cin >> sizeBiom;
    cout << "Biom Possibility: \n (min=0 max=10 default=1) \n (Big number = low water, low number = high water) \n";
    cout << "Enter: ";
    cin >> possibilityBiom;
   for(int z = 0; z < mapSizeY; z++){
        for(int e = 0; e < mapSizeX; e++){
            int mapGenerator;
            if(!isBiom){
                mapGenerator = (rand() % 10) + 1;
                if(mapGenerator <= possibilityBiom)
                    isBiom = true;
            }
            if(isBiom){                                 //BASIC MAP GENERATOR
                count++;
                mapBasicWorld[z][e] = 1;
                if(count == sizeBiom){
                    isBiom = false;
                    count = 0;
                }
                    
            }else{
                mapBasicWorld[z][e] = 0;
            }
            
        }
   }
    for(int i = 0; i < mapSizeY; i++){
        for(int j = 0; j < mapSizeX; j++){
            switch(mapBasicWorld[i][j]){
                case 0:
                    cout<<"~"; //WATER
                    break;
                case 1:
                    cout<<"|"; //DIRT
                    break;
                    /*
                case 2:
                    cout<<"/"; //HORIZONTAL ROAD
                    break; 
                case 3:
                    cout<<"v"; //VILLAGE
                    break;ß
                    */
            }
            usleep(5000); // unisted.h Library for waiting
        }
        cout<<'\n';
    }
    cout << "Map Size: " << mapSizeX << "*" << mapSizeY << " = " << (mapSizeX * mapSizeY) <<endl;
}