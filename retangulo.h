#ifndef RETANGULO_H
#define RETANGULO_H
#include <poligono.h>
#include <point.h>

/**
 * @brief A classe Retangulo serve para manipular retangulos no plano XY
 */
class Retangulo : public Poligono{
    /**
     * @brief altura é a altura do retângulo
     */
    int altura;
    /**
     * @brief largura é a largura do retângulo
     */
    int largura;
public:
    /**
     * @brief Retangulo construtor da classe
     * @param x coordenada x do primeiro vértice
     * @param y coordenada y do primeiro vértice
     * @param largura_ define a altura do retângulo
     * @param altura_ define a largura do retângulo
     */
    Retangulo(int x, int y, int largura_, int altura_);

    /**
     * @brief ~Retangulo é o destrutor padrão da classe
     */
    ~Retangulo();

    /**
     * @brief centroide calcula as coordenadas do centróide de um retângulo
     * @return Ponto do centróide do retângulo
     */
    Point centroide(void);
};

#endif // RETANGULO_H
