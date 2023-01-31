#include <iostream>
using namespace std;
int main()
{
    char choice;
    do {
    int n, pos = 0;
    cout << "Enter the size of Array :- ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of Array :- ";
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int num;
    cout << "Enter the number you want to find :- ";
    cin >> num;
    for(int i=0 ; i<n ; i++){
        if(num == arr[i]){
            pos = i;
            break;
        }
    }
    if (pos == 0){
            cout << "Element not found :(" << endl;
        }
    else {
        cout << "Element found at the position :- "<< pos+1 << ":)" << endl;
    }
    cout << "Enter your choice to continue/exit (y/n) :- ";
    cin >> choice;
    if (choice == 'y'){
    cout << "=========================================================" << endl;
    }
    }
    while(choice == 'y');
    cout << "*=========================================================*";
    return 0;
}
