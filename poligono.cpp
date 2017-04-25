#include <iostream>
#include "poligono.h"
#include <point.h>
#include <cmath>

//PI/180
#define GRAUS 0.01745329251

using namespace std;

Poligono::Poligono(){
    // ao ser construido são criados os 100 pontos
    // e os pontos são criados com posições (0,0)
}

Poligono::~Poligono(){
    // não faz nada ao ser destuido
}

void Poligono::inserir(float _x, float _y){
    vert[tam].setX(_x);
    vert[tam].setY(_y);
    tam++;
}

int Poligono::numVertices(){
    return tam;
}

float Poligono::area(){
    // encerra o programa caso o usuario tenha digitado menos que 3 vértices
    // que é o necessario para criar o menor polígono (triangulo)
    if(tam < 3) exit(0);

    float soma_1=0, soma_2=0;

    for(int i=0; i < tam; i++){
        if(i != tam-1)
            soma_1 = soma_1 + vert[i].getX() * vert[i+1].getY();
        else
            soma_1 = soma_1 + vert[i].getX() * vert[0].getY();
    }

    for(int i=0; i < tam; i++){
        if(i!=tam - 1)
            soma_2 += vert[i].getY() * vert[i+1].getX();
        else
            soma_2 += vert[i].getY() * vert[0].getX();
    }
    return ((soma_1 - soma_2)/2);
}

void Poligono::move(float a, float b){
    for(int i=0; i < tam; i++){
        // funcionamento parecido com x=x+a
        vert[i].setX(vert[i].getX() + a);
        // funcionamento parecido com y=y+b
        vert[i].setY(vert[i].getY() + b);
    }

}

void Poligono::print(){
    for(int i=0; i < tam; i++){
        if(i!=tam-1)
            cout << "(" << vert[i].getX() << ", " << vert[i].getY() << ") -> ";
        else
            cout << "(" << vert[i].getX() << ", " << vert[i].getY() << ")\n";
    }
}

void Poligono::rotaciona(float grau, float px, float py){
    float seno = sin(GRAUS*grau);
    float cosseno = cos(GRAUS*grau);
    float _x, _y;

    for(int i=0; i < tam; i++){
        // criei _x e _y para facilitar a visualizacao do que acontece
        // na rotacao (ficaria muito extenso e feio se mantido o original)
        _x = vert[i].getX();
        _y = vert[i].getY();

        vert[i].setX(cosseno * (_x - px) - seno * (_y - py) + px);
        vert[i].setY(seno * (_x - px) + cosseno * (_y - py) + py);
    }
}









