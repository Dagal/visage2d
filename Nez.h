#ifndef NEZ_H
#define NEZ_H

#include <QGraphicsItem>
#include <QPainter>

class Nez : public QGraphicsItem
{
private:
  QPen* m_pen;

public:
  explicit Nez(QGraphicsItem *parent = 0);
  QRectF boundingRect() const;
  void paint(QPainter *painter,
             const QStyleOptionGraphicsItem *option,
             QWidget *widget);
  void setPen(QPen* pen);
};

#endif // NEZ_H
