#include <iostream>
using namespace std;

void printRowSum(int arr[][3], int row, int col){

    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

void printColSum(int arr[][3], int row, int col){

    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            sum+=arr[col][row];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int largestRowSum(int arr[][3], int row, int col){

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex = row;
        }
    }
    cout<<"The largest row sum is --> "<<maxi<<endl;
    return rowIndex;
}

int main(){

    int arr[3][3];
    cout<<"Enter the elements -> "<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

    cout<<"Printing row sum --> "<<endl;
    printRowSum(arr, 3, 3);
    cout<<"Printing col sum --> "<<endl;
    printColSum(arr, 3, 3);

    int ansIndex = largestRowSum(arr, 3, 3);
    cout<<"Largest row sum is at index --> "<<ansIndex<<endl;
    

    return 0;
}       