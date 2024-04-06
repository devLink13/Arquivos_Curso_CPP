#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> aula,teste;
    int tam;
    list<int>::iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    tam=10;
    for(int i=0; i<tam; i++){
        aula.push_front(i);
    }

    it=aula.begin();
    advance(it,3);
    aula.insert(it,0);

    advance(it,2);
    aula.insert(it,0);

    aula.erase(--it);

    //aula.clear();
    aula.merge(teste); // faz merge da lista teste com a lista aula, a lista teste fica vazia

    cout << "Tamanho da lista aula: " << aula.size() << "\n\n";
    cout << "Tamanho da lista merge: " << teste.size() << "\n\n";

    tam=aula.size();
    for(int i=0; i<tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    cout << "\nTamanho da lista: " << aula.size() << "\n";
	return 0;

}
