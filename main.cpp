#include <iostream>
using namespace std;


// problem 3

float mineee(int n) {
    float array2[n];
    for (int i = 0; i < n; i++) {
        cout << "enter "<<i+1<<"-number: ";
        cin >> array2[i];
    }
    float mini=array2[0];
    for (int i = 1; i < n; i++) {
        if (array2[i] < mini) {
            mini = array2[i];
        }
    }
    return mini;
}



int main() {

// arrays
/*


//problem 1


int n,sum = 0;
cout << "enter number of numbers: "<<endl;
    cin >> n;
int array[n];
for (int i=0; i < n; i++) {
    cout << "enter "<<i+1<<"-"<<"number :";
cin >> array[i];}

for (int i = 0; i < n; i++) {

sum = sum + array[i];}

cout <<"sum is "<<sum<<endl;



//problem 2

    int n,sum = 0;
    cout << "enter number of numbers: "<<endl;
    cin >> n;
    int array[n];
    for (int i=0; i < n; i++) {
        cout << "enter "<<i+1<<"-"<<"number :";
        cin >> array[i];}

    for (int i = 0; i < n; i++) {

        sum = sum + array[i];}
    cout << "avarege is "<<float(sum)/n;



//problem 3 rest

    cout << "enter number of elements: ";
    int n;
    cin >> n;
    cout <<mineee(n);

    */
//problem 11
    int n,target;
    cout <<" enter the target; ";
    cin >> target;
    cout << "enter number of numbers: "<<endl;
    cin >> n;
    int array[n];
    for (int i=0; i < n; i++) {
        cout << "enter "<<i+1<<"-"<<"number :";
        cin >> array[i];}
    for (int j=0; j < n-1; j++) {
        for (int k=j+1; k < n; k++) {
            if (j+k==target) {
                cout << "("<<j<<","<<k<<")"<<endl;")";
            }
        }
    }



return 0;}