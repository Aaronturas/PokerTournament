/*
Program to enter a list of names and provide a poker tournament order using vectors
05/11/2022
Aaron Ivan Gonzalez
CS110B
*/
#include <algorithm>
#include <iostream>
#include <vector>
#include <ctime>
#include <string>
using namespace std;

class poker {
        vector<string> nameT;
    public:
        poker(vector<string>);
        void sorted();
        void shuffle();//randomizes list of names
        void print();

};

poker::poker(vector<string> nt1) {
    nameT = nt1;
}
void poker::sorted() {
    //now sort the list
    sort(nameT.begin(), nameT.end());
    cout << "Sorted list: " << endl;
}
void poker::shuffle() {

    //now randomize the list
    random_shuffle(nameT.begin(), nameT.end());
    cout << "Randomized List: " << endl;
}
void poker::print() {
    int i = 1;
    for(string val : nameT){
        cout << "Player " << i << ": " << val << endl;
        i++;
    }
        cout << endl;
}

int main()
{
    srand(time(NULL));

    int num_players = 0;
    string nombre;

    //ask the user to enter how many people are playing
    cout << "Enter how many players are playing: ";
    cin >> num_players;

    //declare vector
    vector<string> names;
    for(int i = 1; i <= num_players; i++) {
        cout << "Name " << i << ": ";
        cin >> nombre;
        names.push_back(nombre);
    }

    cout << endl;//output spacing

    poker T(names);//calls constructor
   //sort the list
    T.sorted();

    //display sorted list
    T.print();

    //randomized list
    T.shuffle();

    //display the randomized list
    T.print();

    return 0;
}

/*
Enter how many players are playing: 10
Name 1: Franco
Name 2: Pablo
Name 3: Daniela
Name 4: Maria
Name 5: Antonio
Name 6: Layal
Name 7: Marcos
Name 8: Angelina
Name 9: Mbappe
Name 10: Haaland

Sorted list:
Player 1: Angelina
Player 2: Antonio
Player 3: Daniela
Player 4: Franco
Player 5: Haaland
Player 6: Layal
Player 7: Marcos
Player 8: Maria
Player 9: Mbappe
Player 10: Pablo

Randomized List:
Player 1: Mbappe
Player 2: Layal
Player 3: Pablo
Player 4: Maria
Player 5: Daniela
Player 6: Angelina
Player 7: Antonio
Player 8: Marcos
Player 9: Haaland
Player 10: Franco

*/
