#ifndef POINT_H
#define POINT_H

/**
 * @brief A classe Ponto serve para manipular pontos no plano XY
 */
class Point{
    /**
     * @brief x representa a primeira coordenada do ponto
     * @brief y representa a segunda coordenada do ponto
     */
    float x, y;
public:
    /**
     * @brief Point é o construtor da classe
     */
    Point(float _x=0, float _y=0);

    /**
     * @brief ~Point é o destrutor padrão da classe
     */
    ~Point();

    /**
     * @brief setX atribui novo valor à coordenada x
     * @param _x é o novo valor de x
     */
    void setX(float _x);

    /**
     * @brief setY atribui novo valor à coordenada y
     * @param _y é o novo valor de y
     */
    void setY(float _y);

    /**
     * @brief setXY atribui novos valores às coordenadas x e y
     * @param _x é o novo valor de x
     * @param _y é o novo valor de y
     */
    void setXY(float _x, float _y);

    /**
     * @brief getX recupera o valor da coordenada x
     * @return valor de x
     */
    float getX();

    /**
     * @brief getY recupera o valor da coordenada x
     * @return valor de y
     */
    float getY();

    /**
     * @brief add soma dois pontos
     * @param p1 é o ponto a ser somado
     */
    void add(Point p1);

    /**
     * @brief sub subtrai um ponto de outro
     * @param p1 é o ponto a ser subtraído
     */
    void sub(Point p1);

    /**
     * @brief norma calcula a distancia do ponto até a origem
     */
    float norma();

    /**
     * @brief translada adiciona a e b às coordenadas do vetor
     * @param a é somado a x
     * @param b é somado a y
     */
    void translada(float a, float b);

    /**
     * @brief imprime o ponto na tela na forma (x, y)
     */
    void imprime();
};

#endif // POINT_H
