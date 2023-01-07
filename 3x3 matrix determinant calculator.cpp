#include <iostream>
using namespace std;

const int column = 3;
const int row = 3;

void printArray1(int *Array, int row, int column){
    int index = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout << *(Array + index) << " ";
            index++;
        }
        cout << endl;
    }
}

int M11(int *Array){
    int e = *(Array + 4);
    int f = *(Array + 5);
    int h = *(Array + 7);
    int i = *(Array + 8);
    return (e*i - f*h);
}

int det(int *Array){
    int a = *(Array + 0);
    int b = *(Array + 1);
    int c = *(Array + 2);
    int d = *(Array + 3);
    int e = *(Array + 4);
    int f = *(Array + 5);
    int g = *(Array + 6);
    int h = *(Array + 7);
    int i = *(Array + 8);
    return (a*e*i)+(b*f*g)+(c*d*h)-(c*e*g)-(a*f*h)-(b*d*i);
}

int main(){
    int determinant[column][row];
    cout << "TYPE THE VALUE OF MATRIX: " << endl << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout << "ROW[" << i+1 << "], COLUMN[" << j+1 << "]: ";
            cin >> determinant[i][j];
        }
        cout << endl;
    }
    cout << endl << "MATRIX: " << endl;
    printArray1(*determinant, row, column);
    cout << "DETERMINANT: " << det(*determinant) << endl;

    cout << endl;
    cin.get();
    return 0;
}
