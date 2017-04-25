#include "retangulo.h"
#include <poligono.h>
#include <iostream>

using namespace std;

Retangulo::Retangulo(int x, int y, int largura_, int altura_){

    altura = altura_;
    largura = largura_;

    // definindo os 4 vertices baseados nos dados de
    // inicializacao do retangulo
    this->inserir(x, y);
    this->inserir(x , y - altura);
    this->inserir(x + largura, y - altura);
    this->inserir(x + largura, y);
    tam=4;
}

Retangulo::~Retangulo(){
    // não faz nada ao ser destruido
}

Point Retangulo::centroide(void){
    Point p1;

    p1.setX(this->vert[0].getX()+(largura/2.0));
    p1.setY(this->vert[0].getY()-(altura/2.0));

    return p1;
}
