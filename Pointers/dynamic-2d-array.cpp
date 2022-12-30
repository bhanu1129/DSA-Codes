#include <iostream>
using namespace std;

int main(){

    //CREATING
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    int col;
    cout<<"Enter the number of cols: ";
    cin>>col;

    int **arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    //TAKING INPUT
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++){ 
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //PRINTING
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //RELEASING MEMORY
    for(int i=0; i<row; i++){
        delete []arr[i];
    }
    delete []arr;


    return 0;
}       