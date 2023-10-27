#include<iostream>

using namespace std;

enum class op {PIEDRA, PAPEL, TIJERAS};

class MyEnum {
public:
    op equal;
    op upper;
    MyEnum(op a, op b):upper(a), equal(b){};
    void operation(op);
}piedra(op::PAPEL, op::PIEDRA), papel(op::TIJERAS, op::PAPEL), tijeras(op::PIEDRA, op::TIJERAS);

void MyEnum::operation(op e){
    if(this->upper == e){
        cout << "Player 1 win" << endl;
    }else if (this->equal == e)
    {
        cout << "drow" << endl;
    }else {
        cout << "player 2 win" << endl;
    }
}


int main(){
    int select;
    op option;
    
    cout << "Player 1 selec : 1)pedra 2)papel 3)tijeras" << endl;
    cin >> select; 
    
    switch (select)
    {
    case(1):
        option = op::PIEDRA;
        break;
    case(2):
        option = op::PAPEL;
        break;
    case(3):
        option = op::TIJERAS;
        break;
    }
    
    cout << "Player 2 selec : 1)pedra 2)papel 3)tijeras" << endl;
    cin >> select;

    switch (select)
    {
        case(1):
        piedra.operation(option);
        break;
        case(2):
        papel.operation(option);
        break;
        case(3):
        tijeras.operation(option);
        break;
    }
    return 0;
}