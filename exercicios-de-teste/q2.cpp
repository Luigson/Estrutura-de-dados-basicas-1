#include <iostream>
using namespace std;
bool ehPrimo(int numero) {
    if(numero == 1){
        return false;
    }
    else if (numero == 2 || numero == 3 || numero == 5 || numero == 7){
        return true;
    }
    else if (numero % 2 == 0){
        return false;
    }
    else if (numero % 3 == 0){
        return false;
    }
    else if (numero % 5 == 0){
        return false;
    }
    else if (numero % 7 == 0){
        return false;
    }
    else{
        return true;
    }
    return 0;
}
int main() {
    int testesPassados = 0;

    cout << "Teste 1: O resultado esperado é 1 e o valor retornado foi " << ehPrimo(5) << endl;
    if (ehPrimo(5) == true) testesPassados++;

    cout << "Teste 2: O resultado esperado é 0 e o valor retornado foi " << ehPrimo(10) << endl;
    if (ehPrimo(10) == false) testesPassados++;

    cout << "Teste 3: O resultado esperado é 1 e o valor retornado foi " << ehPrimo(13) << endl;
    if (ehPrimo(13) == true) testesPassados++;

    cout << "Teste 4: O resultado esperado é 0 e o valor retornado foi " << ehPrimo(1) << endl;
    if (ehPrimo(1) == false) testesPassados++;

    cout << "Teste 5: O resultado esperado é 1 e o valor retornado foi " << ehPrimo(17) << endl;
    if (ehPrimo(17) == true) testesPassados++;

    cout << "Sua implementação passou em " << testesPassados << " de 5 testes." << endl;

    return 0;
}