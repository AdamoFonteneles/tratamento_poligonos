#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

/**
 * @brief A classe Poligono serve para manipular polígonos no plano XY
 */
class Poligono{
protected:
    /**
     * @brief tam quantidade de vértices do polígono
     */
    int tam=0;
public:
    /**
     * @brief vert é o vetor de pontos que caracterizam o polígono
     */
    Point vert[100];

    /**
     * @brief Poligono construtor padrão da classe
     */
    Poligono();

    /**
     * @brief ~Poligono destrutor padrão da classe
     */
    ~Poligono();

    /**
     * @brief inserir adiciona novos vértices ao polígono
     * @param _x representa x do novo vértice
     * @param _y representa y do novo vértice
     */
    void inserir(float _x, float _y);

    /**
     * @brief numVertices recupera a quantidade de vértices do polígono
     * @return número de vértices (tam)
     */
    int numVertices();

    /**
     * @brief area calcula a área do polígono
     */
    float area();

    /**
     * @brief move translada todo o polígono em (+a,+b)
     */
    void move(float a, float b);

    /**
     * @brief print imprime na tela todos os vértices do polígono
     */
    void print();

    /**
     * @brief rotaciona faz com que o polígono seja rotacionado
     * @param x é o angulo de rotação
     * @param px é a coordenada x do ponto de referência para rotação
     * @param py é a coordenada y do ponto de referência para rotação
     */
    void rotaciona(float x, float px, float py);

};

#endif // POLIGONO_H
