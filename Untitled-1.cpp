#include <iostream>
#include <vector>
#include <cassert>

//two-dim array
/*
    0row    1row

    0vip    0vip
    1       1
    2       2
    3       3
    4       4
    5       5
    */

std::vector<std::vector<bool>> spoon {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}};
std::vector<std::vector<bool>> dessertSpoon {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}};
std::vector<std::vector<bool>> forc {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}};
std::vector<std::vector<bool>> knife {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}};

std::vector<std::vector<bool>> firstPlate {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}};
std::vector<std::vector<bool>> secondPlate {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}};
std::vector<std::vector<bool>> dessertPlate {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}};

int main() {
    for (int i=0 ; i<2 ; i++) {
        for (int j=0 ; j<6 ; j++) {
            spoon[i][j]=true;
            if (j==0) {
                dessertSpoon[i][j]=true;
            } else {
                dessertSpoon[i][j]=false;
            }
            
            forc[i][j]=true;
            knife[i][j]=true;

            firstPlate[i][j]=true;
            secondPlate[i][j]=true;

            if (j==0) {
                dessertPlate[i][j]=true;
            } else {
                dessertPlate[i][j]=false;
            }
        }

    }

    for (int i=0 ; i<2 ; i++) {
        for (int j=0 ; j<6 ; j++) {
            std::cout<<"Row "<<i<<" seat "<<j<<std::endl;

            std::cout<<"    Spoon "<<spoon[i][j]<<std::endl;
            std::cout<<"    Dessert spoon "<<dessertSpoon[i][j]<<std::endl;
            std::cout<<"    Fork "<<forc[i][j]<<std::endl;
            std::cout<<"    Knife "<<knife[i][j]<<std::endl;

            std::cout<<"    First plate "<<firstPlate[i][j]<<std::endl;
            std::cout<<"    Second plate "<<secondPlate[i][j]<<std::endl;

            std::cout<<"    Dessert plate "<<dessertPlate[i][j]<<std::endl;
        }
        std::cout<<std::endl;
    }

// Woman with child
    spoon[0].push_back(true);
    dessertSpoon[0].push_back(false);
    forc[0].push_back(true);
    knife[0].push_back(true);

    firstPlate[0].push_back(true);
    secondPlate[0].push_back(true);
    dessertPlate[0].push_back(false);

    spoon[0][6]=(true);
    dessertSpoon[0][6]=(true);
    forc[0][6]=(true);
    knife[0][6]=(true);

    firstPlate[0][6]=(true);
    secondPlate[0][6]=(true);
    dessertPlate[0][6]=(true);

//Stolen spoon
    spoon[1][2]=false;

//share a dessert spoon
    swap(dessertSpoon[0][0],dessertSpoon[1][2]);

//dessert plate deleted
    dessertPlate[0][0]=false;

    std::cout<<"After accidents: "<<std::endl<<"============"<<std::endl;

        for (int i=0 ; i<2 ; i++) {
        for (int j=0 ; j<7-i ; j++) {
            std::cout<<"Row "<<i<<" seat "<<j<<std::endl;

            std::cout<<"    Spoon "<<spoon[i][j]<<std::endl;
            std::cout<<"    Dessert spoon "<<dessertSpoon[i][j]<<std::endl;
            std::cout<<"    Fork "<<forc[i][j]<<std::endl;
            std::cout<<"    Knife "<<knife[i][j]<<std::endl;

            std::cout<<"    First plate "<<firstPlate[i][j]<<std::endl;
            std::cout<<"    Second plate "<<secondPlate[i][j]<<std::endl;

            std::cout<<"    Dessert plate "<<dessertPlate[i][j]<<std::endl;
        }
        std::cout<<std::endl;
    }




}