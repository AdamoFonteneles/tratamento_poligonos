#include <iostream>
#include <point.h>
#include <poligono.h>
#include <retangulo.h>

using namespace std;

int main(){


    Retangulo ret(0,0,4,3);
    Point centroide;

    cout << "Coordenadas iniciais: ";
    ret.print();
    cout << "Area inicial = " << ret.area() << endl;

    ret.move(-3,4);
    cout << "Coordenadas apos ser movidos: ";
    ret.print();
    cout << "Area apos ser movido = " << ret.area() << endl;

    centroide = ret.centroide();
    cout << "Coordenadas do centroide: ";
    centroide.imprime();

    ret.rotaciona(90,centroide.getX(),centroide.getY());
    cout << "Coordenadas apos ser rotacionado: ";
    ret.print();
    cout << "Area apos ser rotacionado = " << ret.area() << endl;


    /////////////////////////////////////////////////////////////////

    cout << "\n\n>> >> >> PONTOS << << <<\n\n";

    Point pon1;
    float _x, _y, angulo;

    cout << "Ponto inicializado como: ";
    pon1.imprime();

    cout << "Distancia do ponto ate a origem: " << pon1.norma() << endl;

    cout << "Defina a coordenada X do ponto: ";
    cin >> _x;
    cout << "Defina a coordenada Y do ponto: ";
    cin >> _y;
    pon1.setXY(_x,_y);
    cout << "Coordenadas atuais do ponto: ";
    pon1.imprime();
    cout << "Distancia do ponto ate a origem: " << pon1.norma() << endl;

    cout << "Altere a coordenada X do ponto: ";
    cin >> _x;
    cout << "Altere a coordenada Y do ponto: ";
    cin >> _y;
    pon1.translada(_x,_y);
    cout << "Coordenadas do ponto apos ser alterado: ";
    pon1.imprime();
    cout << "Distancia do ponto ate a origem: " << pon1.norma() << endl;

    ////////////////////////////////////////////////////////////////

    cout << "\n\n>> >> >> POLIGONOS << << <<\n\n";

    Poligono poli1;
    int tam=1;

    while(tam<3 || tam>100){
        cout << "Digite a quantidade de vertices do poligono: ";
        cin >> tam;
    }

    for(int i=0;i<tam;i++){
        cout << "Digite a posicao X do " << i+1 << "o vertice: ";
        cin >> _x;
        cout << "Digite a posicao Y do " << i+1 << "o vertice: ";
        cin >> _y;
        poli1.inserir(_x,_y);
    }

    cout << "Coordenadas atuais do poligono: ";
    poli1.print();
    cout << "Area atual do poligono: " << poli1.area() << endl;

    cout << "Escolha em quanto quer mover o poligono:\n";
    cin >> _x >> _y;
    poli1.move(_x, _y);

    cout << "Coordenadas depois de mover o poligono: ";
    poli1.print();
    cout << "Area depois do poligono ser movido: " << poli1.area() << endl;

    cout << "Digite o ponto de referencia para rotacionar:\n";
    cin >> _x >> _y;
    cout << "Escolha um angulo para rotacionar o poligono: ";
    cin >> angulo;
    poli1.rotaciona(angulo, _x, _y);
    cout << "Coordenadas do poligono apos ser rotacionado: ";
    poli1.print();
    cout << "Area do poligono apos ser rotacionado: " << poli1.area() << endl;
    cout << "Numero de vertices: " << poli1.numVertices() << endl;

    return 0;
}
