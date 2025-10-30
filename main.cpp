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

//problem 4

int indexOflargestElement(double array[],int size) {
    for (int i = 0; i < size; i++) {
        cout << "enter "<<i+1<<"-number :";
        cin>>array[i];
    }
    double big = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > big) {
            big = array[i];
        }

    }
    for (int i = 0; i < size; i++) {
        if (array[i] == big) {
            return i;
            break;
        }
    }
}

   //problem 5


bool strictlyEqual( int list1[],  int list2[], int size1,int size2) {
    if (size1 != size2) {return 0;}
     for (int i = 0; i < size1; i++) {
         cout << "enter "<<i+1<<"-number of list 1: ";
         cin>>list1[i];
     }
     for (int i = 0; i < size2; i++) {
         cout << "enter "<<i+1<<"-number of list 2: ";
         cin>>list2[i];
    }

    for (int i = 0; i < size1; i++) {
        if (list1[i] != list2[i]) {return 0;}

    }
    return 1;

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
            if (array[j]+array[k]==target) {
                cout << "("<<j<<","<<k<<")"<<endl;
            }
        }
    }


//problem 4


    int size;
    cin >> size;
    double array[size];
cout <<indexOflargestElement( array, size);




    //problem 5

    int size1, size2;
    cout << "enter size of list 1 and list 2 : ";
    cin >> size1 >> size2;
    int list1[size1];
    int list2[size2];
    cout << strictlyEqual(list1,list2,size1,size2) << endl;



    //problem 6
    int siize;
    cout << "enter size of characters: ";
    cin >> siize;
    char arrayy[siize];
    for (int i = 0; i < siize; i++) {
        cout << "enter "<<i+1<<"-character: ";
        cin >> arrayy[i];
    }
   int uppercase=0, lowercase=0,digits=0,sybols=0;
  for (int i = 0; i < siize; i++) {
      if ((int)arrayy[i]>=65 && (int)arrayy[i]<=90){uppercase++;}
      else if ((int)arrayy[i]>=97 && (int)arrayy[i]<=122){lowercase++;}
      else if ((int)arrayy[i]>=48 && (int)arrayy[i]<=57){digits++;}
      else {sybols++;}
  }
    cout <<"uppercase: "<<uppercase<<endl;
    cout <<"lowercase: "<<lowercase<<endl;
    cout <<"digits: "<<digits<<endl;
    cout <<"Scecial: "<<sybols<<endl;

    */


//problem 7

    cout <<"enter number of numbers:";
    int n;
    cin >>n;
    float array[n];
    for (int i = 0; i < n; i++) {
        cout << "enter "<<i+1<<"-number: ";
        cin >> array[i];

    }


    return 0;}